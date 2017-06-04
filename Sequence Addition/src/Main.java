import java.util.Scanner;

public class Main {
	
	public static int max(int a, int b)
	{
		return a>=b?a:b;
	}
	
	public static void main(String args[])
	{
		
		Scanner sc = new Scanner(System.in);
		int d[] = new int[100001];
		int arr[] = new int[100001];
		
		int num = sc.nextInt();
		for(int i=1;i<=num;i++)
		{
			arr[i] = sc.nextInt();
		}
		
		d[1] = arr[1];
		for(int i=2;i<=num;i++)
		{
			d[i] = max(d[i-1] + arr[i],arr[i]);
		}
		int m = -1001;
		for(int i=1;i<=num;i++)
		{
			m = max(m,d[i]);
		}
		
		System.out.println(m);
	}

}
