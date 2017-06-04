import java.util.Scanner;

public class Main {
	
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		
		int arr[] = new int[3];
		
		int count = 0;
		arr[0] = sc.nextInt();
		arr[1] = sc.nextInt();
		arr[2] = sc.nextInt();
		
		while(true)
		{
			int left = arr[1] - arr[0];
			int right = arr[2] - arr[1];
			
			if(left == 1 && right == 1)
				break;
			
			if(left < right)
			{
				arr[0] = arr[1];
				arr[1] = arr[2] - 1;
			}
			else if(left >= right)
			{
				arr[2] = arr[1];
				arr[1] = arr[0] + 1;
			}
			count++;
		}
		
		System.out.println(count);
	}
}
