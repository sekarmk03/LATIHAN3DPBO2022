import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = 0;

        System.out.print("Jumlah PC: ");
        try {
            n = sc.nextInt();
        } catch (Exception e) {
        }
        Pc[] pcs;
        pcs = new Pc[n];

        for(int i = 0; i < n; i++) {
            String processorName = "", diskType = "";
            int processorPrice = 0, diskPrice = 0, diskCapacity = 0, ramPrice = 0, ramCapacity = 0;

            System.out.println("-- Input PC " + (i+1) + " --");
            try {
                System.out.print("Processor Name: ");
                processorName = sc.next();
            } catch (Exception e) {
            }
            try {
                System.out.print("Processor Price: ");
                processorPrice = sc.nextInt();
            } catch (Exception e) {
            }
            try {
                System.out.print("Disk Type: ");
                diskType = sc.next();
            } catch (Exception e) {
            }
            try {
                System.out.print("Disk Capacity: ");
                diskCapacity = sc.nextInt();
            } catch (Exception e) {
            }
            try {
                System.out.print("Disk Price: ");
                diskPrice = sc.nextInt();
            } catch (Exception e) {
            }
            try {
                System.out.print("Ram Capacity: ");
                ramCapacity = sc.nextInt();
            } catch (Exception e) {
            }
            try {
                System.out.print("Ram Price: ");
                ramPrice = sc.nextInt();
            } catch (Exception e) {
            }

            Processor processorObj = new Processor(processorName, processorPrice);
            Disk diskObj = new Disk(diskType, diskCapacity, diskPrice);
            Ram ramObj = new Ram(ramCapacity, ramPrice);

            pcs[i] = new Pc(processorObj, diskObj, ramObj);
        }

        System.out.println("++ Data PCs ++");
        for(int i = 0; i < pcs.length; i++) {
            System.out.println("[ PC " + (i+1) + " ]");
            pcs[i].printPc();
            System.out.println();
        }
    }
}
