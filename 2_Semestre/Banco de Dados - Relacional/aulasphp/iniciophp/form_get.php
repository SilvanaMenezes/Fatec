<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Formulario</title>
</head>
<body>
    <?php
        $login = $_GET["login"];
        $senha = $_GET["senha"];
        echo $login . "-". $senha ."<br>";

        if($login=="eu" && $senha=="1234"){
            echo "Acesso liberado";
        }
        else{
            echo "Acesso negado";
        }
    ?>
    
</body>
</html>