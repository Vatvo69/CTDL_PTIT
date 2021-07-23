<?php
    $_POST['secret']="____a`____the^'____a`____";
    if(preg_match('/_{4}\x{0061}\x{0060}_{4}(t|T)(h|H)(e|E|3)\x{005e}\'_{4}\x{0061}\x{0060}_{4}/', $_POST['secret']))
    {
        echo "dung roi\n";
    }
    else echo "sai roi\n";
?>