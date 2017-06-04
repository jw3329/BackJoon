import java.util.Scanner;

public class Main {
	
	public static int max(int a, int b)
	{
		return a>b?a:b;
	}
	
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		
		int num = sc.nextInt();
		
		int arr[] = new int[10001];
		int d[][] = new int[10001][2];
		
		for(int i=1;i<=num;i++)
		{
			arr[i] = sc.nextInt();
		}
		
		d[1][0] = d[1][1] = arr[1];
		d[2][0] = arr[2];
		d[2][1] = arr[1] + arr[2];
		
		for(int i=3;i<=num;i++)
		{
			d[i][0] = max(d[i-2][0],max(d[i-3][1],d[i-2][1])) + arr[i];
			d[i][1] = d[i-1][0] + arr[i];
		}
		
		int temp = 0;
		for(int i=1;i<=num;i++)
		{
			temp = max(temp,max(d[i][0],d[i][1]));
		}
		
		System.out.println(temp);
		sc.close();
	}

}
