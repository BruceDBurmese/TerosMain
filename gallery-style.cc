* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
    font-family: 'Arial', sans-serif;
}

body {
    background-color: #111;
    color: #fff;
    font-size: 16px;
    overflow-x: hidden;
}

.gallery-container {
    max-width: 1200px;
    margin: 0 auto;
    padding: 30px;
}

.gallery-header {
    text-align: center;
    margin-bottom: 50px;
}

.gallery-header h1 {
    font-size: 3em;
    color: #ff6a00;
    text-transform: uppercase;
    letter-spacing: 5px;
    margin-bottom: 20px;
    font-weight: bold;
    transition: all 0.3s ease-in-out;
}

.gallery-header h1:hover {
    color: #fff;
    transform: scale(1.1);
}

.gallery-header p {
    font-size: 1.2em;
    color: #ddd;
    letter-spacing: 1px;
}

.gallery {
    display: grid;
    grid-template-columns: repeat(auto-fill, minmax(300px, 1fr));
    gap: 30px;
}

.event-card {
    position: relative;
    overflow: hidden;
    border-radius: 10px;
    cursor: pointer;
    transition: transform 0.4s ease, box-shadow 0.4s ease;
    border: 3px solid transparent;
    background-image: linear-gradient(45deg, rgba(255, 255, 255, 0.2), rgba(255, 255, 255, 0.1));
}

.event-card:hover {
    transform: scale(1.05);
    box-shadow: 0 15px 25px rgba(0, 0, 0, 0.3);
    border-color: #ff6a00;
}

.event-card img {
    width: 100%;
    height: 100%;
    transition: transform 0.3s ease-in-out;
}

.event-card:hover img {
    transform: scale(1.1);
}

.event-info {
    position: absolute;
    bottom: 20px;
    left: 20px;
    color: #fff;
    font-size: 1.2em;
    background-color: rgba(0, 0, 0, 0.6);
    padding: 10px 15px;
    border-radius: 5px;
    opacity: 0;
    transform: translateY(20px);
    transition: opacity 0.4s ease, transform 0.4s ease;
}

.event-card:hover .event-info {
    opacity: 1;
    transform: translateY(0);
}

.event-info h2 {
    margin-bottom: 5px;
    font-size: 1.4em;
    font-weight: bold;
}

.event-info p {
    font-size: 1em;
}

.modal {
    position: fixed;
    top: 0;
    left: 0;
    width: 100%;
    height: 100%;
    background-color: rgba(0, 0, 0, 0.8);
    display: none;
    justify-content: center;
    align-items: center;
    z-index: 1000;
    animation: fadeIn 0.5s ease;
}

.modal-content-wrapper {
    position: relative;
    max-width: 80%;
    text-align: center;
}

.modal img {
    max-width: 100%;
    max-height: 80vh;
    border-radius: 10px;
}

.close {
    position: absolute;
    top: 10px;
    right: 10px;
    font-size: 2.5em;
    color: #fff;
    cursor: pointer;
    transition: color 0.3s ease;
}

.close:hover {
    color: #ff6a00;
}

.back-button {
    position: absolute;
    top: 20px;
    left: 20px;
    padding: 10px 20px;
    background-color: #ff6a00;
    color: #fff;
    border: none;
    font-size: 1.2em;
    cursor: pointer;
    transition: background-color 0.3s ease;
    border-radius: 5px;
}

.back-button:hover {
    background-color: #ff8c00;
}

#modal-caption {
    color: #fff;
    text-align: center;
    font-size: 1.2em;
    margin-top: 15px;
}

@keyframes fadeIn {
    0% { opacity: 0; transform: scale(0.8); }
    100% { opacity: 1; transform: scale(1); }
}

@keyframes fadeOut {
    0% { opacity: 1; transform: scale(1); }
    100% { opacity: 0; transform: scale(0.8); }
}
