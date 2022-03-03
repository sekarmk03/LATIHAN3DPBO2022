public class Processor {
    private String name;
    private int price;

    Processor() { }

    Processor(String name, int price) {
        this.name = name;
        this.price = price;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return this.name;
    }

    public void setPrice(int price) {
        this.price = price;
    }

    public int getPrice() {
        return this.price;
    }

    public void printProcessor() {
        System.out.println("Name\t\t: " + this.name);
        System.out.println("Price\t\t: " + this.price + " IDR");
    }
}