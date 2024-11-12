// Source code is decompiled from a .class file using FernFlower decompiler.
class Merge {
    Merge() {
    }

    static void merge(int[] var0, int var1, int var2, int var3) {
        int var4 = var2 - var1 + 1;
        int var5 = var3 - var2;
        int[] var6 = new int[var4];
        int[] var7 = new int[var5];

        int var8;
        for (var8 = 0; var8 < var4; ++var8) {
            var6[var8] = var0[var1 + var8];
        }

        for (var8 = 0; var8 < var5; ++var8) {
            var7[var8] = var0[var2 + 1 + var8];
        }

        var8 = 0;
        int var9 = 0;

        int var10;
        for (var10 = var1; var8 < var4 && var9 < var5; ++var10) {
            if (var6[var8] <= var7[var9]) {
                var0[var10] = var6[var8];
                ++var8;
            } else {
                var0[var10] = var7[var9];
                ++var9;
            }
        }

        while (var8 < var4) {
            var0[var10] = var6[var8];
            ++var8;
            ++var10;
        }

        while (var9 < var5) {
            var0[var10] = var7[var9];
            ++var9;
            ++var10;
        }

    }

    static void MergeSort(int[] var0, int var1, int var2) {
        if (var1 < var2) {
            int var3 = var1 + (var2 - var1) / 2;
            MergeSort(var0, var1, var3);
            MergeSort(var0, var3 + 1, var2);
            merge(var0, var1, var3, var2);
        }

    }

    static void printArray(int[] var0) {
        int var1 = var0.length;

        for (int var2 = 0; var2 < var1; ++var2) {
            System.out.print(var0[var2] + " ");
        }

    }

    public static void main(String[] var0) {
        int[] var1 = new int[] { 12, 11, 13, 5, 6, 7 };
        System.out.print("Given array is : ");
        printArray(var1);
        MergeSort(var1, 0, var1.length - 1);
        System.out.print("\nSorted array is : ");
        printArray(var1);
    }
}
