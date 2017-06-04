import java.util.Scanner;

public class Main {
	
	public static int max(int a, int b)
	{
		return a>b?a:b;
	}
	
	
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		
		int T = sc.nextInt();
		
		int arr[][] = new int[100001][2];
		int d[][] = new int[100001][2];
		
		for(int i=0;i<T;i++)
		{
			int n = sc.nextInt();
			
			
			for(int k=0;k<2;k++)
			{
				for(int j=1;j<=n;j++)
				{
					arr[j][k] = sc.nextInt();
				}
			}
			
			d[1][0] = arr[1][0];
			d[1][1] = arr[1][1];
			
			for(int j=2;j<=n;j++)
			{
				d[j][0] = max(max(d[j-2][1],d[j-1][1]) + arr[j][0],d[j-1][0]);
				d[j][1] = max(max(d[j-2][0],d[j-1][0]) + arr[j][1],d[j-1][1]);
			}
			
			System.out.println(max(d[n][0],d[n][1]));
		}
	}

}
