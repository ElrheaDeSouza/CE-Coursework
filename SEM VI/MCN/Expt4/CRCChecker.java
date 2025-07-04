import java.util.Scanner;

public class CRCChecker {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Sender Side
        System.out.print("Enter the binary data: ");
        String binaryData = scanner.nextLine();

        System.out.print("Enter the generator g(x): ");
        String generator = scanner.nextLine();

        if (!binaryData.matches("[01]+") || !generator.matches("[01]+")) {
            System.out.println("Invalid input! Please enter binary values only.");
            scanner.close();
            return;
        }

        int generatorLength = generator.length();
        String appendedData = binaryData + generateZeros(generatorLength - 1);

        String[] senderResult = binaryDivision(appendedData, generator);
        String transmittedCodeword = binaryData + senderResult[1];

        System.out.println("\nFinal Remainder at Sender: " + senderResult[1]);
        System.out.println("Transmitted Codeword: " + transmittedCodeword);

        // Receiver Side
        System.out.print("\nEnter the received codeword: ");
        String receivedCodeword = scanner.nextLine();

        System.out.print("Enter the generator g(x) at receiver: ");
        String receiverGenerator = scanner.nextLine();

        int receiverGeneratorLength = receiverGenerator.length();
        String receiverData = receivedCodeword + generateZeros(receiverGeneratorLength - 1);

        String[] receiverResult = binaryDivision(receiverData, receiverGenerator);

        System.out.println("\nFinal Remainder at Receiver: " + receiverResult[1]);

        if (receiverResult[1].matches("0+")) {
            System.out.println("No error detected ");
        } else {
            System.out.println("Error detected.\n Discarding codeword.");
        }

        scanner.close();
    }

    // Function to perform binary division and return quotient and remainder
    public static String[] binaryDivision(String dividend, String divisor) {
        int dividendLen = dividend.length();
        int divisorLen = divisor.length();

        String remainder = dividend.substring(0, divisorLen);
        StringBuilder quotient = new StringBuilder();

        for (int i = divisorLen; i <= dividendLen; i++) {
            if (remainder.charAt(0) == '1') {
                remainder = xor(remainder, divisor);
                quotient.append('1');
            } else {
                quotient.append('0');
            }

            if (i < dividendLen) {
                remainder += dividend.charAt(i);
            }

            remainder = remainder.substring(1);
        }

        return new String[]{quotient.toString(), remainder};
    }

    // Function to perform XOR between two binary strings
    public static String xor(String a, String b) {
        StringBuilder result = new StringBuilder();
        for (int i = 0; i < b.length(); i++) {
            result.append(a.charAt(i) == b.charAt(i) ? '0' : '1');
        }
        return result.toString();
    }

    // Function helping to generate a string of zeros of specified length
    public static String generateZeros(int count) {
        StringBuilder zeros = new StringBuilder();
        for (int i = 0; i < count; i++) {
            zeros.append('0');
        }
        return zeros.toString();
    }
}
