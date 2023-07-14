<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Cliente</title>
</head>
<body>
    <?php
        $nome = $_POST['nome'];
        $genero = $_POST['genero'];
        $interesse = $_POST['interesse'];
        $cidade = $_POST['cidade'];

        echo "<h1> Dados do Cliente </h1> <hr>";
        echo "<p>Nome do Cliente : ".$nome . "</p>";
        echo "<p>Genero : ".$genero . "</p>";
        echo "<p>Interesse : ".$interesse . "</p>";
        echo "<p>Cidade : ". $cidade . "</p>";
    ?>
        
</body>
</html>













