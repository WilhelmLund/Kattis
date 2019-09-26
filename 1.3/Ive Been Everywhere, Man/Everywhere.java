import java.util.HashSet;
import java.util.Scanner;

public class Everywhere{
	private HashSet<String> set;

	public Everywhere(){
		set = new HashSet<String>();
		Scanner scan = new Scanner(System.in);
		scan.next();
		int N, count;
		while(scan.hasNext()){
			String s = scan.next();
			count = 0;
			N = Integer.parseInt(s);
			for(int i = 0; i < N; i++){
				s = scan.next();
				if(set.add(s))
					count++;
			}
			System.out.println(count);
		}
	}

	public static void main(String[] args){
		Everywhere e = new Everywhere();
	}
}