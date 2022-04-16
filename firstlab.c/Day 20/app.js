
const product_list = document.querySelector('.product_list');


fetch('https://fakestoreapi.com/products').then(data=>data.json()).then(data=>{


    let list = '';
    data.map(data =>{

        list +=`
        <div class="col-md-3">
        <div class="card">
            <img src="${data.image}" onclick="singelProduct(${data.id})" data-bs-toggle="modal" data-bs-target="#moadal_view" alt="" class="image" style="max-width:200px; margin:auto;cursor:pointer;">
            <div class="card-body">
                <h3>${data.title}</h3>
                <p>$${data.price}</p>
                <button class="btn btn-info">Add to cart</button>
            </div>
        </div>

    </div>
        `
        
    })

    product_list.innerHTML = list;
})

// singelProduct Function

function singelProduct(id) {


const singel_view = document.querySelector('.div');

fetch('https://fakestoreapi.com/products' + id).then(data => data.json).then(data => {

    singel_view.innerHTML = `
    <div class="col">

    <div class="modal fade" id="moadal_view">
        <div class="modal-dialog modal-dialog-centered modal-lg">
            <div class="modal-content">
                <div class="modal-body">
                <div class="row">
                    <div class="col-4">
                        <img class="w-100" src="${data.image}"  alt="">
                    </div>
                        <div class="col-8">
                        Lorem ipsum dolor sit amet consectetur adipisicing elit. Itaque, a. Mollitia ipsa corporis id molestiae similique. Repudiandae deleniti consectetur earum illo voluptatibus rerum alias aperiam? Quae, laborum voluptatem labore quasi nam recusandae natus? Nobis cum sit veniam nesciunt itaque ab libero iste beatae, quia omnis? Animi perferendis magni iste consequatur.
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </div>
</div>
    
    `
        
});





};

