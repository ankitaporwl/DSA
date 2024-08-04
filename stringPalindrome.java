//String is Palindrome or not
class demo{
	public static void main(String ar[]){
		String s1="abcba";
		int i,j;
		int n=s1.length()-1;
		int c=1;
		for(i=0,j=n;i<=n/2;i++,j--){
			if(s1.charAt(i)!=s1.charAt(j)) c=0;
		}
		if(c==1) System.out.println("String is Palindrome");
		else System.out.println("String is not palindrome");
	}
}