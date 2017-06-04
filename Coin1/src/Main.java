import java.util.Scanner;

public class Main {
	
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt(), k = sc.nextInt();
		
		int coin[] = new int[101];
		int d[] = new int[10001];
		
		for(int i=1;i<=n;i++)
			coin[i] = sc.nextInt();
		
		d[0] = 1;
		for(int i=1;i<=n;i++)
		{
			for(int j=coin[i];j<=k;j++)
			{
				d[j] += d[j-coin[i]];
			}
		}
		System.out.println(d[k]);
	}

}
