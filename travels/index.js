
// for the select the image with validation .>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

function toggleSelection(id) {
    var selectedImage = document.getElementById(id);
    selectedImage.classList.toggle('selected');
}

function validateImage() {
    var selectedImages = document.querySelectorAll('.selected');
    
    // Check if exactly 3 images are selected
    if (selectedImages.length !== 3) {
        alert("Please select exactly 3 images.");
    } else {
        // Store selected image URLs in session storage
        var selectedUrls = Array.from(selectedImages).map(image => getBackgroundImageUrl(image));
        sessionStorage.setItem('selectedImagesUrls', JSON.stringify(selectedUrls));
        
        // Redirect to the next page
        window.location.href = "filter.html";
    }
}

function getBackgroundImageUrl(element) {
    var backgroundImage = window.getComputedStyle(element).backgroundImage;
    return backgroundImage.slice(4, -1).replace(/"/g, "");
}
