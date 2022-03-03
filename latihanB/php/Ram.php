<?php 

class Ram {
    private $capacity,
            $price;

    function __construct($capacity, $price) {
        $this->capacity = $capacity;
        $this->price = $price;
    }

    function setCapacity($capacity) {
        $this->capacity = $capacity;
    }

    function getCapacity() {
        return $this->capacity;
    }

    function setPrice($price) {
        $this->price = $price;
    }

    function getPrice() {
        return $this->price;
    }

    function printRam() {
        echo "Capacity\t: " . $this->capacity . " GB<br>";
        echo "Price\t\t: " . $this->price . " IDR<br>";
    }

    function __destruct() { }
}

?>