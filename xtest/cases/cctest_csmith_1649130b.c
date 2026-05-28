// SPDX-License-Identifier: MIT
// cctest_csmith_1649130b.c --- cctest case csmith_1649130b (csmith seed 373887755)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2a53e5 */
/* @exp_ticks 0x6507 */

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

// Options:   -s 373887755 -o /tmp/csmith_gen_161kcj5w/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint64_t  f0;
   int16_t  f1;
   uint16_t  f2;
};

union U1 {
   int32_t  f0;
   struct S0  f1;
   int8_t  f2;
};

union U2 {
   int32_t  f0;
   int8_t  f1;
   int8_t * f2;
   struct S0  f3;
   uint8_t  f4;
};

union U3 {
   uint8_t  f0;
   int16_t  f1;
   struct S0  f2;
   uint32_t  f3;
   int8_t * f4;
};


static int8_t g_4 = 0x28L;
static int8_t g_13 = (-3L);
static int8_t *g_20 = (void*)0;
static uint8_t g_34 = 1UL;
static int32_t g_39 = 0L;
static int8_t g_43[2] = {0L,0L};
static uint8_t g_44 = 0x78L;
static uint8_t g_99 = 0x52L;
static int32_t g_102 = 1L;
static int16_t g_104 = 0x4D7DL;
static int32_t g_107 = 0xD782A0B0L;
static uint16_t g_111 = 0xA217L;
static union U3 * const g_122 = (void*)0;
static int8_t g_125 = 0x66L;
static int64_t g_140 = (-5L);
static int32_t g_142[7] = {0x9B6E0F72L,(-1L),(-1L),0x9B6E0F72L,(-1L),(-1L),0x9B6E0F72L};
static int64_t g_148 = 0x5544F04045D3C7E7LL;
static uint32_t g_160 = 0x75A9F46BL;
static uint32_t g_164 = 4294967288UL;
static uint8_t * const g_191[6] = {&g_44,&g_44,&g_44,&g_44,&g_44,&g_44};
static uint8_t * const *g_190 = &g_191[2];
static int64_t g_193 = 0xA24BEAC12866A873LL;
static int32_t g_212 = 0x271D09A1L;
static union U3 *g_223 = (void*)0;
static uint32_t g_233 = 4294967287UL;
static struct S0 g_246 = {1UL,0xD2AFL,65531UL};
static union U3 g_249[5] = {{247UL},{247UL},{247UL},{247UL},{247UL}};
static union U1 g_276 = {0L};
static const union U1 *g_275[5] = {&g_276,&g_276,&g_276,&g_276,&g_276};
static uint32_t *g_293[2][3][1] = {{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}}};
static const union U2 g_294 = {-1L};
static uint16_t g_322 = 0xAAB4L;
static int32_t g_342 = 0x14B29B03L;
static uint64_t *g_362 = &g_246.f0;
static uint32_t g_417 = 1UL;
static int32_t *g_447[1] = {&g_276.f0};
static int32_t **g_446 = &g_447[0];
static int32_t ***g_445 = &g_446;
static int32_t g_504 = 0x11C084ABL;
static int32_t g_525[2] = {0xE127CEFAL,0xE127CEFAL};
static int32_t g_530 = 7L;
static uint32_t g_540 = 0x5AFE73D9L;
static uint8_t g_588[6] = {0x3CL,0x3CL,0xA5L,0x3CL,0x3CL,0xA5L};
static uint64_t g_608 = 0UL;
static int8_t **g_695 = &g_20;
static int8_t ***g_694 = &g_695;
static union U2 g_741 = {1L};
static union U2 *g_743[5] = {&g_741,&g_741,&g_741,&g_741,&g_741};
static union U2 * const *g_742 = &g_743[3];
static uint32_t **g_807[4] = {&g_293[1][0][0],&g_293[1][0][0],&g_293[1][0][0],&g_293[1][0][0]};
static uint32_t ***g_806 = &g_807[0];
static uint32_t ***g_808 = (void*)0;
static struct S0 *g_913 = &g_246;
static struct S0 **g_912 = &g_913;
static union U1 *g_923 = &g_276;
static union U1 **g_922 = &g_923;
static union U1 ***g_921 = &g_922;
static int16_t g_1029[2][6] = {{0xF1C2L,0L,0xF1C2L,0L,0xF1C2L,0L},{0xF1C2L,0L,0xF1C2L,0L,0xF1C2L,0L}};
static struct S0 g_1084 = {0x34D0FE852F1739C9LL,0x41ECL,1UL};
static struct S0 * const g_1083[1] = {&g_1084};
static struct S0 * const *g_1082 = &g_1083[0];
static uint16_t g_1099 = 65530UL;
static uint32_t g_1107 = 0x5EE94717L;
static int32_t g_1174 = 1L;
static int16_t g_1186[3] = {(-1L),(-1L),(-1L)};
static uint16_t g_1195 = 0x88AEL;
static struct S0 *g_1249 = (void*)0;
static uint16_t ***g_1319 = (void*)0;
static int32_t g_1365 = 0x903E9074L;
static uint32_t g_1401[6] = {0xFCE6B87EL,0xFCE6B87EL,0xFCE6B87EL,0xFCE6B87EL,0xFCE6B87EL,0xFCE6B87EL};
static int64_t g_1412[2] = {7L,7L};
static uint8_t g_1415 = 1UL;
static uint32_t g_1478 = 18446744073709551612UL;
static uint16_t ****g_1492 = &g_1319;
static uint16_t *****g_1491 = &g_1492;
static int32_t *g_1530 = &g_741.f0;
static int32_t *g_1531[4] = {&g_102,&g_102,&g_102,&g_102};
static uint64_t **g_1627 = &g_362;
static uint64_t ***g_1626 = &g_1627;
static int32_t g_1642 = 0x228CF256L;
static uint32_t g_1658 = 0x0CE6A734L;
static int16_t *g_1706 = &g_1029[1][4];
static int16_t **g_1705 = &g_1706;
static int16_t ***g_1704 = &g_1705;
static uint16_t * const g_1756 = &g_246.f2;
static uint16_t * const *g_1755[2][6] = {{&g_1756,&g_1756,&g_1756,&g_1756,&g_1756,&g_1756},{&g_1756,&g_1756,&g_1756,&g_1756,&g_1756,&g_1756}};
static uint16_t * const **g_1754[6] = {&g_1755[0][0],&g_1755[0][0],&g_1755[0][0],&g_1755[0][0],&g_1755[0][0],&g_1755[0][0]};
static uint16_t * const ***g_1753 = &g_1754[5];
static uint16_t * const ****g_1752 = &g_1753;
static const int32_t g_1820 = 0xF5A09983L;
static int8_t ***g_1875 = &g_695;
static int32_t ** const *g_1934 = (void*)0;
static int32_t ** const **g_1933 = &g_1934;
static int32_t ** const ***g_1932 = &g_1933;
static uint8_t *g_1951 = &g_249[0].f0;
static int32_t **g_2085 = &g_1531[2];
static int32_t ***g_2084[2][5] = {{&g_2085,&g_2085,&g_2085,&g_2085,&g_2085},{&g_2085,&g_2085,&g_2085,&g_2085,&g_2085}};
static int64_t *g_2109 = &g_1412[1];
static int64_t **g_2108[2] = {&g_2109,&g_2109};
static uint32_t g_2151 = 1UL;
static int16_t ****g_2233 = &g_1704;
static int16_t *****g_2232 = &g_2233;
static int8_t **g_2294 = (void*)0;
static int8_t * const ***g_2357 = (void*)0;
static int8_t * const ****g_2356 = &g_2357;
static int8_t ****g_2361 = (void*)0;
static int8_t *****g_2360[4][7][4] = {{{(void*)0,&g_2361,&g_2361,&g_2361},{&g_2361,&g_2361,&g_2361,&g_2361},{(void*)0,&g_2361,&g_2361,&g_2361},{&g_2361,&g_2361,&g_2361,&g_2361},{&g_2361,&g_2361,(void*)0,&g_2361},{&g_2361,&g_2361,&g_2361,&g_2361},{&g_2361,&g_2361,&g_2361,&g_2361}},{{(void*)0,&g_2361,&g_2361,&g_2361},{&g_2361,&g_2361,&g_2361,&g_2361},{(void*)0,&g_2361,&g_2361,&g_2361},{&g_2361,&g_2361,&g_2361,&g_2361},{&g_2361,&g_2361,(void*)0,&g_2361},{&g_2361,&g_2361,&g_2361,&g_2361},{&g_2361,&g_2361,&g_2361,&g_2361}},{{(void*)0,&g_2361,&g_2361,&g_2361},{&g_2361,&g_2361,&g_2361,&g_2361},{(void*)0,&g_2361,&g_2361,&g_2361},{&g_2361,&g_2361,&g_2361,&g_2361},{&g_2361,&g_2361,(void*)0,&g_2361},{&g_2361,&g_2361,&g_2361,&g_2361},{&g_2361,&g_2361,&g_2361,&g_2361}},{{(void*)0,&g_2361,&g_2361,&g_2361},{&g_2361,&g_2361,&g_2361,&g_2361},{(void*)0,&g_2361,&g_2361,&g_2361},{&g_2361,&g_2361,&g_2361,&g_2361},{&g_2361,&g_2361,(void*)0,&g_2361},{&g_2361,&g_2361,&g_2361,&g_2361},{&g_2361,&g_2361,&g_2361,&g_2361}}};
static int64_t g_2452 = 0x8C29B2D544666EBBLL;
static int32_t g_2460[2][4][6] = {{{4L,(-1L),8L,0xD5FCE673L,8L,(-1L)},{1L,0xD5FCE673L,0L,(-1L),0x629ACD67L,0L},{(-1L),0x629ACD67L,0L,8L,0xEDE9A0EBL,0xBE222EF4L},{0x8B4CA2EEL,0xE8E74F60L,(-1L),(-1L),0xE8E74F60L,0x8B4CA2EEL}},{{0xE8E74F60L,(-1L),0xBE222EF4L,8L,4L,0x37DC6756L},{(-1L),0xBE222EF4L,1L,0xD5FCE673L,0xEDE9A0EBL,(-4L)},{(-1L),8L,0xD5FCE673L,8L,(-1L),4L},{0xE8E74F60L,4L,0xEDE9A0EBL,(-1L),(-4L),0L}}};
static int32_t *g_2479 = (void*)0;
static uint8_t g_2597 = 0xC0L;
static int16_t ***g_2609 = &g_1705;
static uint32_t g_2744 = 0UL;
static const union U1 **g_2753[6][5] = {{&g_275[2],(void*)0,(void*)0,&g_275[2],&g_275[3]},{&g_275[2],(void*)0,(void*)0,&g_275[2],&g_275[3]},{&g_275[2],(void*)0,(void*)0,&g_275[2],&g_275[3]},{&g_275[2],(void*)0,(void*)0,&g_275[2],&g_275[3]},{&g_275[2],(void*)0,(void*)0,&g_275[2],&g_275[3]},{&g_275[2],(void*)0,(void*)0,&g_275[2],&g_275[3]}};
static const union U1 ***g_2752 = &g_2753[0][3];
static int8_t g_2764 = 0xD5L;
static int32_t g_2868 = 0x74E0FB1CL;
static int32_t * const g_2867[6] = {&g_2868,&g_2868,&g_2868,&g_2868,&g_2868,&g_2868};
static int32_t * const *g_2866 = &g_2867[5];
static int32_t * const **g_2865 = &g_2866;
static int32_t * const ***g_2864[2] = {&g_2865,&g_2865};
static int32_t * const ****g_2863 = &g_2864[1];
static int32_t *****g_2869 = (void*)0;
static union U2 ***g_2908 = (void*)0;



static const int16_t  func_1(void);
static uint64_t  func_2(union U1  p_3);
static int64_t  func_5(int32_t  p_6, int8_t * p_7);
static int8_t * func_8(int8_t  p_9);
static const uint64_t  func_52(int32_t  p_53, uint32_t  p_54, int8_t ** p_55, int8_t * p_56, uint16_t  p_57);
static int32_t  func_58(int8_t  p_59, int32_t * p_60, int32_t * p_61, union U1  p_62, int8_t * p_63);
static int32_t * func_72(int8_t ** p_73, const union U2  p_74, int8_t * p_75);
static union U3 * func_81(union U1  p_82, int8_t * p_83, int8_t * const * p_84, union U3  p_85, int8_t * p_86);




static const int16_t  func_1(void)
{ 
    uint8_t l_10[4][7][3] = {{{0x0AL,8UL,0x0AL},{0UL,0UL,0UL},{6UL,8UL,6UL},{0UL,0UL,0UL},{0x0AL,8UL,0x0AL},{0UL,0UL,0UL},{6UL,8UL,6UL}},{{0UL,0UL,0UL},{0x0AL,8UL,0x0AL},{0UL,0UL,0UL},{6UL,8UL,6UL},{0UL,0UL,0UL},{0x0AL,8UL,0x0AL},{0UL,0UL,0UL}},{{6UL,8UL,6UL},{0UL,0UL,0UL},{0x0AL,8UL,0x0AL},{0UL,0UL,0UL},{6UL,8UL,6UL},{0UL,0UL,0UL},{0x0AL,8UL,0x0AL}},{{0UL,0UL,0UL},{6UL,8UL,6UL},{0UL,0UL,0UL},{0x0AL,8UL,0x0AL},{0UL,0UL,0UL},{6UL,8UL,6UL},{0UL,0UL,0UL}}};
    int8_t *l_11 = (void*)0;
    int8_t *l_12 = &g_13;
    int32_t ****l_2223 = &g_445;
    uint32_t l_2841 = 0x8245DED8L;
    int32_t l_2842 = 0xBB7F3A3AL;
    int32_t l_2843 = 2L;
    int32_t *l_2844 = &g_530;
    int32_t *l_2845 = (void*)0;
    int32_t *l_2846 = &g_1174;
    int32_t *l_2847[2];
    int32_t l_2848 = (-1L);
    int32_t l_2849 = 0x7A25FC81L;
    uint16_t l_2850 = 65529UL;
    int32_t * const *l_2862[3][5] = {{&g_447[0],&g_447[0],&g_447[0],&g_447[0],&g_447[0]},{&g_2479,&g_2479,&g_447[0],&g_2479,&g_2479},{&g_447[0],&g_447[0],&g_447[0],&g_447[0],&g_447[0]}};
    int32_t * const **l_2861 = &l_2862[0][2];
    int32_t * const ***l_2860[4][4][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_2861,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_2861,(void*)0,(void*)0},{&l_2861,(void*)0,&l_2861,&l_2861,(void*)0},{(void*)0,&l_2861,&l_2861,(void*)0,&l_2861},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&l_2861,(void*)0,&l_2861,&l_2861,(void*)0},{(void*)0,&l_2861,&l_2861,(void*)0,&l_2861},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_2861,(void*)0,&l_2861,&l_2861,(void*)0}},{{(void*)0,&l_2861,&l_2861,(void*)0,&l_2861},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_2861,(void*)0,&l_2861,&l_2861,(void*)0},{(void*)0,&l_2861,&l_2861,(void*)0,&l_2861}}};
    int32_t * const ****l_2859 = &l_2860[1][1][2];
    struct S0 l_2874[6] = {{0x311A16CF5EA09394LL,0x8D2EL,0xD7D7L},{0x311A16CF5EA09394LL,0x8D2EL,0xD7D7L},{0x311A16CF5EA09394LL,0x8D2EL,0xD7D7L},{0x311A16CF5EA09394LL,0x8D2EL,0xD7D7L},{0x311A16CF5EA09394LL,0x8D2EL,0xD7D7L},{0x311A16CF5EA09394LL,0x8D2EL,0xD7D7L}};
    int8_t *l_2883 = &g_43[1];
    int64_t *l_2884 = &g_2452;
    uint32_t l_2903 = 4294967295UL;
    union U2 **l_2910 = &g_743[1];
    union U2 ***l_2909 = &l_2910;
    int32_t l_2926[6];
    struct S0 l_2944[4][6][2] = {{{{18446744073709551610UL,0L,0x6289L},{18446744073709551610UL,0L,0x6289L}},{{1UL,4L,0UL},{18446744073709551610UL,0L,0x6289L}},{{18446744073709551610UL,0L,0x6289L},{1UL,4L,0UL}},{{18446744073709551610UL,0L,0x6289L},{18446744073709551610UL,0L,0x6289L}},{{1UL,4L,0UL},{18446744073709551610UL,0L,0x6289L}},{{18446744073709551610UL,0L,0x6289L},{1UL,4L,0UL}}},{{{18446744073709551610UL,0L,0x6289L},{18446744073709551610UL,0L,0x6289L}},{{1UL,4L,0UL},{18446744073709551610UL,0L,0x6289L}},{{18446744073709551610UL,0L,0x6289L},{1UL,4L,0UL}},{{18446744073709551610UL,0L,0x6289L},{18446744073709551610UL,0L,0x6289L}},{{1UL,4L,0UL},{18446744073709551610UL,0L,0x6289L}},{{18446744073709551610UL,0L,0x6289L},{1UL,4L,0UL}}},{{{18446744073709551610UL,0L,0x6289L},{18446744073709551610UL,0L,0x6289L}},{{1UL,4L,0UL},{18446744073709551610UL,0L,0x6289L}},{{18446744073709551610UL,0L,0x6289L},{1UL,4L,0UL}},{{18446744073709551610UL,0L,0x6289L},{18446744073709551610UL,0L,0x6289L}},{{1UL,4L,0UL},{18446744073709551610UL,0L,0x6289L}},{{18446744073709551610UL,0L,0x6289L},{1UL,4L,0UL}}},{{{18446744073709551610UL,0L,0x6289L},{18446744073709551610UL,0L,0x6289L}},{{1UL,4L,0UL},{18446744073709551610UL,0L,0x6289L}},{{18446744073709551610UL,0L,0x6289L},{1UL,4L,0UL}},{{18446744073709551610UL,0L,0x6289L},{18446744073709551610UL,0L,0x6289L}},{{1UL,4L,0UL},{18446744073709551610UL,0L,0x6289L}},{{18446744073709551610UL,0L,0x6289L},{1UL,4L,0UL}}}};
    uint32_t l_2945[2];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_2847[i] = &g_2460[0][1][5];
    for (i = 0; i < 6; i++)
        l_2926[i] = 0L;
    for (i = 0; i < 2; i++)
        l_2945[i] = 0UL;
    l_2843 &= (0xC3L >= (l_2842 = (func_2(((((**g_446) = (g_4 > func_5(g_4, func_8(((*l_12) = l_10[0][6][1]))))) <= ((((*g_1932) != l_2223) >= l_10[0][6][1]) == l_10[0][6][1])) , (**g_922))) != l_2841)));
    l_2850++;
    if ((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((*l_2846), 3)), (((g_2863 = l_2859) != g_2869) > ((safe_div_func_int64_t_s_s(((*l_2884) = ((***g_2865) , (safe_lshift_func_int8_t_s_u(((*l_2883) |= ((*l_12) = (l_2874[3] , ((safe_mod_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((safe_add_func_uint64_t_u_u(0UL, (safe_add_func_uint64_t_u_u((*l_2844), (***g_1626))))), (*l_2846))) & (*l_2844)), 4UL)) != (*l_2846))))), (**g_190))))), 0x94FD5A2AF219BF04LL)) != (*l_2844))))) , 0x4DL), 7)))
    { 
        uint32_t l_2887 = 2UL;
        int32_t l_2901 = 0xF3C96FA2L;
        int32_t l_2902[4][6] = {{0x3AE810DAL,(-9L),(-1L),(-9L),0x3AE810DAL,(-1L)},{(-9L),0x3AE810DAL,(-1L),(-5L),(-5L),(-1L)},{(-5L),(-5L),(-1L),0x3AE810DAL,(-9L),(-1L)},{0x3AE810DAL,(-9L),(-1L),(-9L),0x3AE810DAL,(-1L)}};
        int16_t l_2930[7] = {0x9E03L,0x9E03L,0x9E03L,0x9E03L,0x9E03L,0x9E03L,0x9E03L};
        int i, j;
        if ((safe_rshift_func_uint8_t_u_u(l_2887, 1)))
        { 
            union U3 l_2893[6] = {{0x7FL},{0x5CL},{0x5CL},{0x7FL},{0x5CL},{0x5CL}};
            int32_t * const ***l_2895[4];
            int i;
            for (i = 0; i < 4; i++)
                l_2895[i] = &g_2865;
            for (g_233 = 0; (g_233 == 15); ++g_233)
            { 
                uint64_t l_2894 = 0xA9245371401B00B5LL;
                int32_t l_2898 = 0xC3461043L;
                int16_t * const l_2899 = &l_2874[3].f1;
                int32_t l_2900[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_2900[i] = 0x930EC33DL;
                (*l_2846) ^= ((!(safe_div_func_int16_t_s_s(0xB09FL, ((***g_2609) = (*g_1706))))) , ((l_2893[1] , ((*l_2883) = (l_2894 == ((void*)0 != l_2895[1])))) || ((((l_2898 = ((**g_190)++)) >= ((void*)0 != l_2899)) != (-6L)) || l_2887)));
                (*g_913) = (**g_1082);
                l_2903--;
            }
        }
        else
        { 
            union U2 ***l_2911 = &l_2910;
            int32_t l_2918 = 0x7AE767AAL;
            int32_t l_2920 = 0L;
            int32_t l_2921 = 0x9B8C9814L;
            int32_t l_2928 = (-1L);
            int32_t l_2931[6][2][5] = {{{0xF075D0B9L,(-1L),(-4L),0xAB8E65E7L,0xA01BFC2AL},{0x27D410EDL,1L,0L,1L,0x27D410EDL}},{{(-4L),1L,(-1L),0x048C0F6AL,0x84D6C3BDL},{0x84D6C3BDL,(-1L),0xA01BFC2AL,0x27D410EDL,0x575443F7L}},{{1L,0xF075D0B9L,3L,1L,0x84D6C3BDL},{0x93F95E0FL,0x27D410EDL,(-6L),(-6L),0x27D410EDL}},{{0x84D6C3BDL,(-4L),(-6L),4L,0xA01BFC2AL},{0xF075D0B9L,0x84D6C3BDL,3L,0xAB8E65E7L,4L}},{{0x048C0F6AL,1L,0xA01BFC2AL,3L,(-6L)},{0x048C0F6AL,3L,2L,(-6L),2L}},{{0x575443F7L,0x575443F7L,0x84D6C3BDL,(-6L),0x93F95E0FL},{3L,0x048C0F6AL,0L,3L,0x575443F7L}}};
            int i, j, k;
            (*l_2844) ^= (safe_lshift_func_int8_t_s_s(l_2887, ((l_2909 = g_2908) != l_2911)));
            (**l_2911) = (**l_2911);
            for (g_233 = (-6); (g_233 != 1); g_233 = safe_add_func_int32_t_s_s(g_233, 7))
            { 
                const int8_t l_2914 = (-1L);
                return l_2914;
            }
            for (l_2841 = 0; (l_2841 == 10); ++l_2841)
            { 
                int16_t l_2917 = (-4L);
                int32_t l_2919 = 0xF230072CL;
                int32_t l_2922 = 0xC5620C49L;
                int32_t l_2923 = 2L;
                int32_t l_2924 = (-1L);
                int32_t l_2925 = 7L;
                int32_t l_2927 = (-10L);
                int32_t l_2929 = 0xFED2286EL;
                int32_t l_2932 = 0x3DC5E4C4L;
                int8_t l_2933 = 0x74L;
                uint64_t l_2934 = 0UL;
                l_2934--;
            }
            for (g_608 = 0; (g_608 != 18); g_608 = safe_add_func_uint8_t_u_u(g_608, 3))
            { 
                if (l_2887)
                    break;
            }
        }
        return (*g_1706);
    }
    else
    { 
        struct S0 **l_2939 = &g_1249;
        uint32_t l_2943[5][4][4] = {{{4294967289UL,0xAAE649A4L,0xC2DF1EA4L,0xC2DF1EA4L},{4294967291UL,4294967291UL,4294967289UL,1UL},{0UL,9UL,4294967294UL,1UL},{0x91C4A661L,4294967289UL,0xB1129691L,4294967294UL}},{{0x0F20B93FL,4294967289UL,0UL,1UL},{4294967289UL,9UL,0xE0C43D98L,1UL},{0x2689FC44L,4294967291UL,0x4DBAFEE1L,0xC2DF1EA4L},{4294967294UL,0xAAE649A4L,4294967294UL,4294967289UL}},{{1UL,0xB1129691L,0x8B329991L,4294967294UL},{0x4F792513L,0x8B329991L,0xEF31EF57L,0xB1129691L},{4294967289UL,1UL,0xEF31EF57L,0UL},{0x4F792513L,4294967291UL,0x8B329991L,0xE0C43D98L}},{{1UL,9UL,4294967294UL,0x4DBAFEE1L},{4294967294UL,0x4DBAFEE1L,0x4DBAFEE1L,4294967294UL},{0x2689FC44L,1UL,0xE0C43D98L,0x8B329991L},{4294967289UL,4294967294UL,0UL,0xEF31EF57L}},{{0x0F20B93FL,4294967291UL,0xB1129691L,0xEF31EF57L},{0x91C4A661L,4294967294UL,4294967294UL,0x8B329991L},{0UL,1UL,4294967289UL,4294967294UL},{4294967291UL,0x4DBAFEE1L,0xC2DF1EA4L,0x4DBAFEE1L}}};
        int i, j, k;
        (*l_2939) = ((*g_912) = (void*)0);
        (****l_2223) = ((**g_1627) | (((safe_lshift_func_uint8_t_u_s((~((*l_2844) <= 0x1BL)), 7)) , l_2943[4][0][0]) || 0xBD04397CL));
    }
    l_2944[3][5][1] = (((void*)0 == (*g_190)) , l_2874[3]);
    ++l_2945[0];
    return (*g_1706);
}



static uint64_t  func_2(union U1  p_3)
{ 
    uint32_t l_2251 = 0x41078D34L;
    union U3 *l_2265 = &g_249[0];
    union U3 *l_2266 = &g_249[0];
    union U3 *l_2268 = &g_249[0];
    int32_t l_2285 = 0x3421B84AL;
    int16_t ***l_2289[1];
    int32_t l_2340 = 0xD89E2EAAL;
    int32_t l_2341 = 0L;
    int32_t l_2345 = 0xF67EDA57L;
    int32_t ***l_2371 = &g_446;
    int32_t * const *l_2374[6][5] = {{&g_1530,&g_1531[3],(void*)0,&g_1530,(void*)0},{(void*)0,(void*)0,&g_1531[3],&g_1530,&g_1531[2]},{&g_1530,&g_1531[2],&g_1530,&g_1530,&g_1530},{&g_1530,(void*)0,&g_1530,&g_1530,&g_1530},{&g_1530,&g_1531[2],&g_1530,&g_1530,&g_1530},{&g_1531[3],(void*)0,(void*)0,&g_1531[3],&g_1530}};
    union U2 **l_2397 = &g_743[3];
    const union U2 *l_2400 = &g_294;
    const union U2 **l_2399 = &l_2400;
    int32_t l_2406 = 0x0FF9E5C0L;
    int32_t l_2408[6];
    uint16_t l_2418 = 65535UL;
    int64_t l_2430 = (-1L);
    uint32_t l_2455 = 0x50043F1CL;
    int8_t *l_2476 = &g_125;
    uint16_t l_2505 = 0xCAD8L;
    int32_t *l_2536[1];
    int16_t l_2595 = (-10L);
    union U1 *l_2607[7][6][4] = {{{&g_276,&g_276,(void*)0,&g_276},{&g_276,&g_276,&g_276,&g_276},{&g_276,&g_276,(void*)0,(void*)0},{&g_276,&g_276,&g_276,&g_276},{&g_276,(void*)0,&g_276,&g_276},{&g_276,(void*)0,(void*)0,&g_276}},{{(void*)0,&g_276,&g_276,&g_276},{(void*)0,(void*)0,&g_276,&g_276},{&g_276,(void*)0,(void*)0,&g_276},{(void*)0,&g_276,(void*)0,(void*)0},{&g_276,&g_276,&g_276,&g_276},{(void*)0,&g_276,&g_276,&g_276}},{{(void*)0,&g_276,&g_276,&g_276},{&g_276,&g_276,&g_276,&g_276},{&g_276,(void*)0,&g_276,(void*)0},{(void*)0,&g_276,&g_276,(void*)0},{&g_276,(void*)0,&g_276,&g_276},{&g_276,&g_276,&g_276,&g_276}},{{&g_276,(void*)0,&g_276,(void*)0},{(void*)0,&g_276,(void*)0,&g_276},{&g_276,&g_276,(void*)0,&g_276},{&g_276,&g_276,&g_276,&g_276},{&g_276,&g_276,&g_276,(void*)0},{&g_276,&g_276,&g_276,&g_276}},{{&g_276,(void*)0,(void*)0,&g_276},{&g_276,&g_276,(void*)0,(void*)0},{(void*)0,(void*)0,&g_276,(void*)0},{&g_276,&g_276,&g_276,&g_276},{&g_276,&g_276,&g_276,&g_276},{&g_276,&g_276,&g_276,&g_276}},{{&g_276,&g_276,&g_276,&g_276},{(void*)0,&g_276,&g_276,&g_276},{(void*)0,&g_276,&g_276,&g_276},{&g_276,(void*)0,&g_276,(void*)0},{&g_276,&g_276,&g_276,&g_276},{&g_276,&g_276,(void*)0,(void*)0}},{{(void*)0,(void*)0,&g_276,&g_276},{(void*)0,&g_276,&g_276,&g_276},{&g_276,&g_276,&g_276,&g_276},{(void*)0,&g_276,&g_276,&g_276},{&g_276,&g_276,&g_276,&g_276},{(void*)0,(void*)0,&g_276,(void*)0}}};
    const uint32_t l_2610 = 18446744073709551615UL;
    const int8_t **l_2665 = (void*)0;
    const int8_t ***l_2664[7][4][6] = {{{&l_2665,&l_2665,&l_2665,&l_2665,&l_2665,&l_2665},{&l_2665,&l_2665,&l_2665,&l_2665,&l_2665,&l_2665},{&l_2665,&l_2665,&l_2665,&l_2665,&l_2665,&l_2665},{&l_2665,&l_2665,&l_2665,&l_2665,&l_2665,&l_2665}},{{&l_2665,&l_2665,&l_2665,&l_2665,&l_2665,&l_2665},{&l_2665,&l_2665,&l_2665,&l_2665,&l_2665,&l_2665},{&l_2665,&l_2665,&l_2665,&l_2665,&l_2665,&l_2665},{&l_2665,&l_2665,&l_2665,&l_2665,&l_2665,&l_2665}},{{&l_2665,(void*)0,&l_2665,&l_2665,&l_2665,&l_2665},{&l_2665,&l_2665,&l_2665,&l_2665,&l_2665,&l_2665},{&l_2665,&l_2665,&l_2665,&l_2665,&l_2665,&l_2665},{&l_2665,&l_2665,&l_2665,&l_2665,&l_2665,&l_2665}},{{&l_2665,&l_2665,&l_2665,&l_2665,&l_2665,&l_2665},{&l_2665,&l_2665,&l_2665,&l_2665,&l_2665,&l_2665},{&l_2665,&l_2665,&l_2665,&l_2665,&l_2665,&l_2665},{&l_2665,(void*)0,&l_2665,(void*)0,&l_2665,&l_2665}},{{&l_2665,&l_2665,(void*)0,&l_2665,&l_2665,&l_2665},{&l_2665,&l_2665,&l_2665,&l_2665,&l_2665,&l_2665},{&l_2665,&l_2665,(void*)0,&l_2665,&l_2665,&l_2665},{&l_2665,&l_2665,&l_2665,&l_2665,&l_2665,&l_2665}},{{(void*)0,&l_2665,&l_2665,&l_2665,&l_2665,&l_2665},{&l_2665,&l_2665,&l_2665,&l_2665,&l_2665,&l_2665},{(void*)0,&l_2665,&l_2665,&l_2665,&l_2665,&l_2665},{&l_2665,(void*)0,&l_2665,&l_2665,&l_2665,&l_2665}},{{&l_2665,&l_2665,&l_2665,&l_2665,&l_2665,&l_2665},{&l_2665,&l_2665,&l_2665,&l_2665,&l_2665,&l_2665},{&l_2665,(void*)0,&l_2665,(void*)0,&l_2665,&l_2665},{&l_2665,&l_2665,(void*)0,&l_2665,&l_2665,&l_2665}}};
    const int8_t ****l_2663 = &l_2664[3][0][1];
    struct S0 l_2755 = {0xC01E48796AC9313BLL,0xEAFBL,0UL};
    union U1 ***l_2756[3][4][5] = {{{&g_922,&g_922,&g_922,&g_922,&g_922},{&g_922,&g_922,&g_922,&g_922,&g_922},{&g_922,&g_922,&g_922,&g_922,&g_922},{&g_922,&g_922,&g_922,&g_922,&g_922}},{{&g_922,&g_922,&g_922,&g_922,&g_922},{&g_922,&g_922,&g_922,&g_922,&g_922},{&g_922,&g_922,&g_922,&g_922,&g_922},{&g_922,&g_922,&g_922,&g_922,&g_922}},{{&g_922,&g_922,&g_922,&g_922,&g_922},{&g_922,&g_922,&g_922,&g_922,&g_922},{&g_922,&g_922,&g_922,&g_922,&g_922},{&g_922,&g_922,&g_922,&g_922,&g_922}}};
    union U1 l_2780 = {0xF640B9B7L};
    const uint32_t l_2787[4][3][6] = {{{0xBBA2B489L,0UL,0x64BBE3ADL,0x6BDF51F4L,1UL,1UL},{0x3FAFCC22L,0x6BDF51F4L,0x5427FFDFL,0x6BDF51F4L,0x3FAFCC22L,0xD5A12D46L},{0xBBA2B489L,1UL,18446744073709551615UL,0xD5A12D46L,0x3FAFCC22L,0x6BDF51F4L}},{{0x64BBE3ADL,0x6BDF51F4L,1UL,1UL,1UL,0x6BDF51F4L},{1UL,0UL,18446744073709551615UL,7UL,0x5427FFDFL,0xD5A12D46L},{1UL,0x236E450BL,0x5427FFDFL,1UL,1UL,1UL}},{{0x64BBE3ADL,0x236E450BL,0x64BBE3ADL,0xD5A12D46L,0x5427FFDFL,7UL},{0xBBA2B489L,0UL,0x64BBE3ADL,0x6BDF51F4L,1UL,1UL},{0x3FAFCC22L,0UL,1UL,0UL,18446744073709551615UL,7UL}},{{0x64BBE3ADL,0xD5A12D46L,0x5427FFDFL,7UL,18446744073709551615UL,0UL},{0x3FAFCC22L,0UL,1UL,0xD5A12D46L,1UL,0UL},{1UL,1UL,0x5427FFDFL,0x236E450BL,1UL,7UL}}};
    uint64_t *** const *l_2810[7][1];
    const union U1 ***l_2828 = &g_2753[0][3];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_2289[i] = &g_1705;
    for (i = 0; i < 6; i++)
        l_2408[i] = 0L;
    for (i = 0; i < 1; i++)
        l_2536[i] = &g_142[3];
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_2810[i][j] = &g_1626;
    }
    for (g_13 = 0; (g_13 <= 6); g_13 += 1)
    { 
        const uint16_t l_2226 = 0x290DL;
        int64_t *l_2227 = (void*)0;
        int32_t l_2237[3][3] = {{(-6L),(-6L),(-6L)},{3L,3L,3L},{(-6L),(-6L),(-6L)}};
        union U2 l_2246[2] = {{8L},{8L}};
        int i, j;
        for (g_1415 = 0; (g_1415 <= 3); g_1415 += 1)
        { 
            int64_t *l_2228[2];
            int64_t **l_2229 = (void*)0;
            int64_t **l_2230 = (void*)0;
            int64_t **l_2231 = &g_2109;
            int32_t l_2234[1][7] = {{0xB7224F58L,1L,0xB7224F58L,0xB7224F58L,1L,0xB7224F58L,0xB7224F58L}};
            int32_t l_2235 = 8L;
            uint32_t *l_2236[3];
            int i, j;
            for (i = 0; i < 2; i++)
                l_2228[i] = &g_140;
            for (i = 0; i < 3; i++)
                l_2236[i] = (void*)0;
            g_142[g_13] ^= (p_3.f2 < (((safe_add_func_int8_t_s_s((((l_2237[2][0] = (((((l_2226 & ((((l_2228[0] = l_2227) == ((*l_2231) = l_2227)) <= (((g_2232 == (void*)0) ^ l_2226) & l_2226)) <= l_2234[0][3])) < p_3.f2) || 0x49L) && (*****g_2232)) >= l_2235)) || 4294967291UL) != 0x6D67A228L), p_3.f0)) , 0x2961L) && p_3.f2));
            for (p_3.f0 = 0; (p_3.f0 <= 1); p_3.f0 += 1)
            { 
                uint64_t l_2252 = 0UL;
                int i;
            }
        }
    }
    for (g_148 = 0; (g_148 <= 18); g_148++)
    { 
        union U3 **l_2267[6] = {(void*)0,(void*)0,&l_2266,(void*)0,(void*)0,&l_2266};
        int16_t **l_2271 = &g_1706;
        int8_t ** const *l_2284 = (void*)0;
        int32_t l_2288[3][3][2] = {{{6L,5L},{0x39429A58L,6L},{5L,0xAC657491L}},{{(-1L),(-1L)},{0x39429A58L,(-1L)},{(-1L),0xAC657491L}},{{5L,6L},{0x39429A58L,5L},{6L,0xAC657491L}}};
        int32_t l_2303[3];
        uint32_t l_2309 = 0xF246A19AL;
        struct S0 *l_2324 = &g_246;
        int32_t * const *l_2373 = &g_447[0];
        int32_t * const **l_2372 = &l_2373;
        int8_t *****l_2391 = (void*)0;
        uint8_t l_2392 = 0x79L;
        uint32_t l_2394 = 4294967293UL;
        union U2 l_2425[5][2][5] = {{{{0x4C1BCE0BL},{0L},{0xD3CB317AL},{0xDBDE20E0L},{0x805EB407L}},{{0x4C1BCE0BL},{0x805EB407L},{0x90EBC206L},{0x4517B846L},{0x4517B846L}}},{{{0xDBDE20E0L},{0x834A723AL},{0xDBDE20E0L},{0L},{0x805EB407L}},{{0xAEE22196L},{0x4517B846L},{0x805EB407L},{0L},{0xDBDE20E0L}}},{{{0x805EB407L},{0x90EBC206L},{0x4517B846L},{0x4517B846L},{0x90EBC206L}},{{0x90EBC206L},{0L},{0x805EB407L},{0xDBDE20E0L},{0xD3CB317AL}}},{{{0x834A723AL},{0L},{0xDBDE20E0L},{0x7A1D1F94L},{0x8B27398FL}},{{0x2B9C000EL},{0x90EBC206L},{0x90EBC206L},{0x2B9C000EL},{0x7A1D1F94L}}},{{{0x834A723AL},{0x4517B846L},{0xD3CB317AL},{0x4C1BCE0BL},{0x7A1D1F94L}},{{0x90EBC206L},{0x834A723AL},{0x8B27398FL},{0x805EB407L},{0x8B27398FL}}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_2303[i] = 0L;
    }
    if (((safe_sub_func_uint8_t_u_u((***l_2371), l_2430)) < p_3.f2))
    { 
        uint8_t l_2435[3][5][5] = {{{247UL,0x64L,246UL,0x09L,0x22L},{0xDBL,0x3CL,0x09L,0x09L,0x3CL},{0xE2L,0xC6L,0x64L,6UL,9UL},{0UL,255UL,0x1EL,0xC6L,0x09L},{255UL,0xDBL,0x1CL,246UL,0UL}},{{0UL,6UL,1UL,0UL,0xD5L},{0xE2L,255UL,0x3CL,1UL,6UL},{0xDBL,9UL,0x3CL,9UL,0xDBL},{247UL,0xF5L,1UL,7UL,0x64L},{9UL,255UL,0x1CL,1UL,5UL}},{{255UL,0UL,0x1EL,0xF5L,0x64L},{0xB2L,1UL,0x64L,0x64L,0xDBL},{0x64L,246UL,0x09L,0x22L,6UL},{0x1EL,246UL,246UL,0x1EL,0xD5L},{1UL,1UL,0xDBL,0xB2L,0UL}}};
        int32_t l_2454 = 0xE7B4177AL;
        int32_t l_2458 = (-10L);
        int32_t l_2462 = 0x5EB86A71L;
        int32_t l_2466[5][2] = {{8L,0x2E82BF30L},{0xE541E927L,0x969E5768L},{8L,8L},{8L,0x969E5768L},{0xE541E927L,0x2E82BF30L}};
        int32_t l_2497 = 0xC89A4604L;
        uint32_t l_2539 = 6UL;
        int16_t l_2594 = 0x0ACFL;
        int8_t l_2596[4];
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_2596[i] = 1L;
        if ((safe_div_func_int8_t_s_s(p_3.f0, (safe_rshift_func_int8_t_s_s((l_2435[0][3][2] ^= (-1L)), 0)))))
        { 
            uint64_t l_2443[5] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
            int32_t l_2451 = (-1L);
            uint16_t *l_2453 = &l_2418;
            int32_t l_2463[5] = {0xB2E5081BL,0xB2E5081BL,0xB2E5081BL,0xB2E5081BL,0xB2E5081BL};
            int32_t l_2464 = 0x6CA386CAL;
            int32_t l_2468 = 0x45E94285L;
            int32_t l_2469[5] = {7L,7L,7L,7L,7L};
            uint8_t l_2470 = 0x72L;
            uint64_t l_2473[7];
            int32_t *l_2478 = &g_1642;
            int32_t **l_2477[5] = {&l_2478,&l_2478,&l_2478,&l_2478,&l_2478};
            uint32_t *l_2480 = (void*)0;
            uint32_t *l_2481 = &g_1658;
            int64_t *l_2494 = &g_1412[1];
            int16_t l_2496 = 0x6A58L;
            union U1 *** const l_2519 = &g_922;
            int16_t ***l_2528[1][7] = {{(void*)0,&g_1705,(void*)0,(void*)0,&g_1705,(void*)0,(void*)0}};
            uint32_t ***l_2567 = (void*)0;
            uint32_t l_2577 = 1UL;
            int i, j;
            for (i = 0; i < 7; i++)
                l_2473[i] = 0UL;
            for (g_540 = 0; (g_540 != 40); g_540 = safe_add_func_uint32_t_u_u(g_540, 5))
            { 
                int8_t l_2444[2];
                int32_t l_2461 = 0x2CB90CABL;
                int32_t l_2465 = 0x67CCEE27L;
                int32_t l_2467 = 0xB6D1F15FL;
                int i;
                for (i = 0; i < 2; i++)
                    l_2444[i] = (-5L);
                for (g_246.f0 = 9; (g_246.f0 <= 39); ++g_246.f0)
                { 
                    int64_t *l_2442 = &g_193;
                    int32_t *l_2456 = &g_530;
                    int32_t *l_2457[1][5][1];
                    int32_t l_2459 = 0x19D489D8L;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 5; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_2457[i][j][k] = &g_142[2];
                        }
                    }
                }
            }
            g_2479 = ((*g_446) = func_72((*g_694), (**g_742), l_2476));
            if (((((*l_2481)--) || (safe_rshift_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u(p_3.f0, (safe_lshift_func_uint8_t_u_u(p_3.f0, 2)))) != (0L || l_2466[1][1])) && (safe_rshift_func_uint8_t_u_u((((((l_2462 = ((*l_2494) = (safe_rshift_func_int16_t_s_u((**g_1705), 14)))) , (p_3.f2 | p_3.f0)) <= 0UL) || 1L) > (***l_2371)), 3))), p_3.f2))) > (***g_1626)))
            { 
                uint64_t l_2495 = 7UL;
                uint8_t *l_2503 = &l_2470;
                int32_t l_2520 = 0x281D12B5L;
                uint32_t l_2537 = 0UL;
                union U3 l_2551[2] = {{0xEEL},{0xEEL}};
                int i;
                if (l_2495)
                { 
                    return (***g_1626);
                }
                else
                { 
                    uint8_t l_2498 = 1UL;
                    int8_t **l_2501 = &g_20;
                    union U2 *l_2502 = &g_741;
                    uint8_t **l_2504[7][3][3] = {{{(void*)0,(void*)0,&l_2503},{&l_2503,&g_1951,&g_1951},{&l_2503,(void*)0,(void*)0}},{{&l_2503,(void*)0,&l_2503},{(void*)0,&l_2503,(void*)0},{(void*)0,(void*)0,&g_1951}},{{(void*)0,&l_2503,&l_2503},{&g_1951,(void*)0,&g_1951},{(void*)0,(void*)0,(void*)0}},{{(void*)0,&g_1951,&g_1951},{(void*)0,(void*)0,&l_2503},{&l_2503,&g_1951,&g_1951}},{{&l_2503,(void*)0,(void*)0},{&l_2503,(void*)0,&l_2503},{(void*)0,&l_2503,(void*)0}},{{(void*)0,(void*)0,&g_1951},{(void*)0,&l_2503,&l_2503},{&g_1951,(void*)0,&g_1951}},{{(void*)0,(void*)0,(void*)0},{(void*)0,&g_1951,&g_1951},{(void*)0,(void*)0,&l_2503}}};
                    int i, j, k;
                    l_2498++;
                    (**g_445) = (g_2151 , ((**l_2397) , func_72(l_2501, ((*l_2502) = (*l_2400)), func_8((l_2505 = (l_2503 != (g_1951 = &l_2435[0][3][2])))))));
                }
                (*l_2478) |= (safe_rshift_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((safe_div_func_uint64_t_u_u(((*l_2268) , (safe_lshift_func_uint8_t_u_u((((**g_1705) = (safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s((((safe_lshift_func_int16_t_s_s(0L, 0)) == p_3.f2) , 1L), (l_2519 == &g_922))), (l_2520 = p_3.f2)))) <= (***l_2371)), 7))), 0xD1504BD36AD07AA2LL)))), p_3.f2));
                for (l_2454 = (-19); (l_2454 != 22); l_2454++)
                { 
                    const union U2 l_2523 = {-9L};
                    int16_t ****l_2529 = &l_2289[0];
                    (**g_445) = func_72(((*g_694) = &l_2476), l_2523, func_8((((l_2520 | (safe_rshift_func_uint8_t_u_u((((safe_div_func_int8_t_s_s((((**g_2232) == ((*l_2529) = l_2528[0][1])) & (safe_mul_func_int8_t_s_s((((safe_mod_func_int64_t_s_s(((*l_2494) |= p_3.f2), (safe_sub_func_int16_t_s_s(p_3.f2, 0x7FF9L)))) < (**g_190)) , l_2523.f4), 0xDAL))), (***l_2371))) | 0L) <= l_2466[1][0]), 3))) && p_3.f0) & l_2435[0][3][2])));
                }
                if ((**g_446))
                { 
                    uint32_t l_2538[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_2538[i] = 1UL;
                    (**g_445) = l_2536[0];
                    (*g_2479) = l_2537;
                    return l_2538[0];
                }
                else
                { 
                    struct S0 l_2546[3] = {{0x71FDDA03A4B2E418LL,0x81BFL,0x0267L},{0x71FDDA03A4B2E418LL,0x81BFL,0x0267L},{0x71FDDA03A4B2E418LL,0x81BFL,0x0267L}};
                    struct S0 l_2554[6] = {{0x1D53C68008EB68C4LL,0x8E06L,65535UL},{0x1D53C68008EB68C4LL,0x8E06L,65535UL},{0x1D53C68008EB68C4LL,0x8E06L,65535UL},{0x1D53C68008EB68C4LL,0x8E06L,65535UL},{0x1D53C68008EB68C4LL,0x8E06L,65535UL},{0x1D53C68008EB68C4LL,0x8E06L,65535UL}};
                    int i;
                    l_2539++;
                    (*l_2478) = (safe_rshift_func_int16_t_s_u((((**g_806) = l_2481) == (void*)0), (safe_add_func_int64_t_s_s(((*l_2494) |= ((((*g_913) = l_2546[2]) , (safe_add_func_uint64_t_u_u(((*g_362) = (0xB7CDFBB7C80D5991LL && (((safe_mod_func_uint64_t_u_u((*l_2478), (l_2551[0] , (((((((((((safe_add_func_int64_t_s_s((0xBC0FCF716F69A823LL >= 0xDC600A27F8A50F06LL), p_3.f0)) , (*****g_2232)) | 0L) ^ l_2551[0].f0) > 0x2F7F6E29L) && p_3.f0) <= 255UL) ^ l_2520) | 0L) > p_3.f0) || p_3.f2)))) <= (*g_362)) ^ l_2458))), p_3.f0))) & (***g_445))), 0x00B14F7F099C0C21LL))));
                    (**g_912) = (*g_913);
                    (*l_2478) = 0x38A27C8FL;
                    (*g_913) = l_2554[3];
                }
            }
            else
            { 
                uint8_t l_2557[5] = {0x21L,0x21L,0x21L,0x21L,0x21L};
                uint32_t ***l_2565 = &g_807[0];
                uint32_t ****l_2566[1];
                int32_t l_2576[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
                int i;
                for (i = 0; i < 1; i++)
                    l_2566[i] = (void*)0;
                (***g_445) = (safe_rshift_func_uint8_t_u_s(p_3.f2, 5));
                ++l_2557[2];
                p_3.f0 |= (((~((***l_2371) = l_2435[0][3][2])) , ((++(*g_1951)) == (0xDF08E850L > ((((&g_807[0] != (l_2567 = l_2565)) , (safe_rshift_func_int8_t_s_s(((*l_2476) = (safe_mul_func_uint8_t_u_u(0xE9L, ((safe_add_func_uint32_t_u_u((0x4056L && l_2557[2]), 1L)) | 0UL)))), 6))) , &g_2085) == &l_2374[4][3])))) & 0x7EB76B35L);
                for (g_1084.f2 = 5; (g_1084.f2 != 53); g_1084.f2 = safe_add_func_int16_t_s_s(g_1084.f2, 8))
                { 
                    return p_3.f0;
                }
                ++l_2577;
            }
            return l_2454;
        }
        else
        { 
            uint32_t l_2580 = 4294967295UL;
            int32_t l_2589 = 0x7A463D9FL;
            int32_t l_2590 = (-9L);
            int32_t l_2591 = 0x452F1F1CL;
            int32_t l_2592 = (-4L);
            int32_t l_2593[5][3][5] = {{{0x732FDBD9L,0x732FDBD9L,0x732FDBD9L,0x732FDBD9L,0x732FDBD9L},{0xD5587C62L,0xD5587C62L,0xD5587C62L,0xD5587C62L,0xD5587C62L},{0x732FDBD9L,0x732FDBD9L,0x732FDBD9L,0x732FDBD9L,0x732FDBD9L}},{{0xD5587C62L,0xD5587C62L,0xD5587C62L,0xD5587C62L,0xD5587C62L},{0x732FDBD9L,0x732FDBD9L,0x732FDBD9L,0x732FDBD9L,0x732FDBD9L},{0xD5587C62L,0xD5587C62L,0xD5587C62L,0xD5587C62L,0xD5587C62L}},{{0x732FDBD9L,0x732FDBD9L,0x732FDBD9L,0x732FDBD9L,0x732FDBD9L},{0xD5587C62L,0xD5587C62L,0xD5587C62L,0xD5587C62L,0xD5587C62L},{0x732FDBD9L,0x732FDBD9L,0x732FDBD9L,0x732FDBD9L,0x732FDBD9L}},{{0xD5587C62L,0xD5587C62L,0xD5587C62L,0xD5587C62L,0xD5587C62L},{0x732FDBD9L,0x732FDBD9L,0x732FDBD9L,0x732FDBD9L,0x732FDBD9L},{0xD5587C62L,0xD5587C62L,0xD5587C62L,0xD5587C62L,0xD5587C62L}},{{0x732FDBD9L,0x732FDBD9L,0x732FDBD9L,0x732FDBD9L,0x732FDBD9L},{0xD5587C62L,0xD5587C62L,0xD5587C62L,0xD5587C62L,0xD5587C62L},{0x732FDBD9L,0x732FDBD9L,0x732FDBD9L,0x732FDBD9L,0x732FDBD9L}}};
            int i, j, k;
            p_3.f0 = (l_2580 , (l_2591 = (((*g_362) = (p_3.f2 ^ (safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_s((((***l_2371) = (safe_rshift_func_uint16_t_u_u(((*g_1756) &= (p_3.f2 == ((((**g_922) , (safe_div_func_uint8_t_u_u(((((l_2590 &= ((l_2589 = 1L) , (l_2466[1][0] = ((*l_2476) &= (((***l_2371) & p_3.f2) & p_3.f0))))) || 1UL) , (-3L)) | 0x9DL), (**g_190)))) | 0x33A4B841L) | 4294967294UL))), 3))) <= (-1L)), 8)) < p_3.f2), p_3.f2)))) , p_3.f0)));
            ++g_2597;
            return p_3.f2;
        }
    }
    else
    { 
        union U1 *l_2606[5] = {&g_276,&g_276,&g_276,&g_276,&g_276};
        int16_t ****l_2608 = (void*)0;
        int32_t l_2615 = 0x6B97D359L;
        int32_t l_2623 = (-4L);
        union U2 l_2635 = {9L};
        union U1 ***l_2636 = (void*)0;
        int8_t ****l_2666 = &g_1875;
        uint16_t *l_2672[7] = {&g_322,&l_2505,&g_322,&g_322,&l_2505,&g_322,&g_322};
        uint16_t **l_2671 = &l_2672[5];
        uint16_t ***l_2670[1][7] = {{&l_2671,&l_2671,&l_2671,&l_2671,&l_2671,&l_2671,&l_2671}};
        int32_t l_2688 = (-1L);
        int32_t l_2689 = (-1L);
        int32_t l_2691 = 7L;
        int32_t l_2693 = 0xF194D38AL;
        int8_t l_2694 = (-5L);
        const uint16_t ***l_2716 = (void*)0;
        const uint16_t ****l_2715 = &l_2716;
        const uint16_t *****l_2714 = &l_2715;
        uint8_t l_2739 = 255UL;
        const union U1 ****l_2754[3];
        union U1 ****l_2757 = &l_2756[0][2][0];
        struct S0 l_2790 = {0x1CFADEDA9BBA5CC3LL,1L,65534UL};
        uint64_t **** const l_2821 = &g_1626;
        int i, j;
        for (i = 0; i < 3; i++)
            l_2754[i] = &g_2752;
        if (((safe_lshift_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((((l_2606[4] != l_2607[4][0][1]) & ((g_2609 = ((*g_2233) = l_2289[0])) == (((*g_1756) = p_3.f0) , (((((0UL > 0L) < l_2610) < p_3.f0) <= (**g_1627)) , (void*)0)))) > p_3.f0), 7)), p_3.f2)) == (-3L)), 7)) <= p_3.f0))
        { 
            union U1 ***l_2645[3][5] = {{&g_922,(void*)0,&g_922,(void*)0,&g_922},{&g_922,(void*)0,&g_922,&g_922,&g_922},{&g_922,&g_922,&g_922,&g_922,&g_922}};
            int i, j;
            for (g_1084.f1 = 0; (g_1084.f1 >= 0); g_1084.f1 -= 1)
            { 
                const uint32_t l_2621 = 0x8B94F36EL;
                int32_t l_2622 = (-9L);
                int32_t *** const *l_2626 = &l_2371;
                l_2623 |= ((safe_mod_func_uint8_t_u_u((0xE4L | (((p_3.f1.f2 = ((*g_1756)++)) >= l_2615) < (((-8L) <= (safe_mul_func_int8_t_s_s((l_2622 = (safe_sub_func_int64_t_s_s((+l_2621), (*g_362)))), (-6L)))) <= ((***l_2371) = 0x286479B4L)))), l_2621)) > l_2615);
                for (l_2430 = 0; (l_2430 >= 0); l_2430 -= 1)
                { 
                    uint64_t l_2625 = 18446744073709551607UL;
                    p_3.f0 &= ((**g_446) = (~l_2625));
                    return p_3.f2;
                }
                (***l_2371) |= ((p_3.f1.f2 = (&l_2371 == l_2626)) != ((*g_1756) = (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(0x27L, 248UL)), 3)), 7))));
            }
            (**g_446) = (safe_mul_func_uint16_t_u_u(((l_2635 , l_2636) != ((safe_add_func_uint8_t_u_u(((((safe_unary_minus_func_uint16_t_u(((+(~l_2635.f1)) ^ (safe_sub_func_int16_t_s_s(p_3.f0, p_3.f0))))) >= (0x8DC5L != (!(***g_1626)))) | p_3.f2) == 0xB62DB98C73F26528LL), (*g_1951))) , l_2645[2][4])), l_2623));
        }
        else
        { 
            int64_t l_2651 = (-5L);
            int32_t l_2662 = 1L;
            uint64_t *l_2667 = &l_2635.f3.f0;
            uint64_t ** const **l_2674 = (void*)0;
            uint64_t ** const ***l_2673 = &l_2674;
            int32_t l_2678 = 0xC73AE3F4L;
            int32_t l_2679 = 0L;
            int32_t l_2680 = 0L;
            int32_t l_2681 = 0xD14FC7A9L;
            int32_t l_2682 = (-8L);
            int32_t l_2683 = 0xDC4AF236L;
            int32_t l_2692[7] = {0x50206C95L,0x50206C95L,0x50206C95L,0x50206C95L,0x50206C95L,0x50206C95L,0x50206C95L};
            int32_t l_2695[1];
            union U2 l_2713[6][3] = {{{-1L},{1L},{1L}},{{8L},{1L},{0xE4C76C49L}},{{1L},{-1L},{0x4D6102CEL}},{{8L},{8L},{0x4D6102CEL}},{{-1L},{1L},{0xE4C76C49L}},{{1L},{8L},{1L}}};
            int32_t l_2725 = 0xC0C26942L;
            const uint32_t *l_2736 = (void*)0;
            int i, j;
            for (i = 0; i < 1; i++)
                l_2695[i] = 0L;
            (***l_2371) = (((l_2615 = (safe_mul_func_int8_t_s_s(((~(safe_add_func_uint8_t_u_u((l_2651 , (safe_lshift_func_int8_t_s_s(0x2DL, (safe_rshift_func_uint16_t_u_s(l_2635.f0, 7))))), p_3.f2))) , (((*l_2667) = ((**g_1627) = (safe_mul_func_int16_t_s_s((((((safe_lshift_func_uint8_t_u_u(((l_2663 = (((*g_1951) & ((l_2662 = (safe_mod_func_int16_t_s_s(((0x42L != (-1L)) , p_3.f2), l_2651))) >= p_3.f2)) , (void*)0)) != l_2666), 7)) < l_2635.f0) != p_3.f0) && p_3.f2) < p_3.f2), 0UL)))) && l_2635.f4)), p_3.f0))) , p_3.f0) , p_3.f0);
            for (g_1365 = 0; (g_1365 == 4); g_1365++)
            { 
                uint64_t ** const ***l_2675 = (void*)0;
                int32_t l_2687 = 2L;
                int32_t l_2690 = (-1L);
                uint32_t l_2700[5];
                int64_t *l_2709 = (void*)0;
                int64_t *l_2710 = &g_193;
                int32_t l_2719 = 0xBE1E1BA1L;
                int32_t l_2720 = (-1L);
                int32_t l_2721 = 0x16E37F21L;
                int32_t l_2722 = 0xEBA23899L;
                int32_t l_2723 = 0xE7AB5D9EL;
                int32_t l_2724 = 0xF3D854EEL;
                int32_t l_2726 = 0x55188BD1L;
                int32_t l_2727 = 0x43D94A14L;
                int32_t l_2728 = 0x557FF420L;
                int32_t l_2729 = 0x0A67F686L;
                int32_t l_2730 = 0x08753EDBL;
                int8_t l_2731 = 0x86L;
                uint16_t l_2732[6][6] = {{0x2E62L,1UL,0x991FL,0x991FL,1UL,0x2E62L},{1UL,7UL,0x991FL,0x2E62L,65534UL,1UL},{0x403BL,7UL,0x2E62L,0x403BL,1UL,0x403BL},{0x403BL,1UL,0x403BL,0x2E62L,7UL,0x403BL},{1UL,65534UL,0x2E62L,0x991FL,7UL,1UL},{0x2E62L,1UL,0x991FL,0x991FL,1UL,0x2E62L}};
                union U3 l_2735 = {0xB1L};
                int i, j;
                for (i = 0; i < 5; i++)
                    l_2700[i] = 0x89AAFA74L;
                for (g_276.f1.f2 = 0; (g_276.f1.f2 <= 1); g_276.f1.f2 += 1)
                { 
                    int32_t l_2676 = 7L;
                    int32_t l_2677 = 0x0DFEEEAAL;
                    int32_t l_2684 = 0L;
                    int32_t l_2685 = (-4L);
                    int32_t l_2686 = 0x40D004C2L;
                    int32_t l_2696[2];
                    uint32_t l_2697[4][3];
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_2696[i] = 0x2C9B1A2BL;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_2697[i][j] = 0xAC54FD51L;
                    }
                    (**g_1491) = l_2670[0][1];
                    if (p_3.f0)
                        continue;
                    l_2675 = l_2673;
                    ++l_2697[1][0];
                    --l_2700[3];
                }
                l_2687 &= ((((***g_1626) = ((**g_1627) <= (~((p_3.f2 || (safe_sub_func_int32_t_s_s((safe_mod_func_int64_t_s_s(((*l_2710) &= (safe_unary_minus_func_uint16_t_u(65535UL))), ((safe_mod_func_uint64_t_u_u(((l_2713[5][0] , &g_1492) != l_2714), (safe_add_func_uint16_t_u_u((((p_3.f2 < 1L) > (**g_1627)) >= (***l_2371)), 3L)))) , p_3.f0))), (**g_446)))) <= (-1L))))) <= 0L) ^ 4294967294UL);
                --l_2732[2][0];
                for (g_276.f0 = 0; (g_276.f0 <= 6); g_276.f0 += 1)
                { 
                    return (***g_1626);
                }
                (*g_446) = func_72((*g_694), (**g_742), (((l_2735 , (((l_2736 == ((safe_mod_func_int16_t_s_s((***g_2609), l_2739)) , func_72((*g_694), (**g_742), &l_2731))) , p_3.f0) > p_3.f0)) || 0xE3F710FA191D8F38LL) , (void*)0));
            }
            for (l_2623 = 0; (l_2623 > 12); l_2623++)
            { 
                int32_t l_2742 = 0x3065BD2EL;
                int32_t l_2743[4][6] = {{4L,0xD8A738DBL,0xBB95FCCBL,0xD8A738DBL,4L,4L},{1L,0xD8A738DBL,0xD8A738DBL,1L,(-1L),1L},{1L,(-1L),1L,0xD8A738DBL,0xD8A738DBL,1L},{4L,4L,0xD8A738DBL,0xBB95FCCBL,0xD8A738DBL,4L}};
                int i, j;
                ++g_2744;
                (**g_445) = (**l_2371);
            }
        }
        l_2615 = ((safe_div_func_uint64_t_u_u((!1UL), (safe_sub_func_int64_t_s_s(p_3.f2, ((g_2752 = g_2752) == (l_2755 , ((*l_2757) = l_2756[2][3][4]))))))) <= ((safe_div_func_int16_t_s_s(l_2694, ((safe_mul_func_int16_t_s_s(((l_2688 = ((*g_1951) <= 0x6AL)) == p_3.f0), 0xAA3EL)) ^ 4294967295UL))) <= p_3.f0));
        (***g_445) |= (((**l_2671)++) & g_2764);
        for (l_2739 = 0; (l_2739 != 48); l_2739 = safe_add_func_int8_t_s_s(l_2739, 8))
        { 
            union U1 *l_2773 = &g_276;
            int32_t l_2783 = 1L;
            const uint64_t *l_2786 = &l_2755.f0;
            const uint64_t **l_2785 = &l_2786;
            const uint64_t ***l_2784 = &l_2785;
            const union U2 l_2789 = {0L};
            int16_t ***l_2796[6][7][6] = {{{&g_1705,&g_1705,(void*)0,(void*)0,&g_1705,&g_1705},{(void*)0,(void*)0,&g_1705,&g_1705,&g_1705,&g_1705},{&g_1705,&g_1705,&g_1705,(void*)0,&g_1705,&g_1705},{&g_1705,(void*)0,&g_1705,&g_1705,&g_1705,&g_1705},{&g_1705,&g_1705,&g_1705,&g_1705,(void*)0,(void*)0},{&g_1705,&g_1705,&g_1705,(void*)0,&g_1705,&g_1705},{&g_1705,&g_1705,&g_1705,&g_1705,&g_1705,(void*)0}},{{(void*)0,&g_1705,&g_1705,(void*)0,&g_1705,&g_1705},{&g_1705,&g_1705,&g_1705,&g_1705,&g_1705,&g_1705},{&g_1705,(void*)0,&g_1705,&g_1705,&g_1705,(void*)0},{&g_1705,&g_1705,&g_1705,&g_1705,&g_1705,&g_1705},{&g_1705,&g_1705,&g_1705,&g_1705,&g_1705,(void*)0},{(void*)0,&g_1705,&g_1705,&g_1705,&g_1705,&g_1705},{&g_1705,&g_1705,(void*)0,(void*)0,&g_1705,&g_1705}},{{(void*)0,&g_1705,&g_1705,&g_1705,&g_1705,&g_1705},{&g_1705,(void*)0,&g_1705,(void*)0,&g_1705,&g_1705},{&g_1705,(void*)0,(void*)0,&g_1705,&g_1705,&g_1705},{&g_1705,&g_1705,&g_1705,&g_1705,(void*)0,(void*)0},{&g_1705,&g_1705,(void*)0,(void*)0,&g_1705,(void*)0},{&g_1705,&g_1705,&g_1705,&g_1705,&g_1705,&g_1705},{(void*)0,&g_1705,&g_1705,(void*)0,(void*)0,&g_1705}},{{&g_1705,&g_1705,&g_1705,&g_1705,&g_1705,&g_1705},{(void*)0,(void*)0,&g_1705,&g_1705,(void*)0,&g_1705},{&g_1705,(void*)0,&g_1705,&g_1705,&g_1705,(void*)0},{&g_1705,&g_1705,(void*)0,&g_1705,&g_1705,(void*)0},{&g_1705,&g_1705,&g_1705,&g_1705,&g_1705,&g_1705},{(void*)0,&g_1705,(void*)0,(void*)0,&g_1705,&g_1705},{&g_1705,&g_1705,&g_1705,&g_1705,&g_1705,&g_1705}},{{&g_1705,(void*)0,&g_1705,(void*)0,(void*)0,&g_1705},{&g_1705,(void*)0,(void*)0,&g_1705,&g_1705,&g_1705},{&g_1705,&g_1705,&g_1705,&g_1705,(void*)0,(void*)0},{&g_1705,&g_1705,&g_1705,(void*)0,&g_1705,(void*)0},{&g_1705,&g_1705,&g_1705,&g_1705,&g_1705,&g_1705},{&g_1705,&g_1705,&g_1705,(void*)0,(void*)0,&g_1705},{(void*)0,&g_1705,&g_1705,&g_1705,&g_1705,&g_1705}},{{&g_1705,(void*)0,&g_1705,&g_1705,&g_1705,&g_1705},{&g_1705,(void*)0,&g_1705,&g_1705,&g_1705,(void*)0},{&g_1705,&g_1705,&g_1705,&g_1705,&g_1705,(void*)0},{(void*)0,&g_1705,&g_1705,&g_1705,&g_1705,&g_1705},{&g_1705,&g_1705,(void*)0,(void*)0,&g_1705,&g_1705},{(void*)0,&g_1705,&g_1705,&g_1705,&g_1705,&g_1705},{&g_1705,(void*)0,&g_1705,(void*)0,&g_1705,&g_1705}}};
            uint32_t l_2820 = 0xE77CB9A7L;
            union U2 l_2838 = {5L};
            int i, j, k;
            for (g_1099 = 0; (g_1099 <= 0); g_1099 += 1)
            { 
                uint32_t l_2767 = 0x42FF165EL;
                union U3 l_2788 = {0UL};
                uint8_t *l_2822 = &g_588[3];
                l_2767--;
                for (l_2755.f0 = 0; (l_2755.f0 <= 0); l_2755.f0 += 1)
                { 
                    int8_t l_2772 = (-5L);
                    int i, j;
                    l_2772 |= ((safe_rshift_func_int8_t_s_u((((*l_2476) = 1L) , p_3.f0), 4)) < 2UL);
                    l_2773 = &p_3;
                    (**g_446) = (((safe_rshift_func_uint8_t_u_u((((((safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((p_3.f1.f2 = ((**g_912) , l_2772)), ((l_2780 , ((l_2772 == ((safe_mod_func_uint8_t_u_u(l_2783, (((void*)0 != l_2784) | 0xD0503A35CD70C841LL))) || l_2783)) || l_2623)) , l_2689))), 1UL)) | l_2783) , p_3) , p_3.f2) || l_2693), l_2739)) , p_3.f0) , l_2787[2][1][1]);
                    p_3.f0 = (p_3.f0 & ((*g_1706) = (l_2788 , p_3.f0)));
                    return (**g_1627);
                }
                (**g_1082) = (l_2788 , ((l_2694 , l_2789) , l_2790));
                for (g_1365 = 1; (g_1365 >= 0); g_1365 -= 1)
                { 
                    int16_t ** const *l_2795[3];
                    int16_t **l_2797 = &g_1706;
                    uint32_t *l_2803 = (void*)0;
                    uint32_t *l_2804 = &g_249[0].f3;
                    uint32_t *l_2805 = &g_2744;
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_2795[i] = (void*)0;
                    g_142[g_1099] = (safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(((((l_2795[0] == ((**g_2232) = l_2796[1][0][2])) , (*g_2609)) == l_2797) != (~(safe_lshift_func_int8_t_s_u(((((safe_mod_func_uint32_t_u_u((--(*l_2805)), (safe_mul_func_uint16_t_u_u((l_2810[0][0] != ((safe_add_func_int16_t_s_s(g_142[(g_1099 + 5)], (safe_lshift_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((+(safe_rshift_func_int16_t_s_u(0x5403L, g_525[(g_1099 + 1)]))), g_525[g_1365])) && 0xD2D2L), l_2820)))) , l_2821)), 0xC2D5L)))) , 0xEDL) , (**l_2399)) , 0xDDL), (**g_190))))), p_3.f2)), l_2767));
                    if (p_3.f2)
                        break;
                    g_525[g_1365] &= ((void*)0 == l_2822);
                }
                for (g_2597 = 0; (g_2597 <= 0); g_2597 += 1)
                { 
                    (*g_913) = (*g_913);
                }
            }
            for (g_1174 = 0; (g_1174 != 22); ++g_1174)
            { 
                const union U1 ***l_2827 = &g_2753[2][3];
                int64_t *l_2839 = &g_1412[1];
                int32_t l_2840 = 0L;
                (***l_2371) = (safe_mul_func_uint8_t_u_u((p_3.f0 || (&g_2753[3][4] != (l_2828 = l_2827))), (++(*g_1951))));
                l_2688 ^= ((***g_445) = (p_3.f2 != ((*l_2839) = (safe_unary_minus_func_int8_t_s((((0x17L && l_2615) == ((((safe_lshift_func_uint8_t_u_s((((**l_2397) = (**g_742)) , ((safe_mul_func_int8_t_s_s(((((p_3.f0 > (((safe_lshift_func_int8_t_s_u(p_3.f2, 3)) >= ((l_2838 , l_2615) == 0x0B196B7C8282727DLL)) , p_3.f0)) == l_2623) != p_3.f0) < 0xDBF8L), 0L)) >= p_3.f2)), 6)) , p_3.f2) ^ p_3.f0) == p_3.f2)) == p_3.f0))))));
                if (l_2840)
                    break;
                if (p_3.f2)
                    continue;
            }
            return p_3.f2;
        }
    }
    return p_3.f2;
}



static int64_t  func_5(int32_t  p_6, int8_t * p_7)
{ 
    uint16_t l_37[7][2] = {{0x5C74L,0x5C74L},{0x5C74L,0x5C74L},{0x5C74L,0x5C74L},{0x5C74L,0x5C74L},{0x5C74L,0x5C74L},{0x5C74L,0x5C74L},{0x5C74L,0x5C74L}};
    int32_t l_42[6] = {0L,(-3L),(-3L),0L,(-3L),(-3L)};
    union U1 l_67[3][2][4] = {{{{1L},{0xA1C32FD8L},{1L},{0xA1C32FD8L}},{{1L},{0xA1C32FD8L},{1L},{0xA1C32FD8L}}},{{{1L},{0xA1C32FD8L},{1L},{0xA1C32FD8L}},{{1L},{0xA1C32FD8L},{1L},{0xA1C32FD8L}}},{{{1L},{0xA1C32FD8L},{1L},{0xA1C32FD8L}},{{1L},{0xA1C32FD8L},{1L},{0xA1C32FD8L}}}};
    struct S0 **l_1783 = &g_1249;
    uint32_t l_1815 = 8UL;
    union U3 * const l_1823 = &g_249[1];
    const union U1 **l_1864 = &g_275[0];
    const union U1 ***l_1863 = &l_1864;
    const union U1 ****l_1862 = &l_1863;
    uint32_t ***l_1871 = (void*)0;
    uint64_t ***l_1877 = &g_1627;
    union U2 l_1886 = {0x9964AF62L};
    uint32_t l_1904 = 0xABD82D1EL;
    uint64_t l_1937 = 0UL;
    uint16_t * const **l_1947[4];
    const int16_t l_2014 = 0L;
    int32_t l_2025 = 1L;
    uint64_t l_2041 = 0x50C06EE1ACB922D4LL;
    uint64_t l_2062 = 0x5D53B164AEADB586LL;
    int32_t **l_2083 = &g_1531[2];
    int32_t ***l_2082 = &l_2083;
    int32_t l_2088 = 1L;
    int32_t ****l_2106 = &g_445;
    int32_t *****l_2105 = &l_2106;
    int16_t l_2150 = 1L;
    uint32_t l_2197 = 2UL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1947[i] = &g_1755[0][1];
    return p_6;
}



static int8_t * func_8(int8_t  p_9)
{ 
    int8_t *l_16 = (void*)0;
    int8_t **l_17 = (void*)0;
    int8_t *l_19[5] = {&g_13,&g_13,&g_13,&g_13,&g_13};
    int8_t **l_18[4];
    int32_t l_25[5][1][2] = {{{(-3L),(-3L)}},{{(-3L),(-3L)}},{{(-3L),(-3L)}},{{(-3L),(-3L)}},{{(-3L),(-3L)}}};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_18[i] = &l_19[0];
    if ((safe_lshift_func_uint16_t_u_u((&p_9 != (g_20 = (l_16 = (void*)0))), ((safe_div_func_int64_t_s_s((((0UL >= 6UL) >= (-1L)) > ((void*)0 == &l_19[0])), l_25[3][0][0])) | 0xEF3352FBL))))
    { 
        for (p_9 = 0; (p_9 <= (-30)); --p_9)
        { 
            int8_t *l_28 = &g_13;
            return l_28;
        }
    }
    else
    { 
        int32_t *l_29 = (void*)0;
        int32_t *l_30 = &l_25[3][0][0];
        int32_t *l_31 = &l_25[3][0][0];
        int32_t *l_32 = &l_25[2][0][0];
        int32_t *l_33[5];
        int i;
        for (i = 0; i < 5; i++)
            l_33[i] = &l_25[1][0][0];
        --g_34;
    }
    return &g_13;
}



static const uint64_t  func_52(int32_t  p_53, uint32_t  p_54, int8_t ** p_55, int8_t * p_56, uint16_t  p_57)
{ 
    int8_t l_1286 = 0xF9L;
    int32_t l_1338 = 0x3CF9F7FCL;
    int64_t * const l_1351 = &g_193;
    int32_t l_1366 = 0xA418330BL;
    int32_t l_1413 = 0x94C1341CL;
    int32_t l_1414 = 0x9EE18C68L;
    union U3 l_1425 = {0xEEL};
    int32_t l_1476 = 0xF87B98E5L;
    uint32_t *l_1486 = &g_164;
    int32_t ****l_1535 = &g_445;
    int64_t l_1556 = 1L;
    int64_t l_1571 = (-6L);
    uint8_t l_1576[4];
    uint16_t *l_1596 = (void*)0;
    uint16_t **l_1595 = &l_1596;
    int32_t **l_1621 = (void*)0;
    struct S0 l_1645 = {1UL,0x98CCL,1UL};
    int32_t l_1657 = 9L;
    int32_t l_1676 = 0x1462E284L;
    uint16_t l_1687 = 0x8768L;
    int64_t l_1712 = 0x9B1687E7C7A005CELL;
    int32_t l_1717 = 0x4ACB2944L;
    int32_t l_1718 = 0xD1EA760FL;
    int32_t l_1719[3];
    int16_t ****l_1728 = &g_1704;
    uint16_t *****l_1758[7] = {(void*)0,&g_1492,&g_1492,(void*)0,&g_1492,&g_1492,(void*)0};
    int i;
    for (i = 0; i < 4; i++)
        l_1576[i] = 0x2FL;
    for (i = 0; i < 3; i++)
        l_1719[i] = 0x01077C09L;
lbl_1575:
    if (l_1286)
    { 
        int32_t *l_1287 = &g_276.f0;
        int32_t *l_1288 = (void*)0;
        int32_t *l_1289 = &g_142[5];
        struct S0 l_1340 = {9UL,-2L,0x74E3L};
lbl_1339:
        (*l_1289) ^= p_53;
        for (g_233 = 27; (g_233 > 36); g_233 = safe_add_func_uint64_t_u_u(g_233, 7))
        { 
            uint16_t *l_1317 = &g_1084.f2;
            uint16_t **l_1316 = &l_1317;
            uint16_t ***l_1315[4][4] = {{&l_1316,&l_1316,&l_1316,&l_1316},{&l_1316,&l_1316,&l_1316,&l_1316},{&l_1316,&l_1316,&l_1316,&l_1316},{&l_1316,&l_1316,&l_1316,&l_1316}};
            uint16_t ****l_1318 = &l_1315[0][3];
            uint16_t ****l_1320 = &g_1319;
            int64_t *l_1321 = &g_140;
            int32_t l_1322 = (-7L);
            int16_t *l_1323 = &g_741.f3.f1;
            struct S0 l_1341 = {0x48CD3680512D5328LL,0xC86CL,0xA464L};
            int i, j;
            if ((safe_rshift_func_uint16_t_u_s(((safe_add_func_int16_t_s_s((safe_add_func_int16_t_s_s(g_102, p_53)), ((*l_1323) = (safe_div_func_uint64_t_u_u(((*g_362) = ((safe_sub_func_int64_t_s_s((safe_mod_func_int32_t_s_s(p_57, (((safe_unary_minus_func_uint32_t_u((p_54 = (((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((((safe_div_func_int64_t_s_s(((((*l_1289) |= (((safe_div_func_int64_t_s_s(((*l_1321) = (((*l_1318) = ((++(**g_190)) , l_1315[0][0])) != ((*l_1320) = g_1319))), (0UL || ((*g_362) || (*g_362))))) > g_43[1]) || p_54)) <= l_1286) , g_4), 18446744073709551608UL)) ^ 1L) , (*p_56)), l_1286)), l_1322)) || l_1322) | l_1322)))) >= l_1322) , 0xC53B1EB6L))), g_39)) < (-1L))), l_1286))))) <= 0xF4D4FF32L), 12)))
            { 
                (**g_445) = (void*)0;
                if (p_53)
                    continue;
            }
            else
            { 
                union U2 l_1333[6] = {{0x8FFB9A0EL},{0x8FFB9A0EL},{0x8FFB9A0EL},{0x8FFB9A0EL},{0x8FFB9A0EL},{0x8FFB9A0EL}};
                int i;
                for (g_111 = 0; (g_111 <= 1); g_111 += 1)
                { 
                    int16_t l_1336 = 2L;
                    int8_t *l_1337 = &g_43[0];
                    int i;
                    g_525[g_111] ^= ((safe_unary_minus_func_int16_t_s((((l_1338 = (safe_mod_func_int64_t_s_s((safe_mod_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((l_1333[0] , ((*l_1337) = ((*g_362) <= (p_57 & (g_164 & ((*l_1321) = ((l_1333[0] , 0x9029L) > ((*l_1317) = l_1336)))))))) > 0L), (*p_56))), 0xAE03L)) , p_54), 0x42AEL)), g_1186[1]))) , (*g_913)) , p_57))) & 0x677CCC98L);
                    if (p_54)
                        break;
                    return p_54;
                }
                for (g_608 = 1; (g_608 <= 4); g_608 += 1)
                { 
                    if (g_233)
                        goto lbl_1339;
                }
                if (p_53)
                    continue;
                if (l_1286)
                    continue;
                l_1333[0].f3 = l_1340;
            }
            (**g_445) = &p_53;
            (**g_1082) = l_1341;
        }
        (*l_1289) ^= p_57;
    }
    else
    { 
        int16_t l_1354 = 0x638BL;
        uint32_t l_1356 = 0x62E1703DL;
        int32_t l_1362 = 1L;
        for (g_276.f1.f0 = 0; (g_276.f1.f0 == 40); g_276.f1.f0 = safe_add_func_uint32_t_u_u(g_276.f1.f0, 7))
        { 
            int64_t *l_1348 = &g_140;
            int64_t *l_1353 = &g_148;
            int64_t **l_1352 = &l_1353;
            int32_t l_1355 = 1L;
            int32_t l_1357 = 0x5822E1F1L;
            int32_t *l_1358 = &g_504;
            (*l_1358) ^= ((safe_mul_func_int8_t_s_s((~(g_111 == ((*l_1348) &= (safe_unary_minus_func_int16_t_s(((*g_742) == (void*)0)))))), ((l_1286 > p_53) & ((*g_362) |= (((((safe_mod_func_int32_t_s_s(((l_1351 != ((*l_1352) = (void*)0)) != l_1354), l_1355)) >= l_1356) ^ l_1357) , (**g_190)) >= 0xE7L))))) , 0xA74BBB4EL);
            l_1366 |= ((*l_1358) & (safe_div_func_int8_t_s_s((safe_unary_minus_func_int16_t_s(((l_1338 != (l_1286 | (((l_1362 = l_1356) ^ 0x8CEAL) == (safe_add_func_uint8_t_u_u((p_53 != ((((-8L) | 1L) > g_1365) != g_104)), 0x88L))))) ^ 0xF205BCC7L))), (*p_56))));
        }
    }
    for (g_504 = (-1); (g_504 < (-2)); g_504--)
    { 
        uint16_t ****l_1373 = &g_1319;
        uint16_t *****l_1374 = &l_1373;
        int32_t l_1383 = (-5L);
        int32_t l_1406 = 0x326906C9L;
        int32_t l_1407[2];
        uint8_t l_1409 = 0x56L;
        const uint32_t l_1452 = 4294967288UL;
        int8_t *l_1513 = &g_741.f1;
        int8_t l_1655[3];
        int32_t **l_1661[7] = {&g_447[0],&g_447[0],&g_447[0],&g_447[0],&g_447[0],&g_447[0],&g_447[0]};
        union U1 l_1691[1][6] = {{{0x8F2EC4EBL},{0x7546373DL},{0x7546373DL},{0x8F2EC4EBL},{0x7546373DL},{0x7546373DL}}};
        union U3 *l_1693 = &l_1425;
        int16_t *l_1702 = &g_246.f1;
        int16_t **l_1701 = &l_1702;
        int16_t ***l_1700 = &l_1701;
        int32_t l_1707 = 0xCE911485L;
        int8_t l_1724 = 0L;
        int16_t ****l_1731 = &l_1700;
        int i, j;
        for (i = 0; i < 2; i++)
            l_1407[i] = 0xE06EE646L;
        for (i = 0; i < 3; i++)
            l_1655[i] = 0xC3L;
        if ((l_1366 ^ ((*g_362) == ((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((*p_56) > (((*l_1374) = l_1373) != (void*)0)), 6)), l_1286)) ^ (safe_lshift_func_int8_t_s_u((*p_56), 2))))))
        { 
            int8_t l_1391 = (-1L);
            int32_t l_1404 = 1L;
            int32_t l_1451 = 0L;
            int32_t l_1474 = 0x37F71195L;
            int32_t l_1475[2];
            int8_t l_1477[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
            int i;
            for (i = 0; i < 2; i++)
                l_1475[i] = 1L;
            for (g_125 = (-20); (g_125 >= (-12)); g_125++)
            { 
                uint64_t l_1384 = 18446744073709551615UL;
                int32_t l_1392 = 0L;
                uint64_t l_1393[5][1][3] = {{{0x376216DEDE311A04LL,18446744073709551609UL,18446744073709551615UL}},{{0xA9C1FF33551EADA9LL,18446744073709551609UL,0xA9C1FF33551EADA9LL}},{{0x5E43896FBAEA9B59LL,0x376216DEDE311A04LL,18446744073709551615UL}},{{0x5E43896FBAEA9B59LL,0x5E43896FBAEA9B59LL,0x376216DEDE311A04LL}},{{0xA9C1FF33551EADA9LL,0x376216DEDE311A04LL,0x376216DEDE311A04LL}}};
                uint64_t **l_1396 = &g_362;
                int32_t l_1405 = (-1L);
                int32_t l_1408[5];
                const union U2 l_1453 = {-7L};
                uint32_t l_1482 = 4294967287UL;
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_1408[i] = 0x8AF1CBD0L;
                if ((((((safe_div_func_int32_t_s_s(((l_1384 = (safe_mul_func_uint8_t_u_u(l_1383, 0xA4L))) | (((safe_mod_func_int32_t_s_s(((p_54 > (((((l_1338 > ((*l_1351) = (safe_add_func_int64_t_s_s(0x704AF73F11CFC6DELL, ((*g_362) &= ((0x09A2L || g_142[4]) >= 0L)))))) & l_1391) , p_57) <= l_1392) & 5L)) & p_53), 4294967295UL)) , l_1383) , l_1383)), l_1383)) , 0xB07FEE8945624C74LL) == p_57) || l_1393[2][0][2]) >= l_1383))
                { 
                    uint64_t ***l_1397 = &l_1396;
                    l_1392 &= (safe_rshift_func_int16_t_s_u(1L, g_193));
                    (*l_1397) = l_1396;
                }
                else
                { 
                    int32_t *l_1398 = &l_1392;
                    int32_t *l_1399 = &l_1366;
                    int32_t *l_1400[3][2][2] = {{{&g_342,&g_525[0]},{&g_525[0],&g_342}},{{&g_525[0],&g_525[0]},{&g_342,&g_525[0]}},{{&g_525[0],&g_342},{&g_525[0],&g_525[0]}}};
                    union U1 l_1430 = {3L};
                    int8_t l_1431[2];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_1431[i] = 9L;
                    --g_1401[1];
                    l_1409++;
                    ++g_1415;
                    if (p_54)
                        break;
                    (*l_1398) |= ((((++p_54) == p_57) && (!((safe_add_func_int64_t_s_s((((l_1425 , (p_53 < l_1338)) & ((safe_rshift_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(1L, p_53)) | (l_1404 = (((g_1412[1] , l_1425) , l_1430) , p_53))), l_1413)) < l_1338)) > l_1431[0]), g_588[2])) > 65534UL))) | l_1425.f0);
                }
                if (((safe_unary_minus_func_int32_t_s((safe_sub_func_uint8_t_u_u(p_57, l_1407[1])))) & (safe_mod_func_int32_t_s_s(((~((safe_unary_minus_func_int32_t_s((safe_add_func_int8_t_s_s((safe_mod_func_int64_t_s_s(((((safe_mod_func_int64_t_s_s(((*l_1351) = ((safe_lshift_func_uint16_t_u_u((18446744073709551615UL ^ (((safe_sub_func_uint32_t_u_u(l_1425.f0, p_57)) && (l_1338 >= ((safe_add_func_int64_t_s_s((g_1401[1] != l_1451), l_1452)) & (*g_362)))) >= (*p_56))), 8)) < 2L)), g_212)) , &g_249[0]) != (void*)0) | l_1383), p_54)), 0UL)))) , 0x51EFL)) && (*g_362)), l_1338))))
                { 
                    int32_t *l_1454 = &l_1392;
                    int32_t *l_1455 = &l_1405;
                    int32_t *l_1456 = &l_1407[1];
                    int32_t *l_1457 = &l_1414;
                    int32_t *l_1458 = &l_1413;
                    int32_t *l_1459 = &g_1174;
                    int32_t *l_1460 = &g_525[0];
                    int32_t *l_1461 = (void*)0;
                    int32_t *l_1462 = (void*)0;
                    int32_t l_1463 = 1L;
                    int32_t *l_1464 = &g_1174;
                    int32_t *l_1465 = &l_1338;
                    int32_t l_1466 = 0xA3BED9BCL;
                    int32_t *l_1467 = &l_1404;
                    int32_t *l_1468 = &g_530;
                    int32_t l_1469 = 0x2A620FF4L;
                    int32_t *l_1470 = &l_1463;
                    int32_t *l_1471 = &l_1408[2];
                    int32_t *l_1472 = &l_1413;
                    int32_t *l_1473[6][5];
                    int i, j;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_1473[i][j] = &l_1407[1];
                    }
                    (*g_446) = &p_53;
                    g_1478++;
                }
                else
                { 
                    int32_t *l_1481 = &g_525[1];
                    (*l_1481) |= p_57;
                    (*l_1481) ^= l_1482;
                    return p_57;
                }
                if ((l_1452 & p_57))
                { 
                    int32_t *l_1483 = &l_1407[0];
                    (*g_446) = l_1483;
                    return p_57;
                }
                else
                { 
                    int32_t *l_1485[2][2] = {{&l_1476,&l_1476},{&l_1476,&l_1476}};
                    int32_t **l_1484 = &l_1485[0][1];
                    int i, j;
                    (*l_1484) = ((*g_446) = &l_1407[0]);
                    return p_54;
                }
            }
        }
        else
        { 
            uint32_t *l_1487[2];
            int32_t *l_1488 = &l_1366;
            int i;
            for (i = 0; i < 2; i++)
                l_1487[i] = (void*)0;
            (*l_1488) = ((((**g_806) = l_1486) != (l_1487[1] = &p_54)) | (-1L));
            (*l_1488) = (safe_add_func_int8_t_s_s((-1L), (((g_1491 == &g_1492) >= ((0L & (safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(0xA7L, (*l_1488))), 0))) >= ((*g_362) = p_54))) < 0x2E618A4B392646C1LL)));
        }
        if ((safe_lshift_func_uint8_t_u_u(0x39L, ((((--p_57) == 0x651BL) >= (0x4218L | (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u(l_1409, (l_1366 = ((safe_rshift_func_int8_t_s_s(0x82L, 3)) && (0x8B5D2B35L && (((((*l_1513) ^= (safe_div_func_uint32_t_u_u((safe_div_func_uint32_t_u_u((((*l_1486) ^= p_54) & 0x221C0404L), l_1406)), (-1L)))) == p_54) == 0UL) <= p_53)))))), p_53)))) || l_1425.f0))))
        { 
            const int32_t l_1523 = 0x8A3799D1L;
            int32_t l_1553 = 0x954B4F0AL;
            int32_t l_1558 = 0x006BBF7EL;
            int32_t l_1559 = 0x72AF4618L;
            int32_t l_1560 = (-1L);
            int32_t l_1561 = 1L;
            int32_t l_1562 = 0xB5CAD7CAL;
            int32_t l_1563 = (-8L);
            int32_t l_1564 = 0x76E7019AL;
            int32_t l_1570 = 0x032A1BA1L;
            int32_t *l_1579 = &l_1407[0];
            if (l_1407[0])
            { 
                const int64_t l_1520[5][4][7] = {{{8L,0x8EF2D006658C9F37LL,0xB27902E9E1553515LL,(-1L),0xD111CA4044B86AF9LL,(-6L),(-1L)},{0xB66115A31601DCC0LL,(-8L),(-3L),(-8L),2L,0x0FE494350C55B888LL,0x8EF2D006658C9F37LL},{(-3L),(-1L),0x5C0652196D6A796DLL,1L,6L,(-8L),0x0FE494350C55B888LL},{8L,9L,(-1L),0xF1287051AD7116DFLL,9L,0x1C356D5F8165B485LL,1L}},{{9L,0x5C0652196D6A796DLL,(-1L),0xF1287051AD7116DFLL,(-4L),0x6F8D96B85B9E164ELL,0x89CF4E16A71018A7LL},{(-4L),8L,0xBB95A01178C91DB5LL,1L,(-1L),1L,0xBB95A01178C91DB5LL},{(-1L),(-1L),(-3L),(-8L),0xF1287051AD7116DFLL,0xC370532368BD3389LL,0x437B24A6593769EDLL},{1L,(-1L),0x30CF2E7BBB3496AFLL,(-1L),0xBB95A01178C91DB5LL,2L,0x89CF4E16A71018A7LL}},{{(-6L),(-1L),4L,0x499B848D701B1656LL,(-3L),1L,(-6L)},{0x30CF2E7BBB3496AFLL,1L,(-2L),(-6L),0x5C0652196D6A796DLL,0xF1287051AD7116DFLL,1L},{(-6L),0x1C356D5F8165B485LL,0L,(-6L),(-1L),0L,0x0FE494350C55B888LL},{0x5C503D7B856B0603LL,(-6L),(-10L),(-6L),(-1L),0L,1L}},{{(-3L),2L,0x356F882A5F85A5CELL,0xA2630ADA93C071DBLL,0xBB95A01178C91DB5LL,0xF1287051AD7116DFLL,0xBB95A01178C91DB5LL},{0x6F8D96B85B9E164ELL,0x6564CE27714D0D2ELL,0x6564CE27714D0D2ELL,0x6F8D96B85B9E164ELL,(-3L),1L,0xA2630ADA93C071DBLL},{1L,0xBB95A01178C91DB5LL,0xC370532368BD3389LL,(-1L),0x30CF2E7BBB3496AFLL,(-3L),0x499B848D701B1656LL},{0xA2630ADA93C071DBLL,2L,0xB09FB84EED0B095BLL,(-6L),(-4L),0x89CF4E16A71018A7LL,0xA2630ADA93C071DBLL}},{{(-1L),0x08D115EF8B70F1BDLL,0xB2AF93F47B4DB361LL,0x5C0652196D6A796DLL,1L,0x1C356D5F8165B485LL,0xBB95A01178C91DB5LL},{0L,0x0FE494350C55B888LL,(-1L),1L,0x30CF2E7BBB3496AFLL,0x5C503D7B856B0603LL,1L},{2L,1L,0x89CF4E16A71018A7LL,(-1L),(-8L),(-1L),0x0FE494350C55B888LL},{2L,0x499B848D701B1656LL,1L,0x0FE494350C55B888LL,0x6564CE27714D0D2ELL,(-10L),1L}}};
                uint16_t *****l_1521 = &g_1492;
                int32_t l_1522 = (-9L);
                int32_t l_1537 = 0x7105C153L;
                int8_t *** const l_1549 = &g_695;
                int32_t l_1565 = 0x831D8736L;
                int32_t l_1566 = (-9L);
                int32_t l_1567[3];
                int8_t l_1568 = 0xF0L;
                uint8_t l_1572[4];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_1567[i] = 0x971FAB71L;
                for (i = 0; i < 4; i++)
                    l_1572[i] = 0xCFL;
                for (g_44 = 0; (g_44 >= 33); g_44++)
                { 
                    int32_t *l_1524 = &g_525[0];
                    int32_t **l_1529[2];
                    uint8_t *l_1534 = &g_588[2];
                    int32_t *l_1536 = &l_1413;
                    int16_t *l_1552 = &g_104;
                    int32_t *l_1554 = (void*)0;
                    int32_t *l_1555[2];
                    int8_t l_1557 = 4L;
                    int8_t l_1569 = 0L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1529[i] = (void*)0;
                    for (i = 0; i < 2; i++)
                        l_1555[i] = &g_107;
                    (*l_1524) &= (safe_div_func_uint8_t_u_u((l_1522 = ((safe_mul_func_int16_t_s_s((&p_53 != (l_1520[2][0][3] , &p_53)), 0xE880L)) < ((*p_56) || (0L & ((((l_1521 = (void*)0) == &g_1492) >= l_1414) <= p_53))))), l_1523));
                    l_1537 |= ((*l_1536) |= ((*l_1524) &= ((safe_add_func_uint8_t_u_u((((0xA0L && (safe_mod_func_int16_t_s_s(((((g_1530 = l_1486) != (g_1531[2] = (void*)0)) > (((!(+(*p_56))) == p_53) != ((((l_1522 ^= ((*l_1534) = (**g_190))) , (((void*)0 != l_1535) > l_1523)) | (*g_362)) == (*g_362)))) , g_417), 0x2A17L))) , 4UL) < p_54), 0xDEL)) & p_57)));
                    l_1407[1] ^= (l_1553 |= ((safe_mul_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((*l_1536), (--(*l_1534)))) | (*l_1524)), ((*l_1552) = (+((p_53 & ((safe_rshift_func_uint8_t_u_s(((safe_div_func_uint16_t_u_u((((void*)0 != l_1549) >= (safe_rshift_func_uint16_t_u_u((0x1BL && p_54), 12))), p_54)) <= 0x5737L), (*l_1524))) , p_57)) || (*l_1536)))))) , 1L));
                    l_1572[0]++;
                }
            }
            else
            { 
                if (g_246.f2)
                    goto lbl_1575;
            }
            (*l_1579) &= ((l_1576[0]++) <= (-1L));
        }
        else
        { 
            union U3 **l_1584 = &g_223;
            union U3 ***l_1583[6] = {&l_1584,&l_1584,&l_1584,&l_1584,&l_1584,&l_1584};
            int32_t l_1585[7][1] = {{0x791ABC46L},{1L},{0x791ABC46L},{1L},{0x791ABC46L},{1L},{0x791ABC46L}};
            int i, j;
            if ((((**g_190) |= (!(3UL && (safe_mul_func_int8_t_s_s((((l_1407[0] = p_54) ^ (l_1583[5] != (void*)0)) | 0x68D2L), ((((void*)0 == (*g_921)) <= 18446744073709551612UL) || l_1585[6][0])))))) >= l_1585[5][0]))
            { 
                return p_57;
            }
            else
            { 
                uint32_t l_1588 = 0x9439B672L;
                g_1491 = &g_1492;
                for (l_1409 = 0; (l_1409 <= 0); l_1409 += 1)
                { 
                    int32_t l_1586 = 1L;
                    int32_t l_1587 = 0x6DF89B5CL;
                    int i;
                    --l_1588;
                    (**g_445) = &l_1407[1];
                    (*g_446) = &l_1587;
                    if (g_1412[(l_1409 + 1)])
                        break;
                    l_1406 |= p_54;
                }
            }
        }
        for (l_1414 = 0; (l_1414 != 8); l_1414 = safe_add_func_int8_t_s_s(l_1414, 4))
        { 
            int8_t l_1593 = 8L;
            int32_t *l_1594[1][3][1];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_1594[i][j][k] = &l_1413;
                }
            }
            if (l_1338)
                goto lbl_1575;
            p_53 = (((**g_190) = (0L != g_1365)) <= l_1593);
        }
    }
    return (**g_1627);
}



static int32_t  func_58(int8_t  p_59, int32_t * p_60, int32_t * p_61, union U1  p_62, int8_t * p_63)
{ 
    int8_t **l_76 = &g_20;
    const union U2 l_77 = {9L};
    int32_t *l_356 = &g_212;
    union U3 l_360 = {0x6FL};
    uint64_t *l_361[7][5][5] = {{{&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0},{(void*)0,&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0},{&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0},{&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0},{&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0}},{{&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0},{&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0},{(void*)0,&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0},{&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0},{&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0}},{{&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0},{&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0},{&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0},{(void*)0,&g_246.f0,(void*)0,&g_246.f0,&g_246.f0},{&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0}},{{&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0},{&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0},{&g_246.f0,&g_246.f0,(void*)0,&g_246.f0,&g_246.f0},{&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0},{&g_246.f0,(void*)0,&g_246.f0,(void*)0,(void*)0}},{{&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0},{&g_246.f0,&g_246.f0,&g_246.f0,(void*)0,(void*)0},{&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0},{(void*)0,&g_246.f0,(void*)0,(void*)0,(void*)0},{&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0}},{{&g_246.f0,&g_246.f0,(void*)0,(void*)0,&g_246.f0},{&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0},{&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0},{&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0},{&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0,(void*)0}},{{&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0},{&g_246.f0,&g_246.f0,&g_246.f0,(void*)0,&g_246.f0},{&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0},{(void*)0,(void*)0,&g_246.f0,&g_246.f0,&g_246.f0},{&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0,&g_246.f0}}};
    const uint8_t l_363 = 4UL;
    int32_t l_394[5];
    int64_t l_415 = 0xD89EDB8EE43C9AAFLL;
    union U3 *l_478 = (void*)0;
    int64_t l_502 = 0x273A35BFECE152BDLL;
    int32_t ** const *l_531 = &g_446;
    union U1 **l_539 = (void*)0;
    int64_t l_568 = 6L;
    int32_t l_586 = 0x6EBC35DEL;
    int64_t l_606 = (-3L);
    int32_t l_611 = 0x4FEFC980L;
    struct S0 *l_632 = &g_246;
    uint32_t ** const l_670[3][7][2] = {{{(void*)0,&g_293[1][0][0]},{&g_293[1][0][0],&g_293[1][0][0]},{&g_293[1][0][0],&g_293[1][0][0]},{&g_293[1][0][0],&g_293[1][0][0]},{&g_293[1][0][0],&g_293[1][0][0]},{&g_293[1][0][0],&g_293[1][0][0]},{&g_293[1][0][0],&g_293[1][0][0]}},{{(void*)0,&g_293[1][0][0]},{(void*)0,&g_293[1][0][0]},{&g_293[1][0][0],(void*)0},{&g_293[1][0][0],(void*)0},{&g_293[1][0][0],&g_293[1][0][0]},{&g_293[1][0][0],&g_293[1][0][0]},{&g_293[1][0][0],&g_293[1][0][0]}},{{&g_293[1][0][0],&g_293[1][0][0]},{&g_293[1][0][0],&g_293[1][0][0]},{&g_293[1][0][0],&g_293[1][0][0]},{&g_293[1][0][0],(void*)0},{&g_293[1][0][0],(void*)0},{&g_293[1][0][0],&g_293[1][0][0]},{(void*)0,&g_293[1][0][0]}}};
    union U2 *l_740[1][3];
    union U2 **l_739 = &l_740[0][0];
    int64_t l_791 = 0xB8DF5C895A2A4A92LL;
    int64_t l_798 = 0x766E173430A953CCLL;
    int64_t l_852 = 0L;
    int64_t l_900 = (-2L);
    const uint8_t l_901 = 9UL;
    uint32_t l_1009 = 0x291B8E3FL;
    int32_t **l_1024 = &g_447[0];
    int32_t ***l_1023[2];
    int32_t **l_1025 = (void*)0;
    int32_t l_1030 = 0L;
    int16_t *l_1048 = &g_1029[0][4];
    struct S0 l_1087 = {4UL,0x4C21L,0x9DCDL};
    int32_t *l_1183 = &g_102;
    int8_t l_1190 = 0xF2L;
    int8_t l_1191 = 0x6AL;
    int16_t l_1194 = (-1L);
    int32_t l_1198[3];
    uint32_t l_1203 = 0UL;
    uint8_t l_1238 = 0UL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_394[i] = 0L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_740[i][j] = &g_741;
    }
    for (i = 0; i < 2; i++)
        l_1023[i] = &l_1024;
    for (i = 0; i < 3; i++)
        l_1198[i] = 0x47A26AFDL;
    if ((safe_mul_func_uint8_t_u_u(((((((p_59 , (safe_add_func_uint32_t_u_u(((p_60 = func_72(l_76, l_77, (*l_76))) != l_356), (safe_sub_func_uint8_t_u_u((((((((+(*p_63)) | 65535UL) || 0x9CL) , l_360) , (*l_356)) , l_361[2][0][4]) == g_362), (*p_63)))))) > (-6L)) , 0UL) && l_363) ^ 0UL) || g_276.f2), 0L)))
    { 
        int32_t l_364 = 0x188C7CECL;
        uint16_t *l_370 = &g_322;
        struct S0 *l_381 = &g_246;
        int32_t l_392 = 0x658CCEF0L;
        int32_t l_393 = 1L;
        int32_t l_395 = (-3L);
        int32_t l_396 = (-1L);
        int32_t l_398 = 0x0FB061BDL;
        int32_t l_401 = 5L;
        int32_t l_404 = 0xBD277A11L;
        int32_t l_405 = 0x7CBFD3EBL;
        int32_t l_406 = 0L;
        int32_t l_409[3];
        uint8_t * const l_458 = &g_249[0].f0;
        union U3 l_468 = {0UL};
        int8_t l_476 = 0xBEL;
        int32_t * const l_529 = &g_530;
        int32_t * const * const l_528 = &l_529;
        int32_t * const * const *l_527 = &l_528;
        const union U3 **l_548 = (void*)0;
        int16_t l_607 = 1L;
        int64_t l_612 = 0x9B5D64EEDD81E1CFLL;
        uint32_t l_629 = 18446744073709551608UL;
        int64_t l_638 = 0xB6F4670951DEAE01LL;
        uint16_t l_639 = 65527UL;
        int i;
        for (i = 0; i < 3; i++)
            l_409[i] = 0x8C4076ABL;
    }
    else
    { 
        uint16_t l_688 = 0x7F71L;
        struct S0 l_696 = {0x8649E4D6063C515ALL,0xCE6DL,0xCBF3L};
        struct S0 *l_697 = (void*)0;
        int32_t l_719 = 0L;
        const union U2 l_748 = {0x28E58AF7L};
        int32_t l_763 = 0x6D91CE56L;
        uint8_t *l_789 = &g_741.f4;
        union U1 l_790 = {1L};
        union U3 l_792[5][5] = {{{0xDEL},{1UL},{1UL},{0xDEL},{0xDEL}},{{249UL},{250UL},{249UL},{250UL},{249UL}},{{0xDEL},{0xDEL},{1UL},{1UL},{0xDEL}},{{0x1BL},{250UL},{0x1BL},{250UL},{0x1BL}},{{0xDEL},{1UL},{1UL},{0xDEL},{0xDEL}}};
        union U3 **l_793 = &l_478;
        int64_t *l_799[1];
        const uint32_t l_803 = 0x48EADB52L;
        int16_t *l_804 = (void*)0;
        int16_t *l_805[4][4] = {{&g_246.f1,&g_104,&g_246.f1,&g_104},{&g_246.f1,&g_104,&g_246.f1,&g_104},{&g_246.f1,&g_104,&g_246.f1,&g_104},{&g_246.f1,&g_104,&g_246.f1,&g_104}};
        int32_t *l_809 = &g_142[4];
        union U1 *l_846 = &g_276;
        union U1 **l_845 = &l_846;
        uint64_t **l_851 = &l_361[0][4][1];
        int32_t l_878 = 0xB02ADE55L;
        int32_t l_879[3][1];
        int16_t l_880[3];
        int32_t l_920 = 2L;
        int16_t ** const l_979[5][1] = {{&l_805[2][2]},{&l_804},{&l_805[2][2]},{&l_804},{&l_805[2][2]}};
        int16_t ** const *l_978 = &l_979[2][0];
        uint32_t l_1015 = 0x0D0DF30AL;
        const uint32_t l_1016[7] = {0x67B75805L,0x67B75805L,0x67B75805L,0x67B75805L,0x67B75805L,0x67B75805L,0x67B75805L};
        const union U2 *l_1020 = &g_294;
        const union U2 **l_1019 = &l_1020;
        int i, j;
        for (i = 0; i < 1; i++)
            l_799[i] = (void*)0;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_879[i][j] = 0x960E0236L;
        }
        for (i = 0; i < 3; i++)
            l_880[i] = 0x5619L;
        if (((***l_531) = (l_670[2][2][1] == (void*)0)))
        { 
            int64_t l_683 = 0xA94038CE5F7125BBLL;
            int8_t *l_692 = &g_43[1];
            int16_t l_693 = 1L;
            const struct S0 *l_698 = &l_696;
            const union U2 l_704 = {0L};
            int32_t l_727 = (-6L);
            int32_t l_767 = 0x6A16F494L;
            for (l_611 = 3; (l_611 >= 0); l_611 -= 1)
            { 
                struct S0 l_671 = {1UL,0L,0x6AD2L};
                for (g_276.f2 = 0; (g_276.f2 <= 0); g_276.f2 += 1)
                { 
                    int16_t *l_680[1][4][5] = {{{&g_246.f1,&l_671.f1,(void*)0,&l_671.f1,&g_246.f1},{&g_104,&g_246.f1,&g_246.f1,(void*)0,&g_246.f1},{&g_246.f1,&g_246.f1,&g_246.f1,&g_246.f1,(void*)0},{&l_671.f1,&g_246.f1,&g_246.f1,&g_104,&g_104}}};
                    int64_t *l_681 = (void*)0;
                    int64_t *l_682 = &l_502;
                    int32_t *l_684 = &g_212;
                    int32_t *l_685 = &g_525[0];
                    int32_t *l_686 = (void*)0;
                    int32_t *l_687 = (void*)0;
                    int16_t **l_691 = &l_680[0][0][0];
                    int i, j, k;
                    (*l_632) = l_671;
                    l_683 = (((*l_682) = ((!l_394[g_276.f2]) && (0xF434L | (g_249[0].f1 = ((g_246 , l_394[l_611]) | (+((safe_div_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((l_394[g_276.f2] | (l_394[l_611] & (safe_add_func_int64_t_s_s(0L, g_43[g_276.f2])))), (*l_356))), p_62.f2)) | p_62.f2))))))) >= p_62.f2);
                    --l_688;
                    (*l_684) |= (&g_104 != ((*l_691) = &g_104));
                }
            }
            (*l_632) = ((((*l_692) = 0x15L) ^ (5UL > ((l_693 && 1L) ^ (((g_694 == (void*)0) <= (4294967295UL <= (-2L))) & 1UL)))) , l_696);
        }
        else
        { 
            return (**g_446);
        }
        (*l_793) = func_81(p_62, (*g_695), l_76, ((((*p_60) ^= (safe_div_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u(((*l_789) |= ((**g_190) = 0x08L)), (((((l_790 , (p_62.f2 == (l_763 = (((void*)0 == &g_275[2]) & (*l_356))))) | p_59) != 0L) < p_59) > l_791))) | 0x8AL) < (*l_356)), 1UL)) & (*l_356)), l_748.f1))) , p_59) , l_792[1][0]), l_789);
    }
    (*l_356) = ((~g_294.f4) , (+p_62.f2));
    if ((0xC920F572L & (((*g_445) != (l_1025 = &p_60)) & (safe_mul_func_int8_t_s_s((g_417 > (((*l_356) <= (!(p_62.f0 , (0x6A57L & 0x5216L)))) <= 0x6363L)), g_1029[1][4])))))
    { 
        uint16_t l_1047 = 65535UL;
        uint64_t l_1050[6] = {18446744073709551614UL,2UL,18446744073709551614UL,18446744073709551614UL,2UL,18446744073709551614UL};
        int32_t l_1071[3][7][6] = {{{(-5L),0x38CC94F3L,0xD7FDEB86L,0xD7FDEB86L,0x38CC94F3L,(-5L)},{0x4CDC856EL,0x9AF59831L,0xD7FDEB86L,(-5L),0x0C88BD3AL,0x4CDC856EL},{6L,0x9AF59831L,(-5L),6L,0x38CC94F3L,6L},{6L,0x38CC94F3L,6L,(-5L),0x9AF59831L,6L},{0x4CDC856EL,0x0C88BD3AL,(-5L),0xD7FDEB86L,0x9AF59831L,0x4CDC856EL},{(-5L),0x38CC94F3L,0xD7FDEB86L,0xD7FDEB86L,0x38CC94F3L,(-5L)},{0x4CDC856EL,0x9AF59831L,0xD7FDEB86L,(-5L),0x0C88BD3AL,0x4CDC856EL}},{{6L,0x9AF59831L,(-5L),6L,0x38CC94F3L,6L},{6L,0x38CC94F3L,6L,(-5L),0x9AF59831L,6L},{0x4CDC856EL,0x0C88BD3AL,(-5L),0xD7FDEB86L,0x9AF59831L,0x4CDC856EL},{(-5L),0x38CC94F3L,0xD7FDEB86L,0xD7FDEB86L,0x38CC94F3L,(-5L)},{0x4CDC856EL,0x9AF59831L,0xD7FDEB86L,(-5L),0x0C88BD3AL,0x4CDC856EL},{6L,0x9AF59831L,(-5L),6L,0x38CC94F3L,6L},{6L,0x38CC94F3L,6L,(-5L),0x9AF59831L,6L}},{{0x4CDC856EL,0x0C88BD3AL,(-5L),0xD7FDEB86L,0x9AF59831L,0x4CDC856EL},{(-5L),0x38CC94F3L,0xD7FDEB86L,0xD7FDEB86L,0x38CC94F3L,(-5L)},{0x4CDC856EL,0x9AF59831L,0xD7FDEB86L,(-5L),0x0C88BD3AL,0x4CDC856EL},{6L,0x9AF59831L,(-5L),6L,0x38CC94F3L,6L},{6L,0x38CC94F3L,6L,(-5L),0x9AF59831L,6L},{0x4CDC856EL,0x0C88BD3AL,(-5L),0xD7FDEB86L,0x9AF59831L,0x4CDC856EL},{(-5L),0x38CC94F3L,0xD7FDEB86L,0xD7FDEB86L,0x38CC94F3L,(-5L)}}};
        int32_t l_1123[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
        struct S0 *l_1139 = &g_1084;
        uint32_t **l_1143[6];
        uint64_t l_1158 = 18446744073709551615UL;
        union U2 l_1180 = {0x27701A94L};
        int8_t *l_1181 = &g_43[1];
        int32_t l_1185 = (-8L);
        int16_t l_1187 = 0x271FL;
        int32_t l_1192 = (-2L);
        int32_t ***l_1223[7][5] = {{&l_1025,&l_1024,&g_446,&g_446,&l_1024},{(void*)0,&l_1024,&l_1025,&l_1024,(void*)0},{&l_1024,&g_446,&g_446,&l_1024,&l_1025},{(void*)0,&l_1024,(void*)0,&l_1024,(void*)0},{&l_1024,&l_1024,&l_1025,&g_446,&l_1025},{(void*)0,&l_1024,&l_1025,&l_1024,(void*)0},{&l_1025,&g_446,&l_1025,&l_1024,&l_1024}};
        union U3 l_1225 = {0x03L};
        const uint64_t *l_1240 = &g_1084.f0;
        const uint64_t **l_1239 = &l_1240;
        uint16_t *l_1242 = &g_1195;
        uint16_t **l_1241 = &l_1242;
        const int32_t l_1263 = 0x23BA952AL;
        uint8_t l_1267[7];
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_1143[i] = &g_293[1][0][0];
        for (i = 0; i < 7; i++)
            l_1267[i] = 0UL;
        if (l_1030)
        { 
            union U3 l_1049 = {0xD0L};
            int32_t l_1072 = (-4L);
            int32_t l_1073 = 0x460ABFFEL;
            int32_t l_1074 = 0x349AF5DCL;
            uint32_t l_1075 = 0xFD420E5AL;
            int8_t *l_1078 = &g_125;
            int32_t *** const l_1093[5][3][3] = {{{(void*)0,&l_1024,(void*)0},{&l_1025,&l_1024,&l_1024},{&l_1024,&l_1024,&l_1024}},{{&l_1025,&l_1025,&l_1024},{(void*)0,&l_1024,(void*)0},{&l_1025,&l_1024,&l_1024}},{{&l_1024,&l_1024,&l_1024},{&l_1025,&l_1025,&l_1024},{(void*)0,&l_1024,(void*)0}},{{&l_1025,&l_1024,&l_1024},{&l_1024,&l_1024,&l_1024},{&l_1025,&l_1025,&l_1024}},{{(void*)0,&l_1024,(void*)0},{&l_1025,&l_1024,&l_1024},{&l_1024,&l_1024,&l_1024}}};
            int i, j, k;
            (*l_1024) = (*g_446);
            for (g_608 = 0; (g_608 > 39); g_608++)
            { 
                const union U2 l_1033 = {1L};
                uint16_t *l_1034[1][7] = {{&g_741.f3.f2,&g_741.f3.f2,&g_322,&g_741.f3.f2,&g_741.f3.f2,&g_322,&g_741.f3.f2}};
                int32_t l_1069 = 0xB6E6DF5BL;
                int32_t l_1070 = 0x717CAA74L;
                int i, j;
                (**g_445) = func_72(((*g_694) = (*g_694)), l_1033, &p_59);
            }
            for (l_568 = (-24); (l_568 < 18); l_568++)
            { 
                union U3 **l_1081 = &g_223;
                const union U1 l_1100 = {0xA613B95CL};
                uint32_t l_1101 = 2UL;
                int32_t l_1102 = 4L;
                int32_t l_1103[5][4][5] = {{{(-1L),0x20B8FF65L,7L,9L,0L},{8L,(-1L),7L,0L,0L},{7L,7L,7L,(-2L),0x759E45F7L},{4L,0x61B4C463L,7L,0x759E45F7L,9L}},{{0x78E367BFL,0x0B60DFAFL,7L,0L,(-2L)},{(-1L),0x20B8FF65L,7L,9L,0L},{8L,(-1L),7L,0L,0L},{7L,7L,7L,(-2L),0x759E45F7L}},{{4L,0x61B4C463L,7L,0x759E45F7L,9L},{0x78E367BFL,0x0B60DFAFL,7L,0L,(-2L)},{(-1L),0x20B8FF65L,7L,9L,0L},{8L,(-1L),7L,0L,0L}},{{7L,7L,7L,(-2L),0x759E45F7L},{4L,0x61B4C463L,7L,0x759E45F7L,9L},{0x78E367BFL,0x0B60DFAFL,7L,0L,(-2L)},{(-1L),0x20B8FF65L,7L,9L,0L}},{{8L,(-1L),7L,0L,0L},{7L,7L,7L,(-2L),0x759E45F7L},{4L,0x61B4C463L,7L,0x759E45F7L,9L},{0x78E367BFL,0x0B60DFAFL,7L,0L,(-2L)}}};
                const union U2 l_1124 = {0L};
                int8_t *l_1125 = &g_125;
                int i, j, k;
                for (g_417 = 0; g_417 < 2; g_417 += 1)
                {
                    for (l_1073 = 0; l_1073 < 3; l_1073 += 1)
                    {
                        for (p_59 = 0; p_59 < 1; p_59 += 1)
                        {
                            g_293[g_417][l_1073][p_59] = &g_233;
                        }
                    }
                }
                (*l_1081) = &l_360;
                if ((((p_61 == (**g_806)) & (l_1071[1][4][5] < (((g_1082 = &g_913) == (void*)0) | (safe_sub_func_uint64_t_u_u(l_1072, 0x27467D7439C07DD6LL))))) || (*p_63)))
                { 
                    (*l_632) = l_1087;
                }
                else
                { 
                    int16_t **l_1088 = &l_1048;
                    int16_t ***l_1089 = &l_1088;
                    int32_t l_1092 = (-1L);
                    int32_t ****l_1094 = &l_1023[1];
                    int32_t l_1104 = 0x30900976L;
                    int32_t l_1105 = 0x27409B1DL;
                    int32_t l_1106 = 9L;
                    union U3 ***l_1118[6][7][6] = {{{&l_1081,(void*)0,&l_1081,&l_1081,&l_1081,&l_1081},{&l_1081,&l_1081,&l_1081,&l_1081,&l_1081,&l_1081},{&l_1081,&l_1081,&l_1081,&l_1081,&l_1081,(void*)0},{&l_1081,&l_1081,(void*)0,&l_1081,&l_1081,&l_1081},{&l_1081,&l_1081,&l_1081,&l_1081,&l_1081,(void*)0},{&l_1081,&l_1081,&l_1081,&l_1081,&l_1081,&l_1081},{&l_1081,&l_1081,(void*)0,&l_1081,&l_1081,&l_1081}},{{&l_1081,&l_1081,&l_1081,&l_1081,(void*)0,(void*)0},{&l_1081,&l_1081,&l_1081,&l_1081,&l_1081,&l_1081},{&l_1081,&l_1081,&l_1081,&l_1081,&l_1081,&l_1081},{&l_1081,&l_1081,&l_1081,&l_1081,&l_1081,&l_1081},{&l_1081,&l_1081,&l_1081,&l_1081,&l_1081,&l_1081},{&l_1081,&l_1081,(void*)0,&l_1081,&l_1081,&l_1081},{&l_1081,&l_1081,&l_1081,&l_1081,(void*)0,&l_1081}},{{&l_1081,&l_1081,&l_1081,&l_1081,&l_1081,&l_1081},{(void*)0,&l_1081,(void*)0,&l_1081,&l_1081,&l_1081},{&l_1081,&l_1081,(void*)0,&l_1081,&l_1081,&l_1081},{(void*)0,&l_1081,&l_1081,&l_1081,&l_1081,(void*)0},{&l_1081,&l_1081,&l_1081,&l_1081,&l_1081,&l_1081},{&l_1081,&l_1081,&l_1081,&l_1081,&l_1081,&l_1081},{&l_1081,&l_1081,&l_1081,&l_1081,&l_1081,&l_1081}},{{&l_1081,&l_1081,&l_1081,&l_1081,&l_1081,&l_1081},{&l_1081,&l_1081,&l_1081,&l_1081,(void*)0,&l_1081},{&l_1081,(void*)0,&l_1081,(void*)0,&l_1081,(void*)0},{&l_1081,&l_1081,&l_1081,(void*)0,&l_1081,&l_1081},{&l_1081,&l_1081,(void*)0,&l_1081,&l_1081,&l_1081},{&l_1081,&l_1081,(void*)0,(void*)0,&l_1081,&l_1081},{(void*)0,&l_1081,&l_1081,&l_1081,&l_1081,&l_1081}},{{&l_1081,(void*)0,&l_1081,&l_1081,(void*)0,&l_1081},{&l_1081,&l_1081,(void*)0,&l_1081,&l_1081,&l_1081},{&l_1081,&l_1081,&l_1081,&l_1081,&l_1081,&l_1081},{&l_1081,&l_1081,&l_1081,&l_1081,&l_1081,&l_1081},{&l_1081,&l_1081,&l_1081,&l_1081,&l_1081,(void*)0},{&l_1081,&l_1081,(void*)0,&l_1081,&l_1081,&l_1081},{(void*)0,&l_1081,&l_1081,(void*)0,&l_1081,&l_1081}},{{&l_1081,&l_1081,&l_1081,&l_1081,&l_1081,&l_1081},{&l_1081,&l_1081,&l_1081,(void*)0,&l_1081,&l_1081},{&l_1081,&l_1081,(void*)0,(void*)0,(void*)0,(void*)0},{&l_1081,&l_1081,&l_1081,&l_1081,&l_1081,&l_1081},{&l_1081,&l_1081,&l_1081,&l_1081,&l_1081,&l_1081},{&l_1081,&l_1081,&l_1081,&l_1081,(void*)0,&l_1081},{&l_1081,&l_1081,(void*)0,&l_1081,&l_1081,(void*)0}}};
                    int64_t *l_1121 = (void*)0;
                    int64_t *l_1122 = &g_140;
                    int i, j, k;
                    (*l_1089) = l_1088;
                    (**l_1024) = ((void*)0 != l_1048);
                    l_1102 |= ((*l_356) ^= ((safe_lshift_func_uint16_t_u_s(((p_62.f1.f0 = ((*g_362) = (l_1050[2] & (l_1092 < (l_1093[2][1][1] == ((*l_1094) = &g_446)))))) & p_59), 3)) ^ ((((((safe_sub_func_uint32_t_u_u((**l_1025), (safe_add_func_int32_t_s_s(l_1071[2][3][1], p_59)))) < g_1099) , l_1100) , l_1100.f2) & l_1101) | p_59)));
                    g_1107++;
                    l_1071[2][3][1] = ((*l_632) , (safe_div_func_uint16_t_u_u(8UL, (safe_sub_func_uint32_t_u_u(((2UL != (safe_sub_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((l_1103[3][3][3] &= (((*l_1122) = (((((((l_1081 = &g_223) != (void*)0) , (safe_mod_func_uint8_t_u_u(((**g_190) = (((l_1100 , ((**l_1025) &= 1UL)) & (-1L)) == l_1047)), p_59))) > (*l_356)) & 0x29C11FE5L) , (void*)0) == (void*)0)) < p_62.f0)), g_530)), l_1071[0][1][4]))) , l_1123[1]), p_62.f2)))));
                }
                (**l_1024) = (*p_60);
                (*l_1025) = func_72(l_76, l_1124, l_1125);
            }
        }
        else
        { 
            uint8_t l_1134 = 248UL;
            int64_t *l_1138 = &l_606;
            int16_t l_1149[7][3] = {{(-7L),0L,(-7L)},{0x2A1AL,0x094FL,0x2A1AL},{(-7L),0L,(-7L)},{0x2A1AL,0x094FL,0x2A1AL},{(-7L),0L,(-7L)},{0x2A1AL,0x094FL,0x2A1AL},{(-7L),0L,(-7L)}};
            uint16_t l_1159[5];
            struct S0 *l_1160[3];
            int32_t l_1168[3][2][1] = {{{4L},{1L}},{{1L},{4L}},{{1L},{1L}}};
            int32_t l_1184 = 0xE755E3E9L;
            int8_t l_1188 = 7L;
            int8_t l_1189 = 8L;
            int8_t l_1193 = (-1L);
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_1159[i] = 0x0923L;
            for (i = 0; i < 3; i++)
                l_1160[i] = &l_1087;
            if ((((5L < (((((((safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s((((void*)0 != (*g_742)) , ((((((**l_1024) = (safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_1134, (g_246.f0 , (safe_unary_minus_func_int32_t_s((safe_div_func_int64_t_s_s(((*l_1138) = 0xEF0AD67D9BD5AFF5LL), g_342))))))), p_62.f0))) , (-3L)) , (void*)0) != l_1139) >= l_1134)), g_504)), p_62.f2)) ^ 0UL) , (void*)0) != (**g_806)) >= p_59) == p_59) || p_59)) & 65528UL) > 0L))
            { 
                struct S0 l_1140 = {0xB0905E60F7A4151BLL,1L,0x034FL};
                uint32_t l_1167 = 1UL;
                (*l_356) = (l_1140 , (safe_add_func_int8_t_s_s(((((*l_1139) , l_1143[4]) != (((safe_mod_func_uint16_t_u_u(((~(((safe_rshift_func_uint8_t_u_s((((((*l_1138) = l_1149[3][1]) , (void*)0) != (void*)0) > (safe_lshift_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((safe_lshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u(((l_1158 = 0x2BL) && (*l_356)), l_1159[4])), 0)), p_62.f0)), 10))), l_1047)) < g_608) < 0UL)) == (*g_362)), (-5L))) != 1L) , l_1143[3])) | 8L), (*p_63))));
                if (((*g_913) , ((*l_356) = ((((l_1160[2] != ((0x40A5612BA09BAECCLL && ((safe_add_func_int8_t_s_s(l_1140.f2, 1UL)) , (((*g_362) ^= 0x7E19104A442A7132LL) <= (safe_add_func_uint16_t_u_u((safe_div_func_uint64_t_u_u(p_62.f0, l_1140.f0)), 0UL))))) , (void*)0)) != l_1167) & (-1L)) , (***l_531)))))
                { 
                    (**l_1025) &= (***g_445);
                }
                else
                { 
                    uint32_t l_1169[3][7] = {{0x9D6F0F06L,4294967295UL,4294967286UL,6UL,6UL,4294967286UL,4294967295UL},{0x9D6F0F06L,4294967295UL,4294967286UL,6UL,6UL,4294967286UL,4294967295UL},{0x9D6F0F06L,4294967295UL,4294967286UL,6UL,6UL,4294967286UL,4294967295UL}};
                    int i, j;
                    ++l_1169[1][0];
                    (**g_445) = p_61;
                    return (***g_445);
                }
                (**g_1082) = l_1140;
                return (*p_61);
            }
            else
            { 
                int64_t **l_1177 = &l_1138;
                int8_t **l_1182 = &g_20;
                (**g_445) = p_60;
                if (g_212)
                    goto lbl_1178;
lbl_1178:
                (***l_531) = (safe_sub_func_uint64_t_u_u((g_1174 > ((&p_62 == ((((*l_356) &= ((p_62.f0 < ((safe_add_func_uint16_t_u_u((((&g_140 == ((*l_1177) = &g_140)) ^ 0x1F678F749D8B9711LL) == 0xDDC05F9B8FAF7E27LL), p_62.f2)) & p_62.f2)) != g_342)) < 0xDF89D19BL) , &p_62)) == p_62.f2)), p_59));
                (*p_60) |= ((~((l_1180 , p_61) != (l_1183 = func_72(l_1182, l_1180, (*l_1182))))) <= p_62.f2);
            }
            --g_1195;
            (***g_445) = (*p_60);
        }
        for (g_1084.f1 = 0; (g_1084.f1 >= 0); g_1084.f1 -= 1)
        { 
            int16_t l_1199 = 0x3F92L;
            int32_t l_1200 = (-3L);
            int32_t l_1201 = 1L;
            int32_t l_1202 = 0xBECA185EL;
            l_1203--;
            for (g_504 = 0; (g_504 >= 0); g_504 -= 1)
            { 
                for (g_246.f0 = 0; (g_246.f0 <= 0); g_246.f0 += 1)
                { 
                    uint16_t l_1206 = 0UL;
                    l_1206--;
                }
                (*p_60) |= (l_1071[2][3][1] , (*p_61));
            }
        }
        for (l_791 = 0; l_791 < 1; l_791 += 1)
        {
            g_447[l_791] = &l_394[3];
        }
        for (g_504 = (-12); (g_504 <= (-19)); --g_504)
        { 
            int8_t * const *l_1217 = &g_20;
            int32_t ****l_1224 = &l_1023[1];
            int8_t *l_1226 = &g_125;
            union U3 **l_1227 = &l_478;
            uint16_t ***l_1243 = (void*)0;
            uint16_t ***l_1244 = &l_1241;
            union U1 * const ** const l_1257 = (void*)0;
            int32_t l_1266[3][5][5];
            union U2 *l_1279 = &g_741;
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 5; j++)
                {
                    for (k = 0; k < 5; k++)
                        l_1266[i][j][k] = 0x48FA5720L;
                }
            }
            for (g_608 = 0; (g_608 == 21); g_608 = safe_add_func_int8_t_s_s(g_608, 4))
            { 
                struct S0 l_1213 = {1UL,0xE5EBL,0x5B1AL};
                int32_t *l_1216 = &g_142[3];
                (*l_1025) = (void*)0;
                (*l_1139) = l_1213;
                for (p_59 = 26; (p_59 == 23); p_59 = safe_sub_func_uint8_t_u_u(p_59, 7))
                { 
                    if (l_1213.f2)
                        break;
                    p_60 = l_1216;
                }
            }
            (*l_1227) = func_81((**g_922), l_1181, l_1217, ((safe_add_func_int64_t_s_s((((~0x6D4A1A7FL) , ((safe_mul_func_int16_t_s_s((((*l_1224) = l_1223[1][0]) != (void*)0), 65534UL)) | 0xDB17L)) && 0x00L), p_59)) , l_1225), l_1226);
            (*l_356) |= (safe_div_func_int8_t_s_s((((l_1238 = (safe_add_func_uint64_t_u_u(((*g_190) == ((**l_739) , (*g_190))), ((((safe_sub_func_uint64_t_u_u(((*p_61) != p_59), (safe_mul_func_int16_t_s_s(((((safe_div_func_uint8_t_u_u(p_59, ((p_62.f0 < p_62.f2) & g_160))) , &p_59) == (**g_694)) && 0UL), p_62.f2)))) ^ (*p_63)) ^ g_741.f4) , g_1186[0])))) | p_62.f2) > (*p_63)), p_62.f2));
        }
    }
    else
    { 
        for (l_586 = 17; (l_586 < 2); l_586 = safe_sub_func_int16_t_s_s(l_586, 9))
        { 
            (*g_913) = (*l_632);
            if ((*p_60))
                break;
        }
    }
    return (*l_356);
}



static int32_t * func_72(int8_t ** p_73, const union U2  p_74, int8_t * p_75)
{ 
    int16_t l_78 = 0xB290L;
    int8_t * const *l_88 = &g_20;
    int32_t l_350 = (-8L);
    int64_t *l_351 = &g_193;
    l_78 = g_43[0];
    for (g_44 = 20; (g_44 != 28); g_44++)
    { 
        union U1 l_87 = {-1L};
        union U3 l_89 = {0UL};
        union U3 **l_349 = &g_223;
        (*l_349) = func_81(l_87, (*p_73), l_88, l_89, &g_43[1]);
    }
    if ((0x3AEDEE25096C6FE6LL ^ (((((((g_294.f1 && (((0x1522D0C0L >= ((((*l_351) = (l_350 = g_13)) , p_74.f1) , (((-7L) || (safe_lshift_func_int8_t_s_u((g_294 , l_78), 5))) || 0xD646L))) , l_350) > 0xE1L)) , p_74.f0) & l_78) > g_125) , p_74.f1) <= g_246.f1) & g_44)))
    { 
        int32_t *l_354[3];
        int32_t **l_355 = &l_354[1];
        int i;
        for (i = 0; i < 3; i++)
            l_354[i] = &g_142[4];
        l_350 = (p_74.f4 == g_44);
        (*l_355) = l_354[1];
    }
    else
    { 
        return &g_342;
    }
    return &g_342;
}



static union U3 * func_81(union U1  p_82, int8_t * p_83, int8_t * const * p_84, union U3  p_85, int8_t * p_86)
{ 
    uint16_t *l_116[2][1][6] = {{{&g_111,&g_111,&g_111,&g_111,&g_111,&g_111}},{{&g_111,&g_111,&g_111,&g_111,&g_111,&g_111}}};
    int32_t l_121 = (-1L);
    int32_t l_158 = 0x3DD1F410L;
    uint8_t l_175[7];
    int32_t l_197[3][5][7] = {{{(-1L),1L,0x1819652DL,0x30CC3C05L,0x3C4A37C7L,0L,1L},{(-1L),0L,1L,1L,0x9FCEEBA0L,4L,0L},{0x3C4A37C7L,0x7A099D88L,0x3B505883L,0L,0x3DFAE1E7L,(-1L),(-1L)},{(-1L),0L,0x3B505883L,0x47F47880L,0L,1L,0x2AD8C3D5L},{9L,0xCDEF65FCL,1L,0xC190A5E1L,0xC190A5E1L,1L,0xCDEF65FCL}},{{(-5L),0x47F47880L,0x1819652DL,(-1L),0x3AD305CAL,0x30CC3C05L,1L},{0x3DFAE1E7L,1L,1L,0x3B505883L,(-2L),1L,0x9564F80CL},{(-1L),(-2L),(-10L),(-1L),0L,(-9L),(-4L)},{1L,0x9564F80CL,0x3DFAE1E7L,0xC190A5E1L,(-1L),(-1L),0L},{0x3B505883L,1L,(-1L),0x47F47880L,1L,0L,0x3B505883L}},{{0L,9L,0L,0L,1L,0x72B9DD18L,(-2L)},{(-2L),0L,1L,1L,(-1L),(-1L),1L},{0L,0L,0L,0x30CC3C05L,0L,0x2AD8C3D5L,0L},{1L,0L,(-9L),0xCDEF65FCL,(-2L),0x5122344DL,(-2L)},{(-2L),0x3AD305CAL,0x3DFAE1E7L,0x3C4A37C7L,0x3AD305CAL,0x2AD8C3D5L,(-1L)}}};
    uint16_t l_229 = 65535UL;
    struct S0 *l_245 = &g_246;
    uint32_t *l_290 = (void*)0;
    int32_t l_343 = 0xCB180C52L;
    uint32_t l_345[2];
    union U3 *l_348 = (void*)0;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_175[i] = 255UL;
    for (i = 0; i < 2; i++)
        l_345[i] = 1UL;
lbl_324:
    for (p_82.f0 = 0; (p_82.f0 == 15); p_82.f0++)
    { 
        int8_t l_146 = 6L;
        int32_t l_156 = 0x15C821C9L;
        int8_t l_157 = 0x79L;
        int32_t l_159 = 0x8DA45BD7L;
        const uint8_t **l_189 = (void*)0;
        struct S0 l_194 = {18446744073709551611UL,8L,0UL};
        int32_t l_199 = (-1L);
        int32_t l_200[2][2][4] = {{{0x3CADF087L,0L,0x3CADF087L,0x3CADF087L},{0L,0L,0xED09C0B3L,0L}},{{0L,0x3CADF087L,0x3CADF087L,0L},{0x3CADF087L,0L,0x3CADF087L,0x3CADF087L}}};
        int8_t l_219 = 0L;
        uint16_t **l_254[7][2][1] = {{{&l_116[0][0][0]},{(void*)0}},{{&l_116[0][0][0]},{(void*)0}},{{&l_116[0][0][0]},{(void*)0}},{{&l_116[0][0][0]},{(void*)0}},{{&l_116[0][0][0]},{(void*)0}},{{&l_116[0][0][0]},{(void*)0}},{{&l_116[0][0][0]},{(void*)0}}};
        union U2 l_257 = {-1L};
        int32_t *l_264[6][5][6] = {{{&g_212,&l_197[0][1][4],&g_107,&l_199,&l_156,&l_159},{&g_212,(void*)0,&g_107,&g_107,(void*)0,&l_199},{&g_212,&g_142[0],&l_159,&l_199,(void*)0,&g_107},{&g_212,&l_156,&g_107,&g_107,&l_156,&g_212},{&g_212,(void*)0,&g_107,&l_199,(void*)0,&g_107}},{{&g_212,(void*)0,&l_159,&g_107,(void*)0,&l_200[0][1][2]},{&g_212,&l_197[0][1][4],&g_107,&l_199,&l_156,&l_159},{&g_212,(void*)0,&g_107,&g_107,(void*)0,&l_199},{&g_212,&g_142[0],&l_159,&l_199,(void*)0,&g_107},{&g_212,&l_156,&g_107,&g_107,&l_156,&g_212}},{{&g_212,(void*)0,&g_107,&l_199,(void*)0,&g_107},{&g_212,(void*)0,&l_159,&g_107,(void*)0,&l_200[0][1][2]},{&g_212,&l_197[0][1][4],&g_107,&l_199,&l_156,&l_159},{&g_212,(void*)0,&g_107,&g_107,(void*)0,&l_199},{&g_212,&g_142[0],&l_159,&l_199,(void*)0,&g_107}},{{&g_212,&l_156,&g_107,&g_107,&l_156,&g_212},{&g_212,(void*)0,&g_107,&l_199,(void*)0,&g_107},{&g_212,(void*)0,&l_159,&g_107,(void*)0,&l_200[0][1][2]},{&g_212,&l_197[0][1][4],&g_107,&l_199,&l_156,&l_159},{&g_212,(void*)0,&g_107,&g_107,(void*)0,&l_199}},{{&g_212,&g_142[0],&l_159,&l_199,(void*)0,&g_107},{&g_212,&l_156,&g_107,&g_107,&l_156,&g_212},{&g_212,(void*)0,&g_107,&l_199,(void*)0,&g_107},{&g_212,(void*)0,&l_159,&g_107,(void*)0,&l_200[0][1][2]},{&g_212,&l_197[0][1][4],&g_107,&l_199,&l_156,&l_159}},{{&g_212,(void*)0,&g_107,&g_107,(void*)0,&l_199},{&g_212,&g_142[0],&l_159,&l_199,(void*)0,&g_107},{&g_212,&l_156,&g_107,&g_107,&l_156,&g_212},{&g_212,(void*)0,&g_107,&l_199,(void*)0,&g_107},{&g_212,(void*)0,&l_159,&g_107,(void*)0,&l_200[0][1][3]}}};
        int i, j, k;
        if (p_85.f0)
        { 
            union U1 l_96[6][3] = {{{1L},{1L},{1L}},{{0x2423037FL},{0xAE736DE7L},{0x2423037FL}},{{1L},{1L},{1L}},{{0x2423037FL},{0xAE736DE7L},{0x2423037FL}},{{1L},{1L},{1L}},{{0x2423037FL},{0xAE736DE7L},{0x2423037FL}}};
            int16_t *l_103 = &g_104;
            int32_t *l_105 = &l_96[1][1].f0;
            int i, j;
            (*l_105) = (g_43[0] & (((safe_rshift_func_int16_t_s_u((g_102 &= (safe_add_func_int32_t_s_s((l_96[1][1] , (((void*)0 != &p_85) && (safe_rshift_func_int8_t_s_u(0x37L, 3)))), (g_99--)))), 12)) != ((*l_103) = (((void*)0 != &p_85) != 0x0A4143F40280C152LL))) , g_4));
        }
        else
        { 
            uint8_t l_115 = 8UL;
            uint16_t *l_117 = &g_111;
            int64_t l_138 = 5L;
            int32_t l_139 = 0x4D4209EDL;
            int32_t l_141 = 3L;
            uint32_t l_143 = 0xB01E7103L;
            int32_t l_201 = (-1L);
            int32_t l_202 = (-2L);
            int32_t l_206 = 0L;
            int32_t l_211 = 0x7EC9DE8AL;
            int32_t l_214 = (-4L);
            int32_t l_216 = 0L;
            int32_t l_218[6] = {0L,0L,0L,0L,0L,0L};
            uint32_t l_220[1][1];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_220[i][j] = 0xD80B03E0L;
            }
            for (g_104 = 0; (g_104 <= 1); g_104 += 1)
            { 
                int32_t l_123 = 0L;
                int32_t *l_124 = &g_107;
                int32_t *l_126 = &l_121;
                int32_t l_127 = 2L;
                int32_t *l_128 = &l_121;
                int32_t *l_129 = &l_127;
                int32_t *l_130 = &l_127;
                int32_t *l_131 = (void*)0;
                int32_t *l_132 = &l_121;
                int32_t *l_133 = (void*)0;
                int32_t *l_134 = &l_127;
                int32_t *l_135 = &l_123;
                int32_t *l_136 = &l_127;
                int32_t *l_137[3];
                union U2 l_147 = {0x0B1AE647L};
                int16_t l_155 = 0x653AL;
                int i;
                for (i = 0; i < 3; i++)
                    l_137[i] = (void*)0;
                for (g_99 = 0; (g_99 <= 1); g_99 += 1)
                { 
                    int32_t *l_106 = &g_107;
                    uint16_t *l_110[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_110[i] = &g_111;
                    (*l_106) |= 1L;
                    (*l_106) &= (safe_add_func_uint16_t_u_u((p_85.f2.f2 = g_43[g_104]), (safe_mod_func_int8_t_s_s((((~(l_115 ^= 0x6393L)) | (l_116[1][0][5] == l_117)) >= (safe_mod_func_int32_t_s_s((((((~g_34) || g_39) , (l_121 , (void*)0)) != g_122) < 8L), 0x7BB15057L))), g_39))));
                }
                if (g_43[g_104])
                    break;
                ++l_143;
                if (l_146)
                    continue;
                if (g_13)
                { 
                    uint16_t *l_149 = &g_111;
                    uint64_t *l_154[1][1];
                    uint32_t *l_163 = &g_164;
                    uint8_t *l_165[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t l_166 = (-1L);
                    uint8_t **l_188 = &l_165[1];
                    int16_t *l_192[5];
                    struct S0 *l_195 = &l_194;
                    int32_t l_196 = 3L;
                    int32_t l_198 = 0x220C78BCL;
                    int32_t l_203 = 0xB412D541L;
                    int32_t l_204 = 1L;
                    int32_t l_205 = 0xFF4329A4L;
                    int32_t l_207 = 0L;
                    int32_t l_208 = 0L;
                    int32_t l_209 = (-1L);
                    int32_t l_210 = (-1L);
                    int32_t l_213 = (-1L);
                    int32_t l_215 = (-1L);
                    int32_t l_217[3][1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_154[i][j] = &l_147.f3.f0;
                    }
                    for (i = 0; i < 5; i++)
                        l_192[i] = &l_147.f3.f1;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_217[i][j] = (-1L);
                    }
                    (*l_124) &= (g_104 , ((l_147 , (l_115 , ((g_148 |= p_82.f0) || (((*l_130) ^= ((l_149 == ((g_99 = (safe_mod_func_int16_t_s_s((safe_div_func_int8_t_s_s(((g_160--) , (g_160 < (((*l_163) = ((18446744073709551610UL <= p_82.f0) | l_121)) <= 0x25F0BFBCL))), 0x64L)), (-1L)))) , &g_111)) && l_166)) >= p_85.f0)))) & 65529UL));
                    (*l_195) = ((safe_unary_minus_func_uint16_t_u((safe_add_func_int64_t_s_s((+((safe_add_func_int8_t_s_s(((l_159 |= (safe_mul_func_int8_t_s_s(l_175[6], (safe_add_func_int64_t_s_s((+((g_193 = ((safe_unary_minus_func_int16_t_s((p_85.f1 = (safe_mod_func_int8_t_s_s((((safe_rshift_func_int8_t_s_u(l_115, (safe_div_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((((*l_188) = p_83) != p_86), (0xB1L >= (l_189 == g_190)))), l_175[6])))) > 0x1A9EECA0L) || p_82.f2), p_85.f0))))) > 5L)) != 0x2970L)), p_82.f2))))) < 0xF713L), 0x69L)) < p_82.f0)), g_34)))) , l_194);
                    l_220[0][0]++;
                }
                else
                { 
                    l_156 = 0x2396724EL;
                    return g_223;
                }
            }
        }
        for (l_158 = (-13); (l_158 < 2); l_158 = safe_add_func_uint64_t_u_u(l_158, 2))
        { 
            int32_t *l_226 = &l_121;
            int32_t *l_227[3][5];
            int16_t l_228[7][2] = {{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L}};
            union U1 l_232 = {-5L};
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 5; j++)
                    l_227[i][j] = &l_197[0][1][4];
            }
            l_229--;
            if ((l_197[2][4][6] = (l_232 , g_233)))
            { 
                uint64_t l_234 = 18446744073709551615UL;
                int32_t l_235 = (-1L);
                int32_t l_237[5];
                uint32_t l_242 = 4294967295UL;
                union U3 *l_248 = &g_249[0];
                int i;
                for (i = 0; i < 5; i++)
                    l_237[i] = (-9L);
                if (p_85.f0)
                { 
                    int64_t l_236 = 0x513D419CB782C434LL;
                    int32_t l_238 = 0L;
                    int32_t l_239 = 0x0FEA91B5L;
                    int32_t l_240 = 9L;
                    int32_t l_241 = 0xD1FED27EL;
                    l_234 ^= 0x981E7944L;
                    ++l_242;
                }
                else
                { 
                    struct S0 **l_247 = &l_245;
                    (*l_247) = l_245;
                }
                l_227[1][1] = &l_237[1];
                return l_248;
            }
            else
            { 
                (*l_226) ^= (-1L);
            }
            if (p_82.f2)
                continue;
            if (g_39)
                break;
        }
        g_107 = (safe_lshift_func_int16_t_s_s((((safe_add_func_uint64_t_u_u(p_82.f2, 0xF55523BF7B4985C6LL)) & 0L) && ((l_116[1][0][5] = &g_111) == (void*)0)), (safe_lshift_func_int8_t_s_s((l_257 , ((safe_div_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((safe_div_func_int64_t_s_s(((p_85 , 0xF60FE78748EB9474LL) || 0L), 0xF2B780F72A84310BLL)), 12)), l_229)) | (*p_86))), 6))));
    }
    for (g_160 = 16; (g_160 >= 19); g_160 = safe_add_func_int32_t_s_s(g_160, 6))
    { 
        const int32_t l_267 = 0xDE2F1190L;
        int32_t *l_268 = (void*)0;
        int32_t *l_269 = &l_121;
        union U3 *l_270 = &g_249[1];
        (*l_269) = l_267;
        return l_270;
    }
    for (p_82.f0 = 3; (p_82.f0 < (-11)); p_82.f0 = safe_sub_func_uint16_t_u_u(p_82.f0, 9))
    { 
        uint32_t *l_291[6][4];
        int32_t l_298 = 0x32335F22L;
        uint32_t l_318[7];
        int32_t *l_325 = (void*)0;
        int32_t *l_326 = &l_121;
        int i, j;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 4; j++)
                l_291[i][j] = &g_249[0].f3;
        }
        for (i = 0; i < 7; i++)
            l_318[i] = 0xC3F2C0FAL;
        for (g_99 = 0; (g_99 <= 2); g_99 += 1)
        { 
            int32_t *l_274 = &l_197[1][1][2];
            int32_t **l_273 = &l_274;
            (*l_273) = &l_197[2][0][1];
            g_275[2] = (void*)0;
            for (g_193 = 2; (g_193 >= 0); g_193 -= 1)
            { 
                uint64_t l_277 = 0UL;
                union U3 l_295 = {0xEAL};
                int32_t l_321[7][2][3] = {{{0xEE43BC70L,0xB0A3FC12L,0xEE43BC70L},{0xEE43BC70L,0xC1363594L,0xB0A3FC12L}},{{0xC1363594L,0xEE43BC70L,0xEE43BC70L},{0xB0A3FC12L,0xEE43BC70L,0xA6A50228L}},{{6L,0xC1363594L,(-3L)},{0xB0A3FC12L,0xB0A3FC12L,(-3L)}},{{0xC1363594L,6L,0xA6A50228L},{0xEE43BC70L,0xB0A3FC12L,0xEE43BC70L}},{{0xEE43BC70L,0xC1363594L,0xB0A3FC12L},{0xC1363594L,0xEE43BC70L,0xEE43BC70L}},{{0xB0A3FC12L,0xEE43BC70L,0xA6A50228L},{6L,0xC1363594L,(-3L)}},{{0xB0A3FC12L,0xB0A3FC12L,(-3L)},{0xC1363594L,6L,0xA6A50228L}}};
                int16_t *l_323[5];
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_323[i] = (void*)0;
                for (g_233 = 2; (g_233 <= 6); g_233 += 1)
                { 
                    int i, j, k;
                    l_277 |= (g_142[(g_193 + 4)] ^= l_197[g_99][(g_193 + 1)][g_233]);
                }
                for (l_121 = 2; (l_121 >= 0); l_121 -= 1)
                { 
                    uint32_t *l_289[2][5][6] = {{{&g_233,&g_233,&g_164,&g_164,&g_233,&g_164},{(void*)0,(void*)0,(void*)0,&g_164,&g_164,(void*)0},{(void*)0,(void*)0,&g_164,&g_164,&g_164,&g_233},{&g_164,&g_233,&g_164,(void*)0,&g_164,&g_164},{(void*)0,&g_164,&g_164,(void*)0,(void*)0,&g_233}},{{&g_164,(void*)0,&g_164,&g_233,&g_164,(void*)0},{&g_233,&g_164,(void*)0,&g_164,&g_233,&g_164},{(void*)0,&g_164,&g_164,(void*)0,(void*)0,&g_164},{(void*)0,&g_164,&g_233,&g_164,&g_233,(void*)0},{&g_164,&g_164,(void*)0,(void*)0,&g_164,&g_164}}};
                    uint32_t **l_288 = &l_289[0][3][1];
                    uint32_t **l_292[6][4] = {{&l_290,&l_290,&l_290,&l_290},{&l_290,&l_290,&l_290,&l_290},{&l_290,&l_290,&l_290,&l_290},{&l_290,&l_290,&l_290,&l_290},{&l_290,&l_290,&l_290,&l_290},{&l_290,&l_290,&l_290,&l_290}};
                    int32_t l_299[1][3];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_299[i][j] = 0x5EEBCE1EL;
                    }
                    if (l_197[l_121][(l_121 + 2)][(l_121 + 3)])
                        break;
                    if (g_111)
                        break;
                    l_197[g_99][g_99][(g_99 + 3)] = (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((p_82.f0 >= ((void*)0 != &p_82)), (safe_add_func_uint64_t_u_u((*l_274), (g_164 && (((void*)0 != &g_276) || g_148)))))), 5));
                    l_299[0][2] &= (safe_rshift_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s((((*l_288) = &g_164) != (g_293[1][0][0] = (l_291[1][2] = l_290))), 2)) < (g_212 , (((((g_294 , (l_295 , (safe_add_func_uint16_t_u_u((*l_274), l_197[0][1][4])))) >= l_298) >= 0x66L) > (*p_86)) & (**l_273)))), (**l_273)));
                    return &g_249[0];
                }
                (*l_273) = &l_298;
                for (g_276.f1.f0 = 0; g_276.f1.f0 < 5; g_276.f1.f0 += 1)
                {
                    g_275[g_276.f1.f0] = &g_276;
                }
                g_142[0] = (g_140 < (p_85.f2.f1 = (safe_sub_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((safe_unary_minus_func_uint8_t_u((+(safe_add_func_int64_t_s_s(g_246.f0, (safe_div_func_int64_t_s_s((safe_add_func_uint8_t_u_u(((((l_197[0][1][4] = (safe_sub_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((*p_86) = ((l_318[0] | (((-1L) & 0xB7L) <= (safe_sub_func_uint32_t_u_u(0x65A340AFL, (((((p_82.f0 > 1L) >= g_246.f0) || 0UL) != l_318[6]) >= l_321[2][0][2]))))) < 8L)), (**g_190))), 2)) || 0UL), 18446744073709551615UL))) == l_298) , 1L) > 0x32B34B19L), 0x3DL)), 0x870815F8AAC8C820LL))))))), 7L)), g_322))));
            }
        }
        if (g_102)
            goto lbl_324;
        (*l_326) ^= p_82.f0;
        for (g_276.f1.f0 = 2; (g_276.f1.f0 <= 27); ++g_276.f1.f0)
        { 
            (*l_326) &= (safe_lshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(g_4, (-1L))), 2));
        }
    }
    for (p_82.f1.f2 = 0; (p_82.f1.f2 <= 2); p_82.f1.f2 += 1)
    { 
        union U2 * const l_333 = (void*)0;
        union U2 *l_335 = (void*)0;
        union U2 **l_334[2][7] = {{&l_335,&l_335,&l_335,&l_335,&l_335,&l_335,&l_335},{&l_335,&l_335,&l_335,&l_335,&l_335,&l_335,&l_335}};
        union U2 **l_336 = &l_335;
        int32_t *l_337 = &l_121;
        int32_t *l_338 = &l_197[0][1][4];
        int32_t *l_339 = &g_142[5];
        int32_t *l_340 = (void*)0;
        int32_t *l_341[1][6][1];
        int32_t l_344 = 1L;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 6; j++)
            {
                for (k = 0; k < 1; k++)
                    l_341[i][j][k] = &g_276.f0;
            }
        }
        (*l_336) = l_333;
        ++l_345[1];
        for (g_233 = 0; (g_233 <= 2); g_233 += 1)
        { 
            return l_348;
        }
    }
    return &g_249[0];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_43[i], "g_43[i]", print_hash_value);

    }
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_142[i], "g_142[i]", print_hash_value);

    }
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_246.f0, "g_246.f0", print_hash_value);
    transparent_crc(g_246.f1, "g_246.f1", print_hash_value);
    transparent_crc(g_246.f2, "g_246.f2", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_249[i].f0, "g_249[i].f0", print_hash_value);

    }
    transparent_crc(g_294.f0, "g_294.f0", print_hash_value);
    transparent_crc(g_294.f1, "g_294.f1", print_hash_value);
    transparent_crc(g_294.f4, "g_294.f4", print_hash_value);
    transparent_crc(g_322, "g_322", print_hash_value);
    transparent_crc(g_342, "g_342", print_hash_value);
    transparent_crc(g_417, "g_417", print_hash_value);
    transparent_crc(g_504, "g_504", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_525[i], "g_525[i]", print_hash_value);

    }
    transparent_crc(g_530, "g_530", print_hash_value);
    transparent_crc(g_540, "g_540", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_588[i], "g_588[i]", print_hash_value);

    }
    transparent_crc(g_608, "g_608", print_hash_value);
    transparent_crc(g_741.f0, "g_741.f0", print_hash_value);
    transparent_crc(g_741.f1, "g_741.f1", print_hash_value);
    transparent_crc(g_741.f4, "g_741.f4", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_1029[i][j], "g_1029[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1084.f0, "g_1084.f0", print_hash_value);
    transparent_crc(g_1084.f1, "g_1084.f1", print_hash_value);
    transparent_crc(g_1084.f2, "g_1084.f2", print_hash_value);
    transparent_crc(g_1099, "g_1099", print_hash_value);
    transparent_crc(g_1107, "g_1107", print_hash_value);
    transparent_crc(g_1174, "g_1174", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1186[i], "g_1186[i]", print_hash_value);

    }
    transparent_crc(g_1195, "g_1195", print_hash_value);
    transparent_crc(g_1365, "g_1365", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1401[i], "g_1401[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1412[i], "g_1412[i]", print_hash_value);

    }
    transparent_crc(g_1415, "g_1415", print_hash_value);
    transparent_crc(g_1478, "g_1478", print_hash_value);
    transparent_crc(g_1642, "g_1642", print_hash_value);
    transparent_crc(g_1658, "g_1658", print_hash_value);
    transparent_crc(g_1820, "g_1820", print_hash_value);
    transparent_crc(g_2151, "g_2151", print_hash_value);
    transparent_crc(g_2452, "g_2452", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_2460[i][j][k], "g_2460[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_2597, "g_2597", print_hash_value);
    transparent_crc(g_2744, "g_2744", print_hash_value);
    transparent_crc(g_2764, "g_2764", print_hash_value);
    transparent_crc(g_2868, "g_2868", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
