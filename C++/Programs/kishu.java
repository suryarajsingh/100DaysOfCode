import java.util.*;
class kishu
{
	public static void main(String arr[])
	{
		Scanner sc=new Scanner(System.in);
		int ch,n,r=0,a,b;
		System.out.println("MENU");
		System.out.println("1.Buzz Number");
		System.out.println("2.GCD");
		System.out.println("Enter your choice:");
		ch=sc.nextInt();
		switch(ch)
		{
			case 1:
			System.out.println("Enter a number:");
			n=sc.nextInt();
			if(n%7==0 || n%10==7)
			System.out.println("Is Buzz Number");
			else
			System.out.println("Not a Buzz Number");
			break;
			case 2:
			System.out.println("Enter 2 numbers:");
			a=sc.nextInt();		
			b=sc.nextInt();
			for(r=a%b;r>0;r=a%b)
			{
				a=b;
				b=r;
			}
            System.out.println("GCD="+b);
		break;
		default:
		System.out.println("Invalid choice");
		}
		
	}
}