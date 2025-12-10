import java.util.*;

public class MatrixMinimizer {

    static boolean isFeasible(int maxAllowedValue, int rows, int cols, int[][] matrix) {
        // Check for impossible values
        for (int row = 0; row < rows; ++row) {
            for (int col = 0; col < cols; ++col) {
                if (matrix[row][col] > maxAllowedValue + 1) {
                    return false;
                }
            }
        }

        boolean[][] needsReduction = new boolean[rows][cols];
        int[] rowIssueCount = new int[rows];
        int[] colIssueCount = new int[cols];
        int totalIssues = 0;

        // Mark problematic cells
        for (int row = 0; row < rows; ++row) {
            for (int col = 0; col < cols; ++col) {
                if (matrix[row][col] > maxAllowedValue) {
                    needsReduction[row][col] = true;
                    rowIssueCount[row]++;
                    colIssueCount[col]++;
                    totalIssues++;
                }
            }
        }

        // If there are no problematic cells, it's already valid
        if (totalIssues == 0) {
            return true;
        }

        // Try each (row, col) pair to see if we can cover all issues
        for (int candidateRow = 0; candidateRow < rows; ++candidateRow) {
            for (int candidateCol = 0; candidateCol < cols; ++candidateCol) {
                int covered = rowIssueCount[candidateRow] + colIssueCount[candidateCol];
                if (needsReduction[candidateRow][candidateCol]) {
                    covered--; // don't double-count intersection
                }
                if (covered == totalIssues) {
                    return true;
                }
            }
        }

        return false;
    }

    static void findMinimumMaxValue(Scanner inputScanner) {
        int rowCount = inputScanner.nextInt();
        int colCount = inputScanner.nextInt();
        int[][] matrix = new int[rowCount][colCount];
        int highestValue = 0;

        // Input matrix and track max value
        for (int row = 0; row < rowCount; ++row) {
            for (int col = 0; col < colCount; ++col) {
                matrix[row][col] = inputScanner.nextInt();
                highestValue = Math.max(highestValue, matrix[row][col]);
            }
        }

        // Binary search to find minimum maximum value
        int left = 0, right = highestValue, answer = highestValue;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (isFeasible(mid, rowCount, colCount, matrix)) {
                answer = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        System.out.println(answer);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int testCases = scanner.nextInt();
        while (testCases-- > 0) {
            findMinimumMaxValue(scanner);
        }
        scanner.close();
    }
}
