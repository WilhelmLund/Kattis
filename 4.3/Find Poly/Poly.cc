#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

struct Node{
    int x, y;
    bool visited;
    vector<Node*> connectedNodes; //nodes connected to this one via line segment
    friend bool operator==(Node a, Node b){
        return (a.x == b.x) && (a.y == b.y);
    }
};

static Node nodes[400];
int index = 0;

Node* makeNode(string s){
    int x = stoi(s.substr(s.find('(')+1,s.find(','))); 
    int y = stoi(s.substr(s.find(',')+1,s.find(')'))); 
    Node* node = new Node();
    node->x = x;
    node->y = y;
    node->visited = false;
    node->connectedNodes = vector<Node*>();

    for(int i = 0; i < index; i++){
        if(*node == nodes[i]){
            return &(nodes[i]);
        }
    } 
    nodes[index] = (*node);
    return &(nodes[index++]);
}

bool visitPoly(Node& n){
	//cout << "(" << n.x << ", " << n.y << ")";
    if(n.connectedNodes.size() != 2){
    //	cout << endl << "not a polygon"<< endl;
        return false;
    }
    n.visited = true;
    if(!n.connectedNodes[0]->visited){
    //	cout << "(" << n.connectedNodes[0]->x << ", " << n.connectedNodes[0]->y << ")" << endl;
        if(!visitPoly(*n.connectedNodes[0])){
            n.visited = false;
            return false;
        }
    }
    else if(!n.connectedNodes[1]->visited){
    //	cout << "(" << n.connectedNodes[1]->x << ", " << n.connectedNodes[1]->y << ")" << endl;
        if(!visitPoly(*n.connectedNodes[1])){
            n.visited = false;
            return false;
        }
    }
    return true;
}

void visitAll(Node& n){
    n.visited = true;
    for(int i = 0; i < n.connectedNodes.size(); i++)
        if(!n.connectedNodes[i]->visited)
            visitAll(*n.connectedNodes[i]);
}

int main(){
    string s; 
    Node *A, *B;

    // parse input, create nodes
    while(getline(cin, s, ';')){
        int found = s.find('(');
        if(found > -1){
            A = makeNode(s.substr(0, s.find(',', s.find(',')+1)));
            B = makeNode(s.substr(s.find(',', s.find(',')+1)+1, s.size()-1));
            
            A->connectedNodes.push_back(B);
            B->connectedNodes.push_back(A);
        }
    }

    //start visiting nodes
    int polygons = 0, figures = 0;
    for(int i = 0; i < index; i++){
        Node n = nodes[i];
        if(!n.visited){
            if(visitPoly(n)){
                figures++;
                polygons++;
            }
            else{
                visitAll(n);
                figures++;
            }
        }
    }

    cout << figures << " " << polygons << endl;
}
