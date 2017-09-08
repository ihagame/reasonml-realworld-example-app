let component = ReasonReact.statelessComponent "Body";
let show = ReasonReact.stringToElement;

/* Just like any other variant data can be carried around with variants with the routes */
let make ::route _children => { 
  ...component,
  render: fun _self => {
    let select_subpage route => {
      switch route {
        | Routes.Home => <Home />
        | Routes.Register => <Register />
        | Routes.Login => <Login />
        | Routes.Settings => <Settings /> 
        | Routes.Article => <Article />
      };
    };
     
    <div>
      <Header /> 
      <div> (select_subpage route) </div> 
      <Footer />    
    </div>
  }  
};
