<?php 

class Processor {
    private $name,
            $price;
    
    function __construct($name = "", $price = 0) {
        $this->name = $name;
        $this->price = $price;
    }

    function setName($name) {
        $this->name = $name;
    }

    function getName() {
        return $this->name;
    }

    function setPrice($price) {
        $this->price = $price;
    }

    function getPrice() {
        return $this->price;
    }

    function printProcessor() {
        echo "Name\t\t: " . $this->name . "<br>";
        echo "Price\t\t: " . $this->price . " IDR<br>";
    }

    function __destruct() { }

}

?>