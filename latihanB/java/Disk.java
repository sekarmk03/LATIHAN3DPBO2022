public class Disk {
    private String type;
    private int capacity;
    private int price;

    Disk() {}

    Disk(String type, int capacity, int price) {
        this.type = type;
        this.capacity = capacity;
        this.price = price;
    }

    public void setType(String type) {
        this.type = type;
    }

    public String getType() {
        return this.type;
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

    public void printDisk() {
        System.out.println("Type\t\t: " + this.type);
        System.out.println("Capacity\t: " + this.capacity + (this.capacity < 100 ? " TB" : " GB"));
        System.out.println("Price\t\t: " + this.price + " IDR");
    }
}
