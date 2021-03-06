class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        m = len(matrix)
        n = len(matrix[0])

        coordinates = [[0 for i in range(n)] for j in range(m)]
        for i in range(m):
            for j in range(n):
                if matrix[i][j] == 0:
                    coordinates[i][j] = 1

        for i in range(m):
            for j in range(n):
                if coordinates[i][j] == 1:
                    for k in range(n):
                        matrix[i][k] = 0
                    # zeroing the column
                    for c in range(m):
                        matrix[c][j] = 0


