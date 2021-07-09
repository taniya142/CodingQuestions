// import java.io.*;
import java.util.*;

public class Main {
  public static void display(int[][] board) {
    for (int i = 0; i < board.length; i++) {
      for (int j = 0; j < board[0].length; j++) {
        System.out.print(board[i][j] + " ");
      }
      System.out.println();
    }
  }

  public static boolean isValid(int[][] board, int x, int y, int po) {
    for (int i = 0; i < board.length; i++) {
      if (po == board[i][y]) {
        return false;
      }
    }
    for (int j = 0; j < board[0].length; j++) {
      if (po == board[x][j]) {
        return false;
      }
    }

    int smi = 3 * (x / 3);
    int smj = 3 * (y / 3);

    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        if (board[smi + i][smj + j] == po) {
          return false;
        }
      }
    }

    return true;
  }

  public static void solveSudoku(int[][] board, int i, int j) {
    // write yopur code here
    if (i == board.length){
      display(board);
    return;
  }

  int ni = 0;
  int nj = 0;

  if (j == board[0].length - 1) {
    ni = i + 1;
    nj = 0;
  } else {
    ni = i;
    nj = j + 1;
  }

  if (board[i][j] != 0) {
    solveSudoku(board, ni, nj);
  } else {
    for (int po = 1; po <= 9; po++) {
      if (isValid(board, i, j, po) == true) {
        board[i][j] = po;
        solveSudoku(board, ni, nj);     //agr galat ho gya to waps gye
        board[i][j] = 0;                //or wapas 0 dalna hoga
      }
    }
  }

}

public static void main(String[] args) throws Exception {
  Scanner scn = new Scanner(System.in);
  int[][] arr = new int[9][9];
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      arr[i][j] = scn.nextInt();
    }
  }

  solveSudoku(arr, 0, 0);
}
}
