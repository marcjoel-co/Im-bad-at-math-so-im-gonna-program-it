//note that everything holds true if it runs successfully this is just a simple program to prove the axioms
import java.util.Scanner;

/**
 * AxiomProver - A program to demonstrate and prove basic integer axioms
 * 
 * This program allows exploration of two key axioms:
 * 1. Multiplicative Axiom: (-1)a = -a
 * 2. Transitive Axiom: If a = b, then -a = -b
 */
public class AxiomProver {
    // Scanner for user input
    private static Scanner scanner = new Scanner(System.in);

    /**
     * Proves the Multiplicative Axiom: (-1)a = -a
     * 
     * @param a The input integer
     * @return Boolean indicating if the axiom holds true
     */
    public static boolean provideMultiplicativeAxiom(int a) {
        // Compute (-1)a
        int leftSide = (-1) * a;
        
        // Compute -a
        int rightSide = -a;
        
        // Check if the two sides are equal
        boolean isProven = (leftSide == rightSide);
        
        // Print detailed explanation
        System.out.println("\n1. Multiplicative Axiom Proof:");
        System.out.println("   (-1)a = -a");
        System.out.println("   For a = " + a);
        System.out.println("   Left side ((-1)a): " + leftSide);
        System.out.println("   Right side (-a):   " + rightSide);
        System.out.println("   Axiom Holds: " + isProven);
        
        return isProven;
    }

    /**
     * Proves the Transitive Axiom: If a = b, then -a = -b
     * 
     * @param a First integer
     * @param b Second integer
     * @return Boolean indicating if the axiom holds true
     */
    public static boolean provideTransitiveAxiom(int a, int b) {
        // First, check if a == b
        boolean initialEquality = (a == b);
        
        // If a and b are equal, check the negation
        boolean negationEquality = (-a == -b);
        
        // Combine the conditions
        boolean isProven = initialEquality ? negationEquality : true;
        
        // Print detailed explanation
        System.out.println("\n2. Transitive Axiom Proof:");
        System.out.println("   If a = b, then -a = -b");
        System.out.println("   a = " + a);
        System.out.println("   b = " + b);
        System.out.println("   Initial Equality (a = b): " + initialEquality);
        
        if (initialEquality) {
            System.out.println("   Negation Equality (-a = -b): " + negationEquality);
        }
        
        System.out.println("   Axiom Holds: " + isProven);
        
        return isProven;
    }

    /**
     * Main method to run the Axiom Prover
     * Handles user input and program flow
     */
    public static void main(String[] args) {
        System.out.println("Axiom Prover - Mathematical Axioms Demonstration");
        
        try {
            // Prompt for first variable
            System.out.print("Enter first integer (a): ");
            int a = scanner.nextInt();
            
            // Prompt for second variable (for transitive axiom)
            System.out.print("Enter second integer (b): ");
            int b = scanner.nextInt();
            
            // Prove Multiplicative Axiom
            provideMultiplicativeAxiom(a);
            
            // Prove Transitive Axiom
            provideTransitiveAxiom(a, b);
            
        } catch (Exception e) {
            System.out.println("Error: Please enter valid integers.");
        } finally {
            scanner.close();
        }
    }
}