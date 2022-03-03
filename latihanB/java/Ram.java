public class Ram {
    private int capacity;
    private int price;

    Ram() {}

    Ram(int capacity, int price) {
        this.capacity = capacity;
        this.price = price;
    }

    public void setCapacity(int capacity) {
        this.capacity = capacity;
    }

    public int getCapacity() {
        return this.capacity;
    }

    public void setPrice(int price) {
        this.price = price;
    }

    public int getPrice() {
        return this.price;
    }

    public void printRam() {
        System.out.println("Capacity\t: " + this.capacity + " GB");
        System.out.println("Price\t\t: " + this.price + " IDR");
    }
}
