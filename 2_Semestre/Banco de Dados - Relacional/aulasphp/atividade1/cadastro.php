<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Formulario_PHP</title>
</head>
<body>
    <?php
        $nome = $_POST['nome'];
        $telefone = $_POST['telefone'];
        $data_nasc = $_POST['data_nasc'];
        $cidade = $_POST['cidade'];
        $genero = $_POST['genero'];
        $interesse = $_POST['interesse'];
        $mensagem = $_POST['mensagem'];

        echo "<h1>Informações do Usuário</h1>";
        echo "<p>Nome: ". $nome . "</p>";
        echo "<p>Telefone: ". $telefone . "</p>";
        echo "<p>Data de Nascimento: ". $data_nasc . "</p>";
        echo "<p>Cidade: ". $cidade . "</p>";
        echo "<p>Genero: ". $genero . "</p>";
        echo "<p>Interesse: ". $interesse . "</p>";
        echo "<p>Mensagem: ". $mensagem . "</p>";


        
    ?>
</body>
</html>