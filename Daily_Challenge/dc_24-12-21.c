import java.util.*;
public class Hello {

    public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int r=sc.nextInt();
		int c=sc.nextInt();
		int[][] a=new int[r][c];
		for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
		a[i][j]=sc.nextInt();
		int x=sc.nextInt();
		int y=sc.nextInt();
		int xi=0,yi=0,xj=0,yj=0;
		for(int i=0;i<r;i++)
		{
		    for(int j=0;j<c;j++)
		        {
		            if(a[i][j]==x)
		            {xi=i;xj=j;}
		            if(a[i][j]==y)
		            {yi=i;yj=j;}
		        }
		}
		int i=xi,j=xj,f=0;
	    while(i<r&&j<c)
		{
		       if(a[i][j]!=y)
		         {
		           System.out.print(a[i][j]+" ");
		            if(i==r-1&&j==c-1)
		            {
		                i=0;
		               j=0;
		            }
		          else if(j==c-1)
		        {
		            i+=1;
		            j=0;
		        }
		        else
		        j++;
		        }
		        else
		        {
		        f=1;
		        System.out.print(a[i][j]);
		        }
		    if(f==1)
		    break;
		        }
		    }
}