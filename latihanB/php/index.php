<?php 

require("Pc.php");

$Pcs = [];

$processorObj = new Processor("Intel_CoreI5", 6000000);
$diskObj = new Disk("SSD", 512, 1200000);
$ramObj = new Ram(8, 800000);
$Pcs[0] = new Pc($processorObj, $diskObj, $ramObj);

$processorObj = new Processor("AMD", 4500000);
$diskObj = new Disk("HDD", 2, 1000000);
$ramObj = new Ram(4, 500000);
$Pcs[1] = new Pc($processorObj, $diskObj, $ramObj);

$i = 1;
echo "<h3>++ Data PCs ++</h3>";
foreach ($Pcs as $pc) {
    echo "<h4>[ PC " . $i . " ]</h4>";
    $pc->printPc();
    $i++;
    echo "<br>";
}


?>