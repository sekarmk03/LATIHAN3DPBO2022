<?php 

require("Processor.php");
require("Disk.php");
require("Ram.php");

class Pc {
    private $processorObj,
            $diskObj,
            $ramObj,
            $totalPrice;

    function __construct($pObj, $dObj, $rObj) {
        $this->processorObj = $pObj;
        $this->diskObj = $dObj;
        $this->ramObj = $rObj;
        $this->totalPrice = 0;
    }

    function setProcessor($pObj) {
        $this->processorObj = $pObj;
    }

    function getProcessor() {
        return $this->processorObj;
    }

    function setDisk($dObj) {
        $this->diskObj = $dObj;
    }

    function getDisk() {
        return $this->diskObj;
    }

    function setRam($rObj) {
        $this->ramObj = $rObj;
    }

    function getRam() {
        return $this->ramObj;
    }

    function setTotalPrice($pPrice, $dPrice, $rPrice) {
        $this->totalPrice = $pPrice + $dPrice + $rPrice;
    }

    function getTotalPrice() {
        return $this->totalPrice;
    }

    function printPc() {
        echo "<strong>- Processor</strong><br>";
        $this->processorObj->printProcessor();
        echo "<strong>- Disk</strong><br>";
        $this->diskObj->printDisk();
        echo "<strong>- Ram</strong><br>";
        $this->ramObj->printRam();
        $this->setTotalPrice($this->processorObj->getPrice(), $this->diskObj->getPrice(), $this->ramObj->getPrice());
        echo "<strong>- Total Price</strong><br>";
        echo "   " . $this->totalPrice . " IDR";
    }

    function __destruct() { }
}

?>