import java.util.Scanner;

public class SecondEclipse {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
	    System.out.println("Enter your Grade :");
		
	    int grade = scan.nextInt();
		
	    if(90 <= grade && grade <= 100 ) {
	    	System.out.println("You got an A+");
	    }
	    else if (85 <= grade && grade <= 89 ) {
	    	System.out.println("You got an A");
	    }
	    else if(80 <= grade && grade <= 84 ) {
	    	System.out.println("You got an A-");
	    }
	    else if(75 <= grade && grade <= 79 ) {
	    	System.out.println("You got an B+");
	    }
	    else if(70 <= grade && grade <= 74 ) {
	    	System.out.println("You got an B");
	    }
	    else if(65 <= grade && grade <= 69 ) {
	    	System.out.println("You got an B-");
	    }
	    else if(60 <= grade && grade <= 64 ) {
	    	System.out.println("You got an C+");
	    }
	    else if(55 <= grade && grade <= 59 ) {
	    	System.out.println("You got an C");
	    }
	    else if(50 <= grade && grade <= 54 ) {
	    	System.out.println("You got an C-");
	    }
	    else if(40 <= grade && grade <= 49 ) {
	    	System.out.println("You got an D");
	    }
	    else {
	    	System.out.println("You got an E");
	    }
	    
		
		
		}
	}
