import java.util.Scanner;

public class Main {
	
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int score[] = new int[1010];
		int T = sc.nextInt();
		
		for(int i=0;i<T;i++)
		{
			int N = sc.nextInt();
			double sum = 0;
			for(int j=0;j<N;j++)
			{
				score[j] = sc.nextInt();
				sum += score[j];
			}
			
			sum /= N;
			double count = 0;
			for(int j=0;j<N;j++)
			{
				if(score[j] > sum)
					count++;
			}
			
			System.out.format("%.3f%%", count/N*100);
		}
		sc.close();
	}

}
