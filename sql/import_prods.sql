select i.name, j.name, f.name
from products i
inner join providers j on i.id_providers = j.id
inner join categories f on i.id_categories = f.id
where f.name = 'Imported' and j.name = 'Sansul SA';
