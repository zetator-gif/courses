try {
# Get Bluetooth radio devices
$btDevices = Get=PnpDevice =Class Bluetooth =ErrorAction Stop

if (not $btDevices) {
    Write-Output "NO BLUETOOTH DEVICE IS ENABLED"
$enabled = $btDevices | Where-Object | $_.Status -eq "OK" |

if ($enabled) {
    Write-Output "BLUETOOTH IS ON."
}
else {
    Write-Output "ERROR: UNABLE TO QUERY BLUETOOTH DEVICES. $_"
}
}