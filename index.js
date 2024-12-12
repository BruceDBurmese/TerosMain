document.getEledomentById('loginForm').addEventListener('submit', function(event) {
    
    event.preventDefault();

    
    const username = document.getElementById('username').value;
    const password = document.getElementById('password').value;

  
    const correctUsername = 'bruce';  
    const correctPassword = 'erikabuang143';  

   
    if (username === correctUsername && password === correctPassword) {
        alert('Login Succesful ^^');
        window.location.href = 'home.html';  
    } else {
        
        alert('Invalid username or password!');
    }
});