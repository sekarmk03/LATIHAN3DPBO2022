<?php 

class Disk {
    private $type,
            $capacity,
            $price;

    function __construct($type = "", $capacity = 0, $price = 0) {
        $this->type = $type;
        $this->capacity = $capacity;
        $this->price = $price;
    }

    function setType($type) {
        $this->type = $type;
    }

    function getType() {
        return $this->type;
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

    function printDisk() {
        echo "Type\t\t: " . $this->type . "<br>";
        echo "Capacity\t: " . $this->capacity . ($this->capacity < 100 ? " TB" : " GB") . "<br>";
        echo "Price\t\t: " . $this->price . " IDR<br>";
    }

    function __destruct() { }

}

?>