<script lang="ts" setup>
/**
 * 在Vue2中，使用ref即可访问子组件里的任意数据及方法，
 * 但在Vue3中则必须使用defineExpose暴露子组件内的方法或属性才能被父组件所调用
 */
import { defineExpose } from 'vue'

const getData = () => {
  console.log('getData')
}
const name = ref('张三')

defineExpose({
  getData,
  name
})
</script>