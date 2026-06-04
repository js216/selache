// SPDX-License-Identifier: MIT
// cctest_csmith_1ac53a0f.c --- cctest case csmith_1ac53a0f (csmith seed 449133071)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xdcb9bcb4 */
/* @exp_ticks 0xc04 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 449133071 -o /home/agent1/fast_data/tmp/csmith_gen_tisx4uan/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S1 {
   uint8_t  f0;
   int64_t  f1;
   uint32_t  f2;
   const int64_t  f3;
};

union U3 {
   uint8_t  f0;
   uint8_t  f1;
   uint8_t  f2;
};


static int16_t g_18 = (-2L);
static uint32_t g_19 = 0UL;
static int32_t g_32 = 1L;
static uint8_t g_40 = 254UL;
static uint32_t g_54 = 0x8E9BDCCBL;
static int8_t g_84 = 0x55L;
static uint32_t g_86 = 0x6B90ED9AL;
static union U3 g_91[1] = {{0x63L}};
static uint64_t g_139 = 0x9D152B013A5848C3LL;
static uint8_t g_148[3][5][4] = {{{247UL,255UL,0UL,255UL},{247UL,253UL,9UL,255UL},{9UL,255UL,9UL,253UL},{247UL,255UL,0UL,255UL},{247UL,253UL,9UL,255UL}},{{9UL,255UL,9UL,253UL},{247UL,255UL,0UL,255UL},{247UL,253UL,9UL,255UL},{9UL,255UL,9UL,253UL},{247UL,255UL,0UL,255UL}},{{247UL,253UL,9UL,255UL},{9UL,253UL,0UL,1UL},{9UL,253UL,247UL,253UL},{9UL,1UL,0UL,253UL},{0UL,253UL,0UL,1UL}}};
static struct S1 g_149[1] = {{248UL,0L,1UL,0x10159D6D56307DCFLL}};



static struct S1  func_1(void);
static int8_t  func_6(int16_t  p_7, uint8_t  p_8, union U3  p_9, uint8_t  p_10, uint8_t  p_11);
static uint64_t  func_12(uint32_t  p_13, int32_t  p_14, int32_t  p_15, uint16_t  p_16, int8_t  p_17);
static int8_t  func_21(int8_t  p_22, int8_t  p_23, int16_t  p_24);




static struct S1  func_1(void)
{ 
    uint32_t l_30 = 0x976B5A7DL;
    const int16_t l_31[5] = {0L,0L,0L,0L,0L};
    int32_t l_33 = 0L;
    int16_t l_92 = 0xCFF8L;
    int32_t l_147 = 0L;
    int i;
    g_148[1][4][0] = (safe_sub_func_uint32_t_u_u((l_147 = (safe_add_func_int32_t_s_s(((func_6(((0UL | func_12((((g_19 |= g_18) <= (~func_21((l_33 = ((~(((((safe_rshift_func_uint16_t_u_u(0xB9C6L, ((((g_32 = (safe_mul_func_int16_t_s_s((l_30 == l_31[4]), l_31[3]))) || l_30) && g_32) | 0x17F95E19L))) < 65535UL) >= g_18) && l_31[1]) || 0UL)) > g_18)), g_18, l_31[4]))) | 0x7236L), g_18, g_18, g_18, l_31[2])) , 0x0972L), g_84, g_91[0], l_92, l_31[0]) | g_91[0].f1) , 8L), g_91[0].f0))), (-1L)));
    return g_149[0];
}



static int8_t  func_6(int16_t  p_7, uint8_t  p_8, union U3  p_9, uint8_t  p_10, uint8_t  p_11)
{ 
    int16_t l_98 = 1L;
    int32_t l_142 = (-1L);
    int32_t l_143[4];
    int i;
    for (i = 0; i < 4; i++)
        l_143[i] = 0x33B3C153L;
    for (p_9.f2 = 8; (p_9.f2 == 23); ++p_9.f2)
    { 
        int8_t l_97[4];
        int i;
        for (i = 0; i < 4; i++)
            l_97[i] = 1L;
        g_32 &= (((safe_rshift_func_uint8_t_u_s(l_97[2], (l_98 <= ((safe_mod_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((g_91[0].f2 != (!p_9.f0)), g_18)), 0xEDL)) || p_9.f0)))) > (-1L)) == 0xBFL);
        if (g_84)
            continue;
    }
    if ((safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(0x80L, (-8L))), 6)))
    { 
        int8_t l_133[5];
        int i;
        for (i = 0; i < 5; i++)
            l_133[i] = 6L;
        for (p_10 = 19; (p_10 <= 2); p_10 = safe_sub_func_int16_t_s_s(p_10, 9))
        { 
            int8_t l_132 = 0L;
            int32_t l_134 = (-1L);
            for (p_7 = 3; (p_7 >= (-4)); p_7--)
            { 
                int16_t l_131 = 0x5FFFL;
                g_32 = (safe_rshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(g_32, (safe_add_func_uint16_t_u_u((~((0x224AL ^ (safe_lshift_func_uint16_t_u_s((p_9 , (((((safe_div_func_uint16_t_u_u((l_134 = ((safe_lshift_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u((safe_unary_minus_func_uint8_t_u((((safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u((l_131 = g_91[0].f0), l_132)), g_40)) || p_7) < g_32))))), 6)) , l_133[0])), (-1L))) & 3UL) == p_7) >= g_84) || p_9.f1)), 9))) != p_9.f2)), 0xA093L)))), 5));
                g_32 ^= ((g_18 == (g_54 >= ((safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(g_18, (p_7 | 0xE3ABL))), l_131)) <= g_91[0].f2))) != p_8);
                g_32 |= 3L;
            }
        }
        g_139--;
    }
    else
    { 
        uint16_t l_144 = 65533UL;
        l_144--;
    }
    l_142 ^= p_10;
    return p_11;
}



static uint64_t  func_12(uint32_t  p_13, int32_t  p_14, int32_t  p_15, uint16_t  p_16, int8_t  p_17)
{ 
    const int64_t l_79 = 0x94A57C395B56AF65LL;
    int32_t l_81 = 1L;
    int32_t l_82 = 0x7B382E32L;
    for (p_14 = 0; (p_14 <= (-27)); --p_14)
    { 
        uint64_t l_78[5] = {0xA27EA102817ACDDELL,0xA27EA102817ACDDELL,0xA27EA102817ACDDELL,0xA27EA102817ACDDELL,0xA27EA102817ACDDELL};
        int32_t l_80 = 0xC350235BL;
        int32_t l_83 = 3L;
        int32_t l_85[1][3][5] = {{{3L,3L,1L,0x9D8701E4L,(-2L)},{1L,(-4L),(-4L),1L,3L},{1L,0x9D8701E4L,0x7ECFC28CL,0x7ECFC28CL,0x9D8701E4L}}};
        int i, j, k;
        p_15 |= (l_78[2] == p_13);
        g_32 = l_79;
        g_86--;
    }
    for (g_18 = 0; (g_18 == (-24)); g_18 = safe_sub_func_int8_t_s_s(g_18, 3))
    { 
        return l_81;
    }
    return g_18;
}



static int8_t  func_21(int8_t  p_22, int8_t  p_23, int16_t  p_24)
{ 
    int8_t l_38[2];
    int32_t l_39 = 0L;
    uint32_t l_74 = 0x97B3892EL;
    int32_t l_75 = 0x2DDC797AL;
    int i;
    for (i = 0; i < 2; i++)
        l_38[i] = 0x9EL;
    for (p_22 = 17; (p_22 > 12); p_22 = safe_sub_func_int32_t_s_s(p_22, 8))
    { 
        uint8_t l_51 = 0x07L;
        uint16_t l_55[4];
        int i;
        for (i = 0; i < 4; i++)
            l_55[i] = 0xB1ABL;
        l_55[0] = (safe_sub_func_int8_t_s_s((g_32 <= (g_40--)), (((safe_mul_func_int8_t_s_s((safe_div_func_int8_t_s_s((((((((safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((l_39 = ((p_24 = (((l_51 || (safe_lshift_func_int8_t_s_s((-7L), (g_54 |= (((-3L) == 9L) < 65527UL))))) <= g_32) != p_24)) , g_18)) == 9L), 7L)), g_32)) > p_22) < 1UL) & 0x7020L) ^ g_32) == g_18) >= p_23), g_18)), 1L)) == g_32) & g_32)));
        g_32 ^= (((p_22 | 0xBED5D298L) & g_40) , 0x05DEF9EEL);
        for (g_54 = 0; g_54 < 4; g_54 += 1)
        {
            l_55[g_54] = 5UL;
        }
    }
    l_75 ^= ((g_32 = (((safe_mul_func_int8_t_s_s(p_23, (0x86L | l_38[0]))) > (safe_sub_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(((((l_39 = (safe_div_func_int8_t_s_s((safe_div_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_s((((l_38[0] >= 1UL) > g_54) == 0xCEL), p_24)) , g_32) ^ 0x57630D1EL), g_40)), g_32))) != g_32) == g_54) >= l_74), l_74)) , 0x6D10L), 10)) < 2UL), 1L)), g_54)) , p_22), p_23))) , (-1L))) & p_23);
    return p_23;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_91[i].f0, "g_91[i].f0", print_hash_value);
        transparent_crc(g_91[i].f1, "g_91[i].f1", print_hash_value);
        transparent_crc(g_91[i].f2, "g_91[i].f2", print_hash_value);

    }
    transparent_crc(g_139, "g_139", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_148[i][j][k], "g_148[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_149[i].f0, "g_149[i].f0", print_hash_value);
        transparent_crc(g_149[i].f1, "g_149[i].f1", print_hash_value);
        transparent_crc(g_149[i].f2, "g_149[i].f2", print_hash_value);
        transparent_crc(g_149[i].f3, "g_149[i].f3", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
