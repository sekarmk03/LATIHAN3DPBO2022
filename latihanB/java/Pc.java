public class Pc {
    private Processor processorObj;
    private Disk diskObj;
    private Ram ramObj;
    private int totalPrice;

    Pc() {}

    Pc(Processor pObj, Disk dObj, Ram rObj) {
        this.processorObj = pObj;
        this.diskObj = dObj;
        this.ramObj = rObj;
        this.totalPrice = 0;
    }

    public void setProcessor(Processor pObj) {
        this.processorObj = pObj;
    }

    public Processor getProcessor() {
        return this.processorObj;
    }

    public void setDisk(Disk dObj) {
        this.diskObj = dObj;
    }

    public Disk getDisk() {
        return this.diskObj;
    }

    public void setRam(Ram rObj) {
        this.ramObj = rObj;
    }

    public Ram getRam() {
        return this.ramObj;
    }

    public void setTotalPrice(int pPrice, int dPrice, int rPrice) {
        this.totalPrice = pPrice + dPrice + rPrice;
    }

    public int getTotalPrice() {
        return this.totalPrice;
    }

    public void printPc() {
        System.out.println("-> Processor");
        this.processorObj.printProcessor();
        System.out.println("-> Disk");
        this.diskObj.printDisk();
        System.out.println("-> Ram");
        this.ramObj.printRam();
        this.setTotalPrice(this.processorObj.getPrice(), this.diskObj.getPrice(), this.ramObj.getPrice());
        System.out.println("-> Total Price");
        System.out.println("   " + this.totalPrice + " IDR");
    }
}
