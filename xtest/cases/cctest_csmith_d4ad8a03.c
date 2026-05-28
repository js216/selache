// SPDX-License-Identifier: MIT
// cctest_csmith_d4ad8a03.c --- cctest case csmith_d4ad8a03 (csmith seed 3568142851)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x32c81061 */
/* @exp_ticks 0x48af */

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

// Options:   -s 3568142851 -o /tmp/csmith_gen_9l42c1_o/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint8_t  f0;
   uint8_t  f1;
   int16_t  f2;
   int32_t  f3;
   int8_t  f4;
   int8_t  f5;
   int16_t  f6;
};

union U1 {
   struct S0  f0;
   int16_t  f1;
   const int64_t  f2;
   uint16_t  f3;
   int32_t  f4;
};


static uint32_t g_2 = 0x4D63A88EL;
static int32_t g_13 = 0L;
static uint64_t g_16 = 0xBC6715623A55A411LL;
static int8_t g_28[1] = {0x38L};
static int64_t g_47[2] = {0x46355D6903F87FBCLL,0x46355D6903F87FBCLL};
static int8_t g_88[7] = {0x38L,0x38L,0x38L,0x38L,0x38L,0x38L,0x38L};
static const int64_t g_93 = 0xB0E876F31F8A0258LL;
static const int64_t g_95 = 0xFB14099FA619A738LL;
static const int64_t *g_94 = &g_95;
static uint8_t g_98[6][1] = {{0x19L},{0x19L},{0x19L},{0x19L},{0x19L},{0x19L}};
static uint32_t g_103 = 0xF5F243A6L;
static uint8_t g_115 = 0xECL;
static struct S0 g_123 = {0xE1L,0x56L,0xEE88L,0xA977D591L,0xF1L,-3L,-6L};
static const union U1 g_134 = {{247UL,247UL,0xE18DL,0xE2A73504L,0xE9L,0x28L,1L}};
static uint64_t g_140 = 0x95D4EB7A0ED4F26BLL;
static int8_t g_143[2] = {0x90L,0x90L};
static int32_t g_144 = (-1L);
static const uint8_t **g_152 = (void*)0;
static uint32_t g_155 = 4294967290UL;
static uint32_t g_166[7] = {4294967290UL,4294967290UL,4294967290UL,4294967290UL,4294967290UL,4294967290UL,4294967290UL};
static int32_t g_170 = 0xE89AD741L;
static uint8_t g_171 = 1UL;
static int32_t *g_177 = &g_123.f3;
static uint16_t g_223 = 0UL;
static uint16_t *g_222 = &g_223;
static uint16_t g_238 = 0x7221L;
static uint32_t *g_271 = &g_166[1];
static int64_t g_311 = 0x878589A203BC8BD7LL;
static struct S0 g_346 = {7UL,0x9CL,-9L,0L,-1L,0xD5L,-1L};
static struct S0 g_385 = {0UL,0x86L,0x06CAL,0xE0C315ECL,-7L,-5L,0x9666L};
static int32_t * const *g_391[5][7] = {{&g_177,(void*)0,&g_177,&g_177,&g_177,(void*)0,&g_177},{&g_177,(void*)0,&g_177,&g_177,&g_177,(void*)0,&g_177},{&g_177,(void*)0,&g_177,&g_177,&g_177,(void*)0,&g_177},{&g_177,&g_177,(void*)0,&g_177,(void*)0,&g_177,&g_177},{&g_177,&g_177,(void*)0,&g_177,(void*)0,&g_177,&g_177}};
static int32_t * const **g_390 = &g_391[2][6];
static const int32_t *g_395 = &g_346.f3;
static struct S0 *g_482[6] = {&g_123,&g_123,&g_123,&g_123,&g_123,&g_123};
static struct S0 *g_484 = &g_385;
static uint8_t g_515[2][6] = {{0x54L,255UL,253UL,255UL,0x54L,0x54L},{0xF7L,255UL,255UL,0xF7L,251UL,0xF7L}};
static int32_t g_573 = (-1L);
static const uint16_t g_596 = 0x2A44L;
static union U1 g_611 = {{0xD9L,9UL,0x3335L,1L,0x76L,0x48L,0x5417L}};
static const union U1 *g_610[3] = {&g_611,&g_611,&g_611};
static struct S0 **g_636 = (void*)0;
static struct S0 ***g_635 = &g_636;
static uint32_t g_671 = 0xEB76EB50L;
static int64_t g_695[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
static const uint16_t **g_769 = (void*)0;
static const uint16_t ***g_768[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int64_t *g_849 = (void*)0;
static uint16_t **g_946 = &g_222;
static int32_t ***g_1058 = (void*)0;
static int32_t ****g_1057 = &g_1058;
static int32_t ***** const g_1056 = &g_1057;
static int8_t *g_1065 = &g_385.f5;
static int8_t **g_1064 = &g_1065;
static int8_t ***g_1063 = &g_1064;
static uint32_t g_1068 = 0x74F93322L;
static uint32_t g_1295 = 0x92977054L;
static int8_t *** const *g_1303 = (void*)0;
static int8_t *** const ** const g_1302[7][6] = {{&g_1303,&g_1303,&g_1303,&g_1303,&g_1303,&g_1303},{&g_1303,&g_1303,(void*)0,&g_1303,&g_1303,&g_1303},{&g_1303,&g_1303,&g_1303,&g_1303,&g_1303,(void*)0},{&g_1303,&g_1303,&g_1303,&g_1303,&g_1303,(void*)0},{&g_1303,&g_1303,&g_1303,&g_1303,&g_1303,&g_1303},{&g_1303,&g_1303,(void*)0,&g_1303,&g_1303,&g_1303},{&g_1303,&g_1303,&g_1303,&g_1303,&g_1303,(void*)0}};
static int8_t g_1342 = 0x21L;



static uint16_t  func_1(void);
static int32_t  func_6(union U1  p_7, int8_t  p_8, uint32_t  p_9);
static uint8_t  func_34(uint16_t  p_35, uint16_t  p_36, uint16_t  p_37, int32_t * p_38);
static struct S0 * func_50(uint64_t  p_51, int64_t * p_52, int64_t * p_53);
static int32_t * func_57(uint32_t  p_58, int64_t * p_59);
static int64_t * func_61(int16_t  p_62, uint16_t * p_63, int32_t  p_64, struct S0  p_65, uint64_t  p_66);
static const int16_t  func_71(int32_t  p_72);
static int32_t  func_73(const int32_t * p_74);




static uint16_t  func_1(void)
{ 
    uint16_t l_3 = 0xB389L;
    union U1 l_10 = {{248UL,0xA9L,0x950AL,0L,8L,-1L,0x07C6L}};
    int64_t *l_1047 = &g_695[2];
    const int64_t l_1048 = 0xCC9C9BFC611F5285LL;
    int32_t * const ** const l_1050 = &g_391[2][6];
    int32_t l_1053 = 0xE00317FEL;
    int16_t l_1091 = 1L;
    int64_t l_1116 = 1L;
    int32_t l_1118 = (-1L);
    int32_t l_1119 = 0xEF28E25FL;
    uint32_t l_1122 = 4294967295UL;
    int32_t l_1173 = 0xD11C530DL;
    int32_t l_1175 = 0x65F3FA89L;
    uint16_t l_1176 = 1UL;
    uint8_t l_1282 = 1UL;
    uint8_t *l_1311 = &g_115;
    uint8_t **l_1310 = &l_1311;
    int32_t l_1332 = 2L;
    int32_t l_1333 = 9L;
    int32_t l_1336 = 7L;
    int32_t l_1338[1];
    int i;
    for (i = 0; i < 1; i++)
        l_1338[i] = 0xA5D27587L;
    if ((((0L || ((g_2 || g_2) <= ((*l_1047) = (l_3 < (safe_add_func_uint32_t_u_u(g_2, func_6(l_10, (l_10.f0.f6 , 2L), g_2))))))) > l_1048) && l_10.f0.f5))
    { 
        int32_t * const **l_1049[4];
        int64_t *l_1051 = &g_311;
        int32_t l_1052 = 0xC89F3DB1L;
        int32_t * const ***l_1060 = &l_1049[2];
        int32_t * const ****l_1059 = &l_1060;
        int32_t *l_1067 = &l_10.f0.f3;
        int32_t l_1079[4][4] = {{0x44D19258L,1L,0x44D19258L,1L},{0x44D19258L,1L,0x44D19258L,1L},{0x44D19258L,1L,0x44D19258L,1L},{0x44D19258L,1L,0x44D19258L,1L}};
        int16_t l_1083 = 0xB1A2L;
        uint64_t l_1094 = 0x7423F48850BFAEB5LL;
        int16_t l_1103 = (-1L);
        int16_t l_1111[7] = {(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)};
        int32_t l_1115 = 0x7AADF93AL;
        int64_t l_1117[5] = {0x798B1BF647ACBFE7LL,0x798B1BF647ACBFE7LL,0x798B1BF647ACBFE7LL,0x798B1BF647ACBFE7LL,0x798B1BF647ACBFE7LL};
        int i, j;
        for (i = 0; i < 4; i++)
            l_1049[i] = &g_391[2][6];
lbl_1127:
        l_1053 ^= ((g_134.f0.f6 > ((*l_1047) = (l_1049[3] != l_1050))) , (l_10.f4 = ((((*l_1047) = (-3L)) > ((l_10 , (((*g_94) && ((*l_1051) = (*g_94))) , g_385.f4)) != l_1052)) && (*g_395))));
        for (g_611.f3 = 0; (g_611.f3 <= 30); ++g_611.f3)
        { 
            int32_t l_1070 = 1L;
            uint16_t l_1087 = 65534UL;
            int32_t l_1092 = (-7L);
            uint32_t l_1097 = 0x684BDDD5L;
            int32_t l_1120 = 0x11C8FC49L;
            int32_t l_1121 = (-7L);
            if ((g_1056 != l_1059))
            { 
                uint32_t l_1086 = 18446744073709551615UL;
                int16_t *l_1088 = (void*)0;
                int16_t *l_1089 = &l_1083;
                int16_t *l_1090[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1090[i] = (void*)0;
                for (g_123.f2 = 0; (g_123.f2 < (-23)); g_123.f2 = safe_sub_func_int64_t_s_s(g_123.f2, 1))
                { 
                    int8_t ****l_1066 = &g_1063;
                    int32_t l_1069[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1069[i] = 0x3433B1BEL;
                    (*l_1066) = g_1063;
                    l_1067 = (void*)0;
                    l_1069[0] |= g_1068;
                    l_1069[0] = l_1070;
                }
                l_1070 = ((safe_add_func_int16_t_s_s((g_385.f6 |= (((safe_add_func_int16_t_s_s(((0x7CBE2B1E7D2D61A3LL && g_95) > l_1070), ((*l_1089) = (safe_mod_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u(l_1079[2][3], 0)) & ((((+(((l_1070 , ((safe_mul_func_int16_t_s_s(((l_1083 == (((((safe_add_func_uint16_t_u_u(((((l_1086 , l_1087) <= l_1087) != 0UL) < (*g_94)), (-10L))) , (*g_390)) == (void*)0) , 0x9628L) , (*g_271))) <= 0x09A635BE71CEA9C5LL), g_28[0])) && 0x77C10264L)) > (*g_271)) , 0x0BA35E60L)) | l_10.f3) , g_346.f6) ^ l_1086)), (*g_271)))))) != (**g_1064)) && (**g_1064))), 0x6772L)) && l_10.f1);
            }
            else
            { 
                int32_t l_1093 = (-10L);
                uint8_t l_1098 = 0UL;
                l_1094++;
                l_1097 &= l_1092;
                ++l_1098;
            }
            for (g_385.f6 = 0; (g_385.f6 > (-20)); g_385.f6 = safe_sub_func_uint16_t_u_u(g_385.f6, 1))
            { 
                return l_1103;
            }
            for (g_346.f3 = 0; (g_346.f3 <= (-20)); g_346.f3--)
            { 
                int16_t l_1106[3];
                int32_t l_1109 = (-10L);
                uint8_t l_1112 = 0UL;
                int i;
                for (i = 0; i < 3; i++)
                    l_1106[i] = 0x59EDL;
                for (l_10.f0.f6 = 0; l_10.f0.f6 < 6; l_10.f0.f6 += 1)
                {
                    for (g_144 = 0; g_144 < 1; g_144 += 1)
                    {
                        g_98[l_10.f0.f6][g_144] = 248UL;
                    }
                }
                if ((l_1092 ^= l_1106[1]))
                { 
                    int32_t l_1107 = 0xAE72B51AL;
                    if (l_1107)
                        break;
                }
                else
                { 
                    uint16_t l_1108[4][3][7] = {{{6UL,0x72FAL,0x9A69L,65535UL,0x73F0L,0x77D9L,0UL},{0x160AL,0UL,0x73F0L,0x160AL,0x5F57L,0x6A82L,0x00D7L},{0UL,65535UL,65530UL,0x5F57L,0x5F57L,65530UL,65535UL}},{{0x5F57L,65535UL,0x77D9L,0UL,0x73F0L,0x00D7L,0x336BL},{0x77D9L,0UL,0UL,65535UL,0xAF3CL,0x72FAL,0x73F0L},{65535UL,65535UL,0x52B6L,0UL,65535UL,0xC314L,0UL}},{{0UL,0x73F0L,0x160AL,0x5F57L,0x6A82L,0x00D7L,65535UL},{0x9A69L,0UL,0x160AL,0x160AL,0UL,0x9A69L,4UL},{0xAF3CL,6UL,0x52B6L,65535UL,65535UL,65528UL,65535UL}},{{0x5F57L,65531UL,0UL,0x336BL,4UL,0x77D9L,65535UL},{65535UL,6UL,0x77D9L,0x00D7L,0xAF3CL,0x160AL,0x90ECL},{0x73F0L,0x160AL,0x5F57L,0x6A82L,0x00D7L,65535UL,0x00D7L}}};
                    int32_t l_1110 = (-10L);
                    int i, j, k;
                    l_1109 = l_1108[0][0][2];
                    ++l_1112;
                }
            }
            ++l_1122;
            for (g_573 = (-14); (g_573 == 28); g_573 = safe_add_func_int16_t_s_s(g_573, 4))
            { 
                if (g_346.f3)
                    goto lbl_1127;
            }
        }
    }
    else
    { 
        int64_t l_1151[1][2][5];
        int32_t l_1171[2];
        int32_t l_1193 = 0xC2E43643L;
        const int32_t * const *l_1218 = &g_395;
        const int32_t * const **l_1217 = &l_1218;
        const int32_t * const ***l_1216[3][6] = {{&l_1217,(void*)0,&l_1217,&l_1217,(void*)0,&l_1217},{&l_1217,&l_1217,&l_1217,&l_1217,&l_1217,&l_1217},{&l_1217,&l_1217,&l_1217,&l_1217,(void*)0,&l_1217}};
        struct S0 l_1219 = {253UL,0UL,-10L,9L,0x6CL,0xAAL,0xB4DEL};
        uint8_t *l_1257 = &l_1219.f1;
        uint8_t **l_1256 = &l_1257;
        int8_t l_1258 = 1L;
        uint32_t l_1261 = 5UL;
        uint64_t l_1262 = 0x7044474955D91C42LL;
        uint64_t l_1320 = 0x9EC6E9C16F0F7315LL;
        uint32_t **l_1356[4][4][7] = {{{&g_271,&g_271,&g_271,(void*)0,&g_271,(void*)0,&g_271},{&g_271,&g_271,&g_271,&g_271,&g_271,&g_271,&g_271},{&g_271,(void*)0,&g_271,&g_271,&g_271,(void*)0,&g_271},{&g_271,(void*)0,&g_271,&g_271,(void*)0,(void*)0,&g_271}},{{&g_271,(void*)0,&g_271,(void*)0,(void*)0,&g_271,(void*)0},{&g_271,&g_271,&g_271,(void*)0,&g_271,&g_271,&g_271},{&g_271,&g_271,&g_271,&g_271,&g_271,&g_271,&g_271},{&g_271,&g_271,&g_271,&g_271,&g_271,(void*)0,(void*)0}},{{&g_271,&g_271,(void*)0,(void*)0,&g_271,(void*)0,(void*)0},{&g_271,&g_271,&g_271,&g_271,&g_271,&g_271,&g_271},{&g_271,&g_271,(void*)0,&g_271,(void*)0,(void*)0,(void*)0},{&g_271,&g_271,&g_271,&g_271,&g_271,&g_271,&g_271}},{{&g_271,(void*)0,&g_271,(void*)0,&g_271,(void*)0,&g_271},{&g_271,(void*)0,&g_271,&g_271,&g_271,&g_271,(void*)0},{&g_271,(void*)0,(void*)0,&g_271,&g_271,(void*)0,&g_271},{&g_271,&g_271,&g_271,&g_271,&g_271,&g_271,&g_271}}};
        union U1 *l_1362 = &g_611;
        union U1 **l_1361 = &l_1362;
        int32_t *l_1364 = &l_1175;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 5; k++)
                    l_1151[i][j][k] = 0L;
            }
        }
        for (i = 0; i < 2; i++)
            l_1171[i] = (-1L);
        if ((safe_div_func_uint32_t_u_u((safe_mod_func_int64_t_s_s((g_47[1] = ((safe_sub_func_int8_t_s_s(((***g_1063) = (!(safe_unary_minus_func_uint8_t_u((safe_rshift_func_int8_t_s_u((*g_1065), 6)))))), ((((safe_mul_func_int16_t_s_s(((void*)0 != &g_103), (((((safe_lshift_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(1UL, (safe_div_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((+(((safe_div_func_int16_t_s_s((((l_1151[0][1][3] > (l_1151[0][1][3] ^ (g_346.f6 = ((l_10.f0 , g_346.f4) && l_1151[0][1][3])))) , g_28[0]) >= l_10.f0.f0), l_1151[0][0][4])) < (*g_94)) == 0x2CC6935F4EA089BALL)), 2)), (*g_271))))), l_1151[0][0][1])) , (void*)0) == (void*)0) != 0x414D3AB9L) , l_1151[0][0][0]))) == 0xEF2892FA338C2693LL) || g_346.f6) || 0L))) , 0x1B99F174B6FA3E8BLL)), 0x1CB479E711D3B5CELL)), l_1151[0][1][3])))
        { 
            const int64_t l_1155 = (-4L);
            union U1 l_1162 = {{0x3AL,1UL,0x8450L,1L,-7L,1L,0L}};
            int32_t **l_1163 = &g_177;
            uint8_t *l_1164 = &l_1162.f0.f0;
            int32_t *l_1168 = &g_346.f3;
            int32_t *l_1172[2];
            int32_t l_1174 = 0x7AE1C69BL;
            int i;
            for (i = 0; i < 2; i++)
                l_1172[i] = &l_10.f4;
            (*l_1163) = (((!(l_1151[0][1][3] > ((*g_271) = ((safe_mod_func_uint8_t_u_u(4UL, (l_10.f0 , l_1155))) , 0xF6B687C8L)))) && (safe_sub_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s((((l_10 , ((((safe_rshift_func_uint8_t_u_u(l_1155, 4)) != (**g_1064)) , g_16) , l_1162)) , g_152) != g_152), (***g_1063))) , 5L), (*g_395)))) , (void*)0);
            l_1053 = (((*l_1164)--) <= ((~((*l_1168) = 0x214426B8L)) & (safe_mul_func_uint16_t_u_u((l_1171[1] = 65535UL), g_385.f1))));
            --l_1176;
        }
        else
        { 
            struct S0 l_1179 = {0x37L,0x77L,-5L,0x31CB1F97L,0xD7L,0x2EL,-5L};
            struct S0 *l_1190 = &g_123;
            uint32_t l_1191 = 0UL;
            int32_t *l_1192 = &g_385.f3;
            int64_t *l_1194 = &l_1116;
            int32_t **l_1195 = &l_1192;
            int32_t ****l_1196 = &g_1058;
            struct S0 l_1220 = {1UL,0x3AL,-10L,0x9A8323FFL,5L,2L,6L};
            const int32_t l_1259[6] = {9L,9L,9L,9L,9L,9L};
            uint32_t l_1260[2];
            int32_t l_1276 = 0L;
            int32_t l_1277 = 4L;
            int32_t l_1278 = 0x74AE7F57L;
            int8_t * const *l_1288 = &g_1065;
            int8_t * const **l_1287 = &l_1288;
            int8_t * const ***l_1286 = &l_1287;
            uint8_t * const *l_1312 = &l_1257;
            int32_t l_1334 = (-1L);
            int64_t l_1335 = 0x46E3862ADB4DCB8ELL;
            int32_t l_1339 = 0xE1A22388L;
            int32_t l_1340 = 0x7D675D08L;
            int32_t l_1341[7][6][4] = {{{0x8F5B4747L,0x48A7395DL,0L,0L},{3L,0x584919CDL,0x8EDFDD6AL,0x6D63B89DL},{0L,0x8F5B4747L,0xA0ACFF1AL,5L},{0L,1L,0x48A7395DL,(-1L)},{0x3BDA3D4CL,(-10L),0x1F613143L,0xACF623E3L},{0xA5BE88F2L,0x8EDFDD6AL,0x416BFB52L,3L}},{{0x97A8E9F6L,(-2L),0L,5L},{1L,0x6D63B89DL,0x6D63B89DL,1L},{0L,(-5L),0xCDA3CE65L,0x937810A9L},{8L,0x86107B30L,5L,0xF4362263L},{0xD3D7D3ABL,0x62E1B265L,0x584919CDL,0xF4362263L},{0x30F5CC5EL,0x86107B30L,7L,1L}},{{(-3L),0x1F613143L,(-1L),0x62E1B265L},{0x23393DA3L,0xA5BE88F2L,(-2L),(-6L)},{0x97A8E9F6L,0xACF623E3L,0x23393DA3L,0x506D0597L},{0xD3D7D3ABL,(-1L),1L,0x416BFB52L},{1L,8L,3L,(-10L)},{0xA0ACFF1AL,0x62E1B265L,0L,0x23393DA3L}},{{0x4BFE3876L,1L,0x48A7395DL,0xA5BE88F2L},{0xA5BE88F2L,(-1L),0L,0xCDA3CE65L},{0L,0x3BDA3D4CL,0xCDA3CE65L,0x3BDA3D4CL},{0L,(-3L),(-1L),0xACF623E3L},{0L,0L,0x4BFE3876L,(-5L)},{5L,0x506D0597L,0x1CAAB772L,0L}},{{5L,0x06A98BCFL,0x4BFE3876L,0x937810A9L},{0L,0L,(-1L),0x1CAAB772L},{0L,0L,0xCDA3CE65L,0x86107B30L},{0L,0x584919CDL,0L,0xA0ACFF1AL},{0xA5BE88F2L,3L,0x48A7395DL,3L},{0x4BFE3876L,0x48A7395DL,0L,2L}},{{0xA0ACFF1AL,1L,3L,0xF4362263L},{1L,0x48CD48C5L,1L,(-1L)},{0xD3D7D3ABL,0x8F5B4747L,0x23393DA3L,0x4BFE3876L},{0x97A8E9F6L,2L,(-2L),(-2L)},{0x23393DA3L,0x23393DA3L,(-1L),0x8F5B4747L},{(-3L),5L,7L,0x1F613143L}},{{0xF4362263L,(-5L),(-1L),7L},{(-2L),(-5L),(-6L),0x1F613143L},{(-5L),5L,0xA0ACFF1AL,0x8F5B4747L},{0x48CD48C5L,0x23393DA3L,0xA5BE88F2L,(-2L)},{0x62E1B265L,2L,5L,0x4BFE3876L},{0xFEB05D58L,0x8F5B4747L,0x584919CDL,(-1L)}}};
            uint32_t l_1351 = 4294967288UL;
            uint32_t **l_1354 = &g_271;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1260[i] = 0UL;
            l_10.f0 = ((*g_484) = l_1179);
            (*l_1195) = &l_1171[1];
            if (((l_10 , &l_1050) == l_1196))
            { 
                uint32_t l_1213 = 4294967287UL;
                int32_t l_1214 = (-7L);
                int32_t l_1221[3][2][5] = {{{(-1L),0xE3440BA5L,1L,(-2L),(-2L)},{1L,0L,1L,0x2D17B176L,6L}},{{0x61ABB9BBL,(-1L),(-2L),(-1L),0x61ABB9BBL},{1L,(-1L),0L,0xAD5DC060L,0L}},{{(-1L),(-1L),(-2L),0x61ABB9BBL,(-1L)},{(-1L),1L,1L,(-1L),0L}}};
                int i, j, k;
                for (l_10.f0.f0 = 0; (l_10.f0.f0 >= 54); l_10.f0.f0 = safe_add_func_int16_t_s_s(l_10.f0.f0, 7))
                { 
                    if ((*g_395))
                        break;
                    if (l_10.f0.f6)
                        goto lbl_1235;
                }
                (*l_1192) = (safe_div_func_int16_t_s_s((l_1151[0][0][2] , 0xD3F7L), g_611.f0.f5));
                if (((*g_390) == (*l_1050)))
                { 
                    int32_t *l_1201 = (void*)0;
                    union U1 l_1206 = {{0x26L,254UL,-2L,0xCF3454D8L,0x99L,0x9FL,0xE928L}};
                    uint16_t *****l_1209 = (void*)0;
                    uint16_t ***l_1212 = &g_946;
                    uint16_t ****l_1211 = &l_1212;
                    uint16_t *****l_1210 = &l_1211;
                    int32_t *l_1215 = &l_1119;
                    (*l_1195) = l_1201;
                    (*l_1215) ^= ((((((*l_1194) &= (safe_sub_func_uint16_t_u_u((0x1EL < ((1L != ((*g_1065) = (((safe_div_func_uint16_t_u_u((((*g_94) || ((l_1206 , (safe_div_func_int32_t_s_s((l_1213 = ((((*l_1210) = (void*)0) == (void*)0) > l_1171[1])), 4294967295UL))) == l_1151[0][1][3])) <= g_695[4]), 65534UL)) < g_2) , l_1193))) <= l_1214)), 0x9472L))) , 1L) == (*g_271)) ^ l_10.f0.f6) || l_1171[1]);
                    (*l_1215) = (((void*)0 != l_1216[2][2]) <= 1UL);
                }
                else
                { 
                    int32_t *l_1222 = &g_170;
                    int32_t *l_1223 = &l_1179.f3;
                    int32_t *l_1224 = &g_611.f4;
                    int32_t *l_1225 = &g_144;
                    int32_t *l_1226 = &l_1220.f3;
                    int32_t *l_1227 = &l_1220.f3;
                    int32_t *l_1228[4];
                    int16_t l_1229 = 0L;
                    uint32_t l_1230[7] = {4294967289UL,4294967289UL,4294967289UL,4294967289UL,4294967289UL,4294967289UL,4294967289UL};
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1228[i] = &g_170;
                    (*l_1190) = l_1219;
                    (*g_484) = (l_1213 , l_1220);
                    ++l_1230[2];
                    (*g_484) = (*g_484);
                }
lbl_1235:
                for (l_1219.f1 = 0; (l_1219.f1 != 23); ++l_1219.f1)
                { 
                    return l_1221[0][1][0];
                }
                l_1262 = (((safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((safe_div_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(((((0x978BCB064864D971LL < ((((safe_mul_func_int8_t_s_s(l_1214, g_134.f0.f1)) < ((safe_div_func_int16_t_s_s(((safe_div_func_uint32_t_u_u((0x7059D2E25028AC37LL < (g_16 &= (safe_div_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((((l_10 , g_152) == l_1256) != l_10.f0.f1), 4)), g_47[0])))), l_1258)) ^ (**l_1218)), 0x723EL)) || l_1213)) & l_1221[2][0][1]) , (*g_94))) == l_1259[1]) | 9L) != (*g_271)), l_1214)) && l_1260[1]), g_611.f0.f2)), l_1221[0][0][1])), l_1220.f5)), 0xF87F6546L)) >= (**l_1218)) == l_1261);
            }
            else
            { 
                uint32_t l_1279 = 0UL;
                int32_t *l_1285 = &l_1220.f3;
                int8_t **** const l_1290 = (void*)0;
                int32_t l_1294[5];
                uint8_t l_1299 = 0xFAL;
                uint32_t l_1305 = 0x4983CE4CL;
                int32_t *l_1319 = (void*)0;
                int32_t *l_1321 = &g_13;
                int32_t *l_1322 = &l_1277;
                int32_t *l_1323 = &l_1179.f3;
                int32_t *l_1324 = (void*)0;
                int32_t *l_1325 = &l_1175;
                int32_t *l_1326 = (void*)0;
                int32_t *l_1327 = &l_1173;
                int32_t *l_1328 = &l_1277;
                int32_t *l_1329 = (void*)0;
                int32_t *l_1330 = (void*)0;
                int32_t *l_1331[5];
                int64_t l_1337 = 0x6C8DD64C731A2586LL;
                int32_t l_1343 = (-1L);
                uint64_t l_1344 = 0x1CB480EB0D9D79E9LL;
                int i;
                for (i = 0; i < 5; i++)
                    l_1294[i] = 0x14DAC3D4L;
                for (i = 0; i < 5; i++)
                    l_1331[i] = (void*)0;
                (**l_1195) = (safe_lshift_func_int16_t_s_u(0xDFF3L, 0));
                if (((**l_1195) &= (**l_1218)))
                { 
                    int32_t *l_1265 = &l_10.f4;
                    int32_t *l_1266 = &l_1053;
                    int32_t *l_1267 = &l_10.f4;
                    int32_t *l_1268 = &g_123.f3;
                    int32_t l_1269 = 7L;
                    int32_t *l_1270 = &l_1053;
                    int32_t *l_1271 = &g_611.f4;
                    int32_t *l_1272 = &l_10.f0.f3;
                    int32_t *l_1273 = (void*)0;
                    int32_t *l_1274 = &l_1175;
                    int32_t *l_1275[5][6][4] = {{{&g_346.f3,&l_1119,&l_10.f0.f3,&l_1119},{&l_1119,(void*)0,&l_10.f0.f3,(void*)0},{&g_346.f3,&g_144,(void*)0,&l_1053},{(void*)0,&g_346.f3,(void*)0,&l_1219.f3},{(void*)0,&l_1179.f3,(void*)0,&g_346.f3},{&g_346.f3,&l_1219.f3,&l_10.f0.f3,&l_1053}},{{&l_1119,(void*)0,&l_10.f0.f3,&g_144},{&g_346.f3,&l_10.f0.f3,&g_13,&g_13},{&l_1179.f3,&l_1179.f3,&g_346.f3,&l_1179.f3},{(void*)0,&l_1219.f3,&g_346.f3,&g_170},{&g_346.f3,&l_10.f0.f3,&l_1171[1],&g_346.f3},{&l_10.f0.f3,&l_10.f0.f3,&g_170,&g_170}},{{&l_10.f0.f3,&l_1219.f3,(void*)0,&l_1179.f3},{&g_346.f3,&l_1179.f3,(void*)0,&l_10.f0.f3},{&g_170,&l_1053,&l_10.f0.f3,(void*)0},{&l_1219.f3,&g_13,&l_1219.f3,&l_1179.f3},{(void*)0,&l_1220.f3,&g_144,&l_1053},{&l_1171[1],&l_10.f0.f3,(void*)0,&l_1220.f3}},{{&l_1119,&g_144,(void*)0,(void*)0},{&l_1171[1],&l_1179.f3,&g_144,(void*)0},{(void*)0,(void*)0,&l_1219.f3,&l_1171[1]},{&l_1219.f3,&l_1171[1],&l_10.f0.f3,&g_144},{&g_170,(void*)0,(void*)0,&g_170},{&g_346.f3,&g_170,(void*)0,(void*)0}},{{&l_10.f0.f3,&l_10.f0.f3,&g_170,(void*)0},{&l_10.f0.f3,&l_1053,&l_1171[1],(void*)0},{&g_346.f3,&l_10.f0.f3,&g_346.f3,(void*)0},{(void*)0,&g_170,&g_346.f3,&g_170},{&l_1179.f3,(void*)0,&l_10.f0.f3,&g_144},{&g_144,&l_1171[1],&l_1053,&l_1171[1]}}};
                    int i, j, k;
                    l_1279++;
                    l_1282--;
                    (*l_1195) = l_1285;
                }
                else
                { 
                    int8_t * const ****l_1289 = &l_1286;
                    int8_t ****l_1292[6][4][4] = {{{(void*)0,&g_1063,&g_1063,&g_1063},{&g_1063,&g_1063,&g_1063,&g_1063},{&g_1063,&g_1063,&g_1063,&g_1063},{&g_1063,&g_1063,&g_1063,&g_1063}},{{&g_1063,&g_1063,&g_1063,&g_1063},{&g_1063,&g_1063,&g_1063,&g_1063},{&g_1063,&g_1063,&g_1063,&g_1063},{&g_1063,&g_1063,&g_1063,&g_1063}},{{&g_1063,&g_1063,&g_1063,&g_1063},{(void*)0,&g_1063,&g_1063,(void*)0},{&g_1063,&g_1063,&g_1063,&g_1063},{&g_1063,&g_1063,&g_1063,(void*)0}},{{&g_1063,&g_1063,(void*)0,(void*)0},{&g_1063,&g_1063,&g_1063,&g_1063},{&g_1063,&g_1063,&g_1063,(void*)0},{&g_1063,&g_1063,(void*)0,&g_1063}},{{&g_1063,&g_1063,&g_1063,&g_1063},{(void*)0,&g_1063,(void*)0,&g_1063},{&g_1063,&g_1063,&g_1063,&g_1063},{&g_1063,&g_1063,&g_1063,&g_1063}},{{&g_1063,&g_1063,&g_1063,&g_1063},{&g_1063,&g_1063,&g_1063,&g_1063},{&g_1063,&g_1063,(void*)0,&g_1063},{(void*)0,&g_1063,&g_1063,&g_1063}}};
                    int8_t *****l_1291 = &l_1292[4][0][1];
                    int32_t *l_1293[2];
                    uint32_t l_1298 = 7UL;
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_1293[i] = &l_1171[1];
                    (*l_1289) = l_1286;
                    (*l_1291) = l_1290;
                    g_1295++;
                    l_1299 |= ((*l_1285) ^= ((*l_1192) = l_1298));
                }
                for (g_611.f0.f6 = 15; (g_611.f0.f6 == 26); ++g_611.f0.f6)
                { 
                    int32_t *l_1304[5][7] = {{&l_1294[3],&l_1294[3],&l_1119,&l_1294[3],&l_1294[3],&l_1119,&l_1294[3]},{&l_1219.f3,&l_1119,&l_1119,&l_1219.f3,&l_1119,&l_1119,&l_1219.f3},{&l_1119,&l_1219.f3,&l_1119,&l_1119,&l_1219.f3,&l_1119,&l_1119},{&l_1219.f3,&l_1219.f3,&l_1294[3],&l_1219.f3,&l_1219.f3,&l_1294[3],&l_1219.f3},{&l_1219.f3,&l_1119,&l_1119,&l_1219.f3,&l_1119,&l_1119,&l_1219.f3}};
                    int i, j;
                    (**l_1195) |= ((void*)0 != g_1302[0][2]);
                    l_1305--;
                    (*l_1195) = (*l_1195);
                }
                (*l_1321) &= ((safe_div_func_int32_t_s_s((l_1310 == ((*g_94) , l_1312)), (++(*g_271)))) < (((((((safe_rshift_func_uint16_t_u_s((&g_140 != ((l_1320 &= ((l_1219 = ((*g_484) = (*l_1190))) , (((safe_mod_func_uint8_t_u_u((l_1119 & g_573), (-1L))) || (-10L)) & g_134.f0.f6))) , &g_140)), 8)) >= g_115) <= (**l_1218)) > 18446744073709551608UL) || (*l_1192)) == 0x1F6DD99E1981A3BFLL) , (*g_94)));
                l_1344++;
            }
            for (l_1220.f4 = 0; (l_1220.f4 == (-30)); l_1220.f4 = safe_sub_func_int32_t_s_s(l_1220.f4, 4))
            { 
                uint32_t ***l_1355[1];
                int32_t l_1359 = 1L;
                uint16_t *l_1360[1];
                const union U1 **l_1363 = &g_610[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_1355[i] = &l_1354;
                for (i = 0; i < 1; i++)
                    l_1360[i] = &l_3;
                l_1219.f3 = (((*g_271) , (safe_add_func_int8_t_s_s(l_1351, (safe_sub_func_int8_t_s_s((((((((l_1356[3][0][6] = l_1354) != (void*)0) ^ (g_223 = (((*l_1257) = (***l_1217)) > (safe_mul_func_uint8_t_u_u(l_1359, ((g_155 |= ((*g_271) = (***l_1217))) & g_123.f5)))))) , l_1361) == l_1363) >= 1UL) != (*g_395)), g_346.f3))))) == l_1048);
                return (***l_1217);
            }
        }
        g_395 = l_1364;
    }
    for (g_311 = 12; (g_311 >= (-17)); g_311--)
    { 
        union U1 *l_1368 = &g_611;
        union U1 **l_1367 = &l_1368;
        int32_t l_1378[1];
        int16_t l_1385 = 2L;
        int32_t l_1386 = 0x40B16860L;
        int i;
        for (i = 0; i < 1; i++)
            l_1378[i] = 0x83AADDC2L;
        (*l_1367) = &g_611;
        for (g_238 = (-20); (g_238 < 57); g_238 = safe_add_func_int64_t_s_s(g_238, 3))
        { 
            int32_t *l_1372 = &g_573;
            int32_t **l_1371 = &l_1372;
            int32_t l_1373 = 0x8E428B4CL;
            int16_t *l_1379 = (void*)0;
            int16_t *l_1380 = &g_123.f2;
            uint16_t *l_1381 = &l_10.f3;
            uint16_t *l_1382 = &l_10.f3;
            uint16_t *l_1383 = &l_10.f3;
            uint16_t *l_1384[1];
            int32_t *l_1391 = &l_1332;
            int i;
            for (i = 0; i < 1; i++)
                l_1384[i] = &g_611.f3;
            l_1386 = (((**g_1064) && ((0UL && ((((*l_1371) = &g_573) == &g_573) >= l_1373)) > (safe_mul_func_uint16_t_u_u((g_223 |= (safe_sub_func_int16_t_s_s(((*l_1380) = (0xFAL != (l_1373 == l_1378[0]))), 0x4B61L))), g_166[0])))) && l_1385);
            if (l_1378[0])
                continue;
            (*l_1391) |= (safe_div_func_uint16_t_u_u((--g_223), (-8L)));
        }
        if ((*g_395))
            continue;
    }
    return l_3;
}



static int32_t  func_6(union U1  p_7, int8_t  p_8, uint32_t  p_9)
{ 
    uint16_t l_11 = 0x9BEAL;
    int32_t l_14 = 0x00025004L;
    int32_t l_15 = (-8L);
    uint8_t *l_497 = &g_346.f1;
    uint8_t **l_496 = &l_497;
    int32_t l_504 = (-2L);
    int32_t l_506 = 0x4C29D585L;
    int32_t l_507 = 1L;
    int32_t l_509 = 0x4D04426CL;
    int32_t l_510 = 0x3C9113A5L;
    int32_t l_511 = (-5L);
    int32_t l_512 = 3L;
    int32_t l_513 = 0L;
    int32_t l_514[3][7];
    uint16_t l_536 = 0x105EL;
    struct S0 *l_548 = &g_123;
    uint32_t *l_680 = &g_671;
    uint16_t *l_721 = (void*)0;
    int64_t l_742 = (-7L);
    int8_t l_803 = 8L;
    int8_t *l_812 = &g_88[3];
    uint32_t l_895 = 0xC3DC6320L;
    int8_t l_920[4][7][3] = {{{9L,0x3AL,0L},{0x86L,0L,0xE7L},{0xB5L,1L,(-1L)},{0xE7L,0x74L,1L},{0xCEL,1L,(-6L)},{0xA2L,0L,0xA2L},{1L,0x3AL,1L}},{{(-10L),0x2FL,1L},{(-6L),1L,(-1L)},{0xEEL,1L,0L},{(-6L),(-1L),0x12L},{(-10L),(-10L),0L},{1L,0x20L,0x67L},{0xA2L,0xD0L,(-10L)}},{{0xCEL,0xF3L,0xCDL},{0xE7L,0xA2L,(-10L)},{0xB5L,0x67L,0x67L},{0x86L,0xEEL,0L},{9L,0L,0x12L},{0xEAL,(-4L),0L},{0x12L,0xCEL,(-1L)}},{{0x74L,(-4L),1L},{1L,0L,1L},{(-4L),0xEEL,0xA2L},{0x20L,0x67L,(-6L)},{1L,0xA2L,1L},{0x3AL,0xF3L,(-1L)},{1L,0xD0L,0xE7L}}};
    uint16_t **l_929[1];
    int32_t *l_951 = &l_506;
    int64_t l_964 = 0x6D6D780CFF2B44FFLL;
    struct S0 *l_971 = (void*)0;
    int32_t * const ***l_974 = &g_390;
    int32_t * const ****l_973 = &l_974;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
            l_514[i][j] = 1L;
    }
    for (i = 0; i < 1; i++)
        l_929[i] = &g_222;
    if (g_2)
    { 
        int32_t *l_12[5][4][7] = {{{&g_13,&g_13,(void*)0,(void*)0,&g_13,&g_13,&g_13},{&g_13,&g_13,(void*)0,(void*)0,(void*)0,(void*)0,&g_13},{&g_13,&g_13,(void*)0,&g_13,(void*)0,&g_13,&g_13},{&g_13,(void*)0,(void*)0,&g_13,&g_13,&g_13,&g_13}},{{&g_13,&g_13,(void*)0,&g_13,&g_13,&g_13,&g_13},{(void*)0,&g_13,(void*)0,(void*)0,(void*)0,&g_13,(void*)0},{&g_13,&g_13,(void*)0,&g_13,&g_13,&g_13,&g_13},{&g_13,&g_13,(void*)0,(void*)0,&g_13,&g_13,&g_13}},{{&g_13,&g_13,(void*)0,(void*)0,(void*)0,(void*)0,&g_13},{&g_13,&g_13,(void*)0,&g_13,(void*)0,&g_13,&g_13},{&g_13,(void*)0,(void*)0,&g_13,&g_13,&g_13,&g_13},{&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13}},{{(void*)0,(void*)0,&g_13,&g_13,&g_13,(void*)0,(void*)0},{(void*)0,&g_13,&g_13,(void*)0,(void*)0,&g_13,&g_13},{&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,(void*)0},{(void*)0,&g_13,&g_13,&g_13,&g_13,&g_13,(void*)0}},{{&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13},{&g_13,&g_13,&g_13,(void*)0,&g_13,&g_13,&g_13},{&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13},{(void*)0,(void*)0,&g_13,&g_13,&g_13,(void*)0,(void*)0}}};
        uint8_t *l_495 = (void*)0;
        uint8_t **l_494 = &l_495;
        int64_t *l_531 = &g_47[0];
        int64_t **l_530[6][7][3] = {{{&l_531,(void*)0,&l_531},{&l_531,&l_531,&l_531},{&l_531,(void*)0,&l_531},{&l_531,&l_531,&l_531},{&l_531,(void*)0,&l_531},{&l_531,&l_531,&l_531},{&l_531,(void*)0,&l_531}},{{&l_531,&l_531,&l_531},{&l_531,(void*)0,&l_531},{&l_531,&l_531,&l_531},{&l_531,(void*)0,&l_531},{&l_531,&l_531,&l_531},{&l_531,(void*)0,&l_531},{&l_531,&l_531,&l_531}},{{&l_531,(void*)0,&l_531},{&l_531,&l_531,&l_531},{&l_531,(void*)0,&l_531},{&l_531,&l_531,&l_531},{&l_531,(void*)0,&l_531},{&l_531,&l_531,&l_531},{&l_531,(void*)0,&l_531}},{{&l_531,&l_531,&l_531},{&l_531,(void*)0,&l_531},{&l_531,&l_531,&l_531},{&l_531,(void*)0,&l_531},{&l_531,&l_531,&l_531},{&l_531,(void*)0,&l_531},{&l_531,&l_531,&l_531}},{{&l_531,(void*)0,&l_531},{&l_531,&l_531,&l_531},{&l_531,(void*)0,&l_531},{&l_531,&l_531,&l_531},{&l_531,(void*)0,&l_531},{&l_531,&l_531,&l_531},{&l_531,(void*)0,&l_531}},{{&l_531,&l_531,&l_531},{&l_531,(void*)0,&l_531},{&l_531,&l_531,&l_531},{&l_531,(void*)0,&l_531},{&l_531,&l_531,&l_531},{&l_531,(void*)0,&l_531},{&l_531,&l_531,&l_531}}};
        const struct S0 l_545[6][3] = {{{255UL,0x23L,1L,0x83FC3BABL,0x0BL,-1L,1L},{0UL,0x0AL,0x1F96L,6L,0x24L,0x92L,-1L},{0UL,0x0AL,0x1F96L,6L,0x24L,0x92L,-1L}},{{0UL,0x0AL,0x1F96L,6L,0x24L,0x92L,-1L},{0x97L,0x88L,0x7717L,-1L,5L,8L,-6L},{0x97L,0x88L,0x7717L,-1L,5L,8L,-6L}},{{0UL,0x0AL,0x1F96L,6L,0x24L,0x92L,-1L},{0x97L,0x88L,0x7717L,-1L,5L,8L,-6L},{0x97L,0x88L,0x7717L,-1L,5L,8L,-6L}},{{0UL,0x0AL,0x1F96L,6L,0x24L,0x92L,-1L},{0x97L,0x88L,0x7717L,-1L,5L,8L,-6L},{0x97L,0x88L,0x7717L,-1L,5L,8L,-6L}},{{0UL,0x0AL,0x1F96L,6L,0x24L,0x92L,-1L},{0x97L,0x88L,0x7717L,-1L,5L,8L,-6L},{0x97L,0x88L,0x7717L,-1L,5L,8L,-6L}},{{0UL,0x0AL,0x1F96L,6L,0x24L,0x92L,-1L},{0x97L,0x88L,0x7717L,-1L,5L,8L,-6L},{0x97L,0x88L,0x7717L,-1L,5L,8L,-6L}}};
        struct S0 *l_546 = &g_385;
        uint16_t *l_597 = (void*)0;
        union U1 l_714[7][1] = {{{{9UL,0x2CL,1L,0x01DA727CL,0x4DL,6L,0x9C67L}}},{{{0xB8L,1UL,-2L,0xAC833CDBL,0x59L,0x65L,1L}}},{{{9UL,0x2CL,1L,0x01DA727CL,0x4DL,6L,0x9C67L}}},{{{0xB8L,1UL,-2L,0xAC833CDBL,0x59L,0x65L,1L}}},{{{9UL,0x2CL,1L,0x01DA727CL,0x4DL,6L,0x9C67L}}},{{{0xB8L,1UL,-2L,0xAC833CDBL,0x59L,0x65L,1L}}},{{{9UL,0x2CL,1L,0x01DA727CL,0x4DL,6L,0x9C67L}}}};
        uint64_t l_716 = 0x0CA4AB00C5DD1782LL;
        int i, j, k;
    }
    else
    { 
        uint32_t l_752 = 0x734FA3E0L;
        uint16_t **l_758 = (void*)0;
        uint16_t ***l_757 = &l_758;
        union U1 l_767 = {{255UL,247UL,-3L,0x0C65E396L,0x96L,2L,-1L}};
        int64_t *l_770 = &g_695[4];
        int16_t *l_771 = &g_611.f0.f2;
        uint32_t l_772[1];
        int32_t *l_786[6][7][5] = {{{&g_123.f3,(void*)0,&g_123.f3,(void*)0,&l_514[2][1]},{&g_123.f3,&g_144,&l_514[2][4],&l_14,&g_611.f0.f3},{&g_611.f0.f3,&g_123.f3,&l_514[2][1],(void*)0,&l_514[2][1]},{&l_767.f0.f3,&l_14,&g_144,(void*)0,&l_513},{&l_514[2][1],(void*)0,&l_513,&l_510,&g_144},{&l_507,&l_15,&g_611.f0.f3,(void*)0,&l_511},{&l_510,(void*)0,(void*)0,&l_510,(void*)0}},{{&l_509,&l_14,&l_506,&l_509,&g_170},{&l_513,&g_123.f3,&g_170,&g_611.f0.f3,(void*)0},{&l_511,&g_144,&l_513,&l_509,&l_509},{&g_144,(void*)0,&l_512,&l_510,&g_123.f3},{&l_504,&l_510,&l_767.f0.f3,(void*)0,&l_506},{(void*)0,&l_767.f0.f3,&g_170,&l_510,&l_510},{&l_504,&l_506,&l_504,(void*)0,(void*)0}},{{&g_144,&l_512,&g_611.f0.f3,(void*)0,(void*)0},{&l_511,(void*)0,&g_170,&l_14,(void*)0},{&l_513,(void*)0,&g_611.f0.f3,(void*)0,&l_513},{&l_509,&g_170,&l_504,&l_510,&l_767.f0.f3},{&l_510,&g_123.f3,&g_170,&l_514[2][1],&g_170},{&l_507,&l_14,&l_767.f0.f3,&g_170,&l_767.f0.f3},{&l_514[2][1],&l_514[2][1],&l_512,&g_170,&l_513}},{{&l_767.f0.f3,&g_385.f3,&l_513,&l_504,(void*)0},{&g_611.f0.f3,(void*)0,&g_170,&l_767.f0.f3,(void*)0},{&g_123.f3,&g_385.f3,&l_506,&g_144,(void*)0},{&g_123.f3,&l_514[2][1],(void*)0,&l_513,&l_510},{&l_513,&l_14,&g_611.f0.f3,(void*)0,&l_506},{(void*)0,&g_123.f3,&l_513,&l_513,&g_123.f3},{(void*)0,&g_170,&g_144,&g_144,&l_509}},{{&g_123.f3,(void*)0,&l_514[2][1],&l_767.f0.f3,(void*)0},{(void*)0,(void*)0,&l_514[2][4],&l_504,&g_170},{&g_123.f3,&l_512,&g_123.f3,&g_170,(void*)0},{(void*)0,&l_506,&l_507,&g_170,&l_511},{(void*)0,&l_767.f0.f3,&l_510,&l_514[2][1],&g_144},{&l_513,&l_510,&l_507,&l_510,&l_504},{(void*)0,&l_510,(void*)0,&l_514[2][1],&g_611.f0.f3}},{{(void*)0,&g_385.f3,&l_509,(void*)0,&g_170},{(void*)0,(void*)0,&g_611.f0.f3,&l_510,&g_611.f0.f3},{&l_507,(void*)0,&g_144,&g_144,&l_504},{&g_611.f0.f3,&g_170,&g_123.f3,&l_513,&g_170},{(void*)0,&l_510,&g_170,&l_15,&l_767.f0.f3},{&g_144,&g_170,&g_170,&g_144,&l_512},{&l_506,(void*)0,&g_611.f0.f3,&l_14,&l_513}}};
        uint16_t l_863 = 65532UL;
        int32_t l_891[2][2];
        union U1 *l_911 = &g_611;
        union U1 **l_910 = &l_911;
        int32_t ***l_948 = (void*)0;
        int8_t l_965 = 0x32L;
        int16_t l_969 = 1L;
        struct S0 **l_972[2];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_772[i] = 18446744073709551615UL;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_891[i][j] = 1L;
        }
        for (i = 0; i < 2; i++)
            l_972[i] = &g_482[3];
        if ((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((((safe_lshift_func_uint8_t_u_u(l_752, 1)) | ((*l_771) &= (((((((-10L) & (safe_rshift_func_uint16_t_u_u((--(*g_222)), (0UL || ((((*l_757) = &g_222) != ((safe_div_func_int64_t_s_s(((*l_770) |= ((safe_mul_func_int8_t_s_s(((((~((safe_mul_func_int16_t_s_s(l_752, l_512)) == (!(*g_94)))) , l_767) , l_757) == g_768[0]), l_11)) > l_11)), p_7.f0.f0)) , (void*)0)) ^ (*g_94)))))) != l_511) , l_767.f0.f3) != l_15) || 0x71F0L) < 0x866D2B09L))) || l_772[0]), 15)), 0x6D21L)))
        { 
            uint32_t l_780 = 0UL;
            int32_t **l_785[2][4][6] = {{{&g_177,&g_177,&g_177,&g_177,(void*)0,&g_177},{&g_177,(void*)0,&g_177,&g_177,&g_177,&g_177},{&g_177,&g_177,&g_177,&g_177,&g_177,&g_177},{&g_177,(void*)0,&g_177,&g_177,(void*)0,&g_177}},{{&g_177,&g_177,&g_177,&g_177,&g_177,&g_177},{&g_177,&g_177,&g_177,&g_177,(void*)0,&g_177},{&g_177,(void*)0,&g_177,&g_177,&g_177,&g_177},{&g_177,&g_177,&g_177,&g_177,&g_177,&g_177}}};
            struct S0 **l_798 = &g_482[1];
            int8_t *l_804 = &g_143[1];
            int64_t **l_805[5];
            int32_t *l_806 = &g_346.f3;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_805[i] = (void*)0;
            l_786[0][6][2] = func_57(((((l_767.f0.f3 = l_509) , (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(p_7.f0.f4, (!0x082ED848AA77AA4CLL))), (l_772[0] < ((*l_497)++))))) <= (g_143[1] ^ ((l_780 | ((*g_177) = (safe_div_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(0x41L, l_780)), l_780)))) | 0x33CB0870L))) , p_8), &g_311);
            l_511 |= ((1L < ((((((safe_mul_func_int8_t_s_s(g_611.f0.f1, (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u((safe_mod_func_int64_t_s_s((safe_rshift_func_int16_t_s_u(((void*)0 == &l_780), ((((*l_798) = l_548) != &g_123) || ((*l_804) &= ((((((safe_lshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s(l_506, p_9)), l_803)) , (void*)0) == (void*)0) == 0xAB05L) , 0L) <= 0xC9L))))), p_7.f0.f5)))), p_7.f0.f0)), 3)))) != (*g_271)) , p_8) & 0x0C70L) == (*g_271)) < 0xF77BL)) > 4UL);
            g_395 = (g_177 = l_806);
        }
        else
        { 
            const struct S0 *l_815 = (void*)0;
            for (l_742 = 0; (l_742 >= 19); l_742 = safe_add_func_uint8_t_u_u(l_742, 7))
            { 
                int8_t *l_818 = &g_611.f0.f4;
                int8_t *l_819 = (void*)0;
                int8_t *l_820 = &g_346.f5;
                for (p_7.f0.f5 = 0; (p_7.f0.f5 <= 0); p_7.f0.f5 += 1)
                { 
                    struct S0 l_809 = {0xB8L,255UL,0x1051L,0xEA796FCCL,8L,0x92L,0x70A5L};
                    int i;
                    if (l_511)
                        break;
                    l_809 = p_7.f0;
                }
                (*g_177) = (safe_div_func_uint8_t_u_u((((l_812 = &g_143[1]) != (void*)0) & 0xE4L), (p_7 , (safe_lshift_func_uint8_t_u_s(p_7.f0.f4, ((*l_820) ^= ((*l_818) = (l_815 == ((safe_sub_func_uint64_t_u_u(g_346.f0, p_7.f0.f6)) , (void*)0)))))))));
            }
        }
        for (l_803 = 0; (l_803 == (-21)); --l_803)
        { 
            uint64_t l_839[4][5] = {{0x40DCB94607E12226LL,0x40DCB94607E12226LL,0x40DCB94607E12226LL,0x40DCB94607E12226LL,0x40DCB94607E12226LL},{0x8DB94ACD80FF33CCLL,0x061FE4804AC60B3DLL,0x8DB94ACD80FF33CCLL,0x061FE4804AC60B3DLL,0x8DB94ACD80FF33CCLL},{0x40DCB94607E12226LL,0x40DCB94607E12226LL,0x40DCB94607E12226LL,0x40DCB94607E12226LL,0x40DCB94607E12226LL},{0x8DB94ACD80FF33CCLL,0x061FE4804AC60B3DLL,0x8DB94ACD80FF33CCLL,0x061FE4804AC60B3DLL,0x8DB94ACD80FF33CCLL}};
            uint32_t *l_846 = &l_772[0];
            int32_t l_847 = 0L;
            int32_t l_851[2];
            uint32_t l_869 = 18446744073709551615UL;
            int8_t l_892 = (-2L);
            int64_t *l_893 = &g_47[1];
            int8_t l_894[5];
            int32_t *l_907 = &l_847;
            uint16_t l_919 = 65535UL;
            uint16_t **l_928 = &g_222;
            int i, j;
            for (i = 0; i < 2; i++)
                l_851[i] = 0xD04985ABL;
            for (i = 0; i < 5; i++)
                l_894[i] = 0L;
            for (g_611.f0.f3 = 0; (g_611.f0.f3 == (-9)); g_611.f0.f3 = safe_sub_func_uint16_t_u_u(g_611.f0.f3, 1))
            { 
                struct S0 l_842 = {0xE8L,0x9CL,-5L,0xA49D5329L,7L,0x68L,4L};
                int16_t l_850 = (-8L);
                uint8_t **l_856 = &l_497;
                uint16_t *l_861 = (void*)0;
                int32_t l_868 = (-5L);
            }
        }
        l_548 = (g_482[2] = l_971);
        (*g_177) |= (&l_863 != ((*g_946) = &l_863));
    }
    (*l_973) = &g_390;
    for (g_311 = 0; (g_311 == (-18)); g_311 = safe_sub_func_uint8_t_u_u(g_311, 4))
    { 
        const uint16_t ***l_993 = &g_769;
        const int32_t l_1004 = (-1L);
        int32_t l_1010 = 0x7D943B3BL;
        int32_t l_1011 = 7L;
        int32_t l_1013 = 0xB5FF7F4CL;
        int32_t l_1014 = 0xCF4B6CCFL;
        int32_t l_1016 = 0x52A94769L;
        int32_t l_1019 = 0xCC0B4BB4L;
        int32_t l_1020 = 0L;
        int32_t l_1022 = 0xB90EEF5DL;
        uint32_t l_1025 = 9UL;
        struct S0 **l_1044[3][2][4] = {{{&g_482[2],&g_482[2],&g_482[2],&g_482[2]},{&g_482[2],&g_482[2],&g_482[2],&g_482[2]}},{{&g_482[2],&g_482[2],&g_482[2],&g_482[2]},{&g_482[2],&g_482[2],&g_482[2],&g_482[2]}},{{&g_482[2],&g_482[2],&g_482[2],&g_482[2]},{&g_482[2],&g_482[2],&g_482[2],&g_482[2]}}};
        int i, j, k;
        for (g_123.f3 = (-18); (g_123.f3 >= (-3)); g_123.f3++)
        { 
            uint16_t * const *l_991 = &l_721;
            uint16_t * const **l_990 = &l_991;
            int32_t *l_994 = &l_512;
            int32_t l_1015 = (-1L);
            int32_t l_1017 = (-1L);
            int32_t l_1018 = 0x091B62AEL;
            int32_t l_1023 = 1L;
            int32_t l_1024[6][7] = {{0xC596FB39L,0x6FBA32D2L,0x6FBA32D2L,0xC596FB39L,0x6FBA32D2L,0x6FBA32D2L,0xC596FB39L},{0x0C7B8211L,0x6BACF008L,0x0C7B8211L,0x73A01FBEL,0x5B10E55EL,0x73A01FBEL,0x0C7B8211L},{0xC596FB39L,0xC596FB39L,4L,0xC596FB39L,0xC596FB39L,4L,0xC596FB39L},{0x5B10E55EL,0x73A01FBEL,0x0C7B8211L,0x6BACF008L,0x0C7B8211L,0x73A01FBEL,0x5B10E55EL},{0x6FBA32D2L,0xC596FB39L,0x6FBA32D2L,0x6FBA32D2L,0xC596FB39L,0x6FBA32D2L,0x6FBA32D2L},{0x5B10E55EL,0x6BACF008L,0x044F5413L,0x6BACF008L,0x5B10E55EL,0x529A1683L,0x5B10E55EL}};
            union U1 l_1045 = {{0x3BL,0x3CL,-5L,0xB715FFE7L,-7L,-10L,0x0E15L}};
            int i, j;
            if (p_7.f0.f0)
                break;
            for (g_385.f5 = 0; (g_385.f5 == (-13)); g_385.f5--)
            { 
                uint32_t l_981 = 18446744073709551615UL;
                l_981--;
            }
            if (p_7.f0.f3)
                break;
            for (g_385.f5 = 0; (g_385.f5 == 16); g_385.f5 = safe_add_func_int8_t_s_s(g_385.f5, 6))
            { 
                int8_t *l_1000[2][3][7] = {{{&g_123.f5,&g_123.f4,&g_123.f4,&g_123.f5,(void*)0,&g_28[0],&g_28[0]},{(void*)0,&g_385.f5,&g_346.f4,&g_385.f5,(void*)0,&g_385.f5,&g_346.f4},{(void*)0,&g_123.f5,&g_123.f4,&g_123.f4,&g_123.f5,(void*)0,&g_28[0]}},{{&l_920[3][3][2],&l_920[3][3][2],&l_920[3][3][2],&g_385.f5,&l_920[3][3][2],&l_920[3][3][2],&l_920[3][3][2]},{(void*)0,&g_123.f4,&g_28[0],&g_123.f5,&g_123.f5,&g_28[0],&g_123.f4},{(void*)0,&l_920[3][3][2],&g_346.f4,&l_920[3][3][2],(void*)0,&l_920[3][3][2],&g_346.f4}}};
                const int8_t *l_1003 = &l_920[3][3][2];
                const int8_t **l_1002 = &l_1003;
                int32_t l_1012[7][2][2] = {{{0x514CB388L,0x514CB388L},{0x514CB388L,0x514CB388L}},{{0x514CB388L,0x514CB388L},{0x514CB388L,0x514CB388L}},{{0x514CB388L,0x514CB388L},{0x514CB388L,0x514CB388L}},{{0x514CB388L,0x514CB388L},{0x514CB388L,0x514CB388L}},{{0x514CB388L,0x514CB388L},{0x514CB388L,0x514CB388L}},{{0x514CB388L,0x514CB388L},{0x514CB388L,0x514CB388L}},{{0x514CB388L,0x514CB388L},{0x514CB388L,0x514CB388L}}};
                union U1 *l_1042 = (void*)0;
                int i, j, k;
                for (l_964 = 0; (l_964 == 28); l_964++)
                { 
                    uint16_t * const ***l_992[7] = {&l_990,&l_990,&l_990,&l_990,&l_990,&l_990,&l_990};
                    int32_t **l_995 = &g_177;
                    int i;
                    (*l_951) ^= (safe_sub_func_uint16_t_u_u(0UL, ((l_990 = (p_7.f0.f5 , l_990)) == (l_993 = &g_769))));
                    (*l_995) = l_994;
                }
                for (l_11 = 0; (l_11 > 46); l_11++)
                { 
                    int8_t **l_1001 = &l_1000[0][2][1];
                    int16_t *l_1005 = (void*)0;
                    int16_t *l_1006 = (void*)0;
                    int16_t *l_1007 = &g_123.f6;
                    int32_t *l_1008 = &l_15;
                    int32_t *l_1009[3][4] = {{&l_514[2][4],&g_13,&l_514[2][4],(void*)0},{&l_514[2][4],(void*)0,(void*)0,&l_514[2][4]},{&g_123.f3,(void*)0,&l_507,(void*)0}};
                    int8_t l_1021 = 0x1AL;
                    int32_t **l_1028 = (void*)0;
                    int32_t **l_1029 = &l_994;
                    int i, j;
                    p_7.f0.f3 &= (&p_7 != ((safe_mod_func_uint32_t_u_u((((*l_1001) = l_1000[0][2][1]) != &g_143[1]), (((((((((void*)0 == l_1002) , l_1004) | ((*l_1007) = (*l_994))) == 0x60CAL) >= l_1004) ^ (*g_395)) , p_8) ^ (*g_271)))) , &g_134));
                    --l_1025;
                    (*l_1029) = &l_1012[2][1][0];
                    return l_1020;
                }
                if ((((((5L < ((*g_395) || ((((l_1012[6][0][0] ^ g_123.f4) | (safe_rshift_func_uint8_t_u_s((p_7.f0.f2 || ((0xA871FC789B335316LL & (safe_rshift_func_uint8_t_u_u(p_7.f0.f3, 4))) != p_7.f0.f2)), p_7.f0.f2))) > l_1016) , l_1012[6][0][0]))) | 0x91L) > 0x09L) , 0L) != g_144))
                { 
                    struct S0 **l_1043 = &l_548;
                    int32_t l_1046 = 0x8558D59EL;
                    l_1046 ^= (((((safe_rshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u((g_88[3] , (((((safe_add_func_int64_t_s_s(((*l_994) | ((*l_994) >= ((safe_lshift_func_int16_t_s_u((((void*)0 != l_1042) > p_7.f0.f1), ((((l_1043 = &l_971) == l_1044[0][0][0]) < l_1012[2][1][1]) >= (*g_271)))) | 0x8721L))), p_7.f0.f6)) , 0x2EC0A2A3E6DFA45CLL) < 18446744073709551610UL) , l_1045) , l_1012[1][1][0])), 0x60A5L)), 3)) , 4UL) <= p_7.f0.f6) , &l_895) == &g_103);
                    return p_8;
                }
                else
                { 
                    return (*g_395);
                }
            }
        }
    }
    return p_7.f0.f1;
}



static uint8_t  func_34(uint16_t  p_35, uint16_t  p_36, uint16_t  p_37, int32_t * p_38)
{ 
    int64_t *l_54 = &g_47[1];
    struct S0 **l_483 = (void*)0;
    g_484 = (g_482[2] = func_50(p_36, &g_47[1], l_54));
    return p_35;
}



static struct S0 * func_50(uint64_t  p_51, int64_t * p_52, int64_t * p_53)
{ 
    const int32_t *l_75 = (void*)0;
    struct S0 l_224[6][3][7] = {{{{0xB4L,250UL,-1L,0x57EC4277L,-10L,0xAAL,4L},{0x41L,254UL,0L,0xF8269F73L,0x70L,0xC2L,-8L},{0x41L,254UL,0L,0xF8269F73L,0x70L,0xC2L,-8L},{0xB4L,250UL,-1L,0x57EC4277L,-10L,0xAAL,4L},{0x26L,253UL,0xBE0EL,0x0DA8FB4CL,0xB2L,0L,0xD12DL},{0UL,7UL,-6L,0xD3B19451L,0x64L,0x22L,0xD1FDL},{0x26L,253UL,0xBE0EL,0x0DA8FB4CL,0xB2L,0L,0xD12DL}},{{0xB4L,250UL,-1L,0x57EC4277L,-10L,0xAAL,4L},{0x41L,254UL,0L,0xF8269F73L,0x70L,0xC2L,-8L},{0x41L,254UL,0L,0xF8269F73L,0x70L,0xC2L,-8L},{0xB4L,250UL,-1L,0x57EC4277L,-10L,0xAAL,4L},{0x26L,253UL,0xBE0EL,0x0DA8FB4CL,0xB2L,0L,0xD12DL},{0UL,7UL,-6L,0xD3B19451L,0x64L,0x22L,0xD1FDL},{0x26L,253UL,0xBE0EL,0x0DA8FB4CL,0xB2L,0L,0xD12DL}},{{0xB4L,250UL,-1L,0x57EC4277L,-10L,0xAAL,4L},{0x41L,254UL,0L,0xF8269F73L,0x70L,0xC2L,-8L},{0x41L,254UL,0L,0xF8269F73L,0x70L,0xC2L,-8L},{0xB4L,250UL,-1L,0x57EC4277L,-10L,0xAAL,4L},{0x26L,253UL,0xBE0EL,0x0DA8FB4CL,0xB2L,0L,0xD12DL},{0UL,7UL,-6L,0xD3B19451L,0x64L,0x22L,0xD1FDL},{0x26L,253UL,0xBE0EL,0x0DA8FB4CL,0xB2L,0L,0xD12DL}}},{{{0xB4L,250UL,-1L,0x57EC4277L,-10L,0xAAL,4L},{0x41L,254UL,0L,0xF8269F73L,0x70L,0xC2L,-8L},{0x41L,254UL,0L,0xF8269F73L,0x70L,0xC2L,-8L},{0xB4L,250UL,-1L,0x57EC4277L,-10L,0xAAL,4L},{0x26L,253UL,0xBE0EL,0x0DA8FB4CL,0xB2L,0L,0xD12DL},{0UL,7UL,-6L,0xD3B19451L,0x64L,0x22L,0xD1FDL},{0x26L,253UL,0xBE0EL,0x0DA8FB4CL,0xB2L,0L,0xD12DL}},{{0xB4L,250UL,-1L,0x57EC4277L,-10L,0xAAL,4L},{0x41L,254UL,0L,0xF8269F73L,0x70L,0xC2L,-8L},{0x41L,254UL,0L,0xF8269F73L,0x70L,0xC2L,-8L},{0xB4L,250UL,-1L,0x57EC4277L,-10L,0xAAL,4L},{0x26L,253UL,0xBE0EL,0x0DA8FB4CL,0xB2L,0L,0xD12DL},{0UL,7UL,-6L,0xD3B19451L,0x64L,0x22L,0xD1FDL},{0x26L,253UL,0xBE0EL,0x0DA8FB4CL,0xB2L,0L,0xD12DL}},{{0xB4L,250UL,-1L,0x57EC4277L,-10L,0xAAL,4L},{0x41L,254UL,0L,0xF8269F73L,0x70L,0xC2L,-8L},{0x41L,254UL,0L,0xF8269F73L,0x70L,0xC2L,-8L},{0xB4L,250UL,-1L,0x57EC4277L,-10L,0xAAL,4L},{0x26L,253UL,0xBE0EL,0x0DA8FB4CL,0xB2L,0L,0xD12DL},{0UL,7UL,-6L,0xD3B19451L,0x64L,0x22L,0xD1FDL},{0x26L,253UL,0xBE0EL,0x0DA8FB4CL,0xB2L,0L,0xD12DL}}},{{{0xB4L,250UL,-1L,0x57EC4277L,-10L,0xAAL,4L},{0x41L,254UL,0L,0xF8269F73L,0x70L,0xC2L,-8L},{0x41L,254UL,0L,0xF8269F73L,0x70L,0xC2L,-8L},{0xB4L,250UL,-1L,0x57EC4277L,-10L,0xAAL,4L},{0x26L,253UL,0xBE0EL,0x0DA8FB4CL,0xB2L,0L,0xD12DL},{0UL,7UL,-6L,0xD3B19451L,0x64L,0x22L,0xD1FDL},{0x26L,253UL,0xBE0EL,0x0DA8FB4CL,0xB2L,0L,0xD12DL}},{{0xB4L,250UL,-1L,0x57EC4277L,-10L,0xAAL,4L},{0x41L,254UL,0L,0xF8269F73L,0x70L,0xC2L,-8L},{0x41L,254UL,0L,0xF8269F73L,0x70L,0xC2L,-8L},{0xB4L,250UL,-1L,0x57EC4277L,-10L,0xAAL,4L},{0x26L,253UL,0xBE0EL,0x0DA8FB4CL,0xB2L,0L,0xD12DL},{0UL,7UL,-6L,0xD3B19451L,0x64L,0x22L,0xD1FDL},{0x26L,253UL,0xBE0EL,0x0DA8FB4CL,0xB2L,0L,0xD12DL}},{{0xB4L,250UL,-1L,0x57EC4277L,-10L,0xAAL,4L},{0x41L,254UL,0L,0xF8269F73L,0x70L,0xC2L,-8L},{0x41L,254UL,0L,0xF8269F73L,0x70L,0xC2L,-8L},{0xB4L,250UL,-1L,0x57EC4277L,-10L,0xAAL,4L},{0x26L,253UL,0xBE0EL,0x0DA8FB4CL,0xB2L,0L,0xD12DL},{0UL,7UL,-6L,0xD3B19451L,0x64L,0x22L,0xD1FDL},{0x26L,253UL,0xBE0EL,0x0DA8FB4CL,0xB2L,0L,0xD12DL}}},{{{0xB4L,250UL,-1L,0x57EC4277L,-10L,0xAAL,4L},{0x41L,254UL,0L,0xF8269F73L,0x70L,0xC2L,-8L},{0x41L,254UL,0L,0xF8269F73L,0x70L,0xC2L,-8L},{0xB4L,250UL,-1L,0x57EC4277L,-10L,0xAAL,4L},{0x26L,253UL,0xBE0EL,0x0DA8FB4CL,0xB2L,0L,0xD12DL},{0UL,7UL,-6L,0xD3B19451L,0x64L,0x22L,0xD1FDL},{0x26L,253UL,0xBE0EL,0x0DA8FB4CL,0xB2L,0L,0xD12DL}},{{0xB4L,250UL,-1L,0x57EC4277L,-10L,0xAAL,4L},{0x41L,254UL,0L,0xF8269F73L,0x70L,0xC2L,-8L},{0x41L,254UL,0L,0xF8269F73L,0x70L,0xC2L,-8L},{0xB4L,250UL,-1L,0x57EC4277L,-10L,0xAAL,4L},{0x26L,253UL,0xBE0EL,0x0DA8FB4CL,0xB2L,0L,0xD12DL},{0UL,7UL,-6L,0xD3B19451L,0x64L,0x22L,0xD1FDL},{0x26L,253UL,0xBE0EL,0x0DA8FB4CL,0xB2L,0L,0xD12DL}},{{0xB4L,250UL,-1L,0x57EC4277L,-10L,0xAAL,4L},{0x41L,254UL,0L,0xF8269F73L,0x70L,0xC2L,-8L},{0x41L,254UL,0L,0xF8269F73L,0x70L,0xC2L,-8L},{0xB4L,250UL,-1L,0x57EC4277L,-10L,0xAAL,4L},{0x26L,253UL,0xBE0EL,0x0DA8FB4CL,0xB2L,0L,0xD12DL},{0UL,7UL,-6L,0xD3B19451L,0x64L,0x22L,0xD1FDL},{0x26L,253UL,0xBE0EL,0x0DA8FB4CL,0xB2L,0L,0xD12DL}}},{{{0xB4L,250UL,-1L,0x57EC4277L,-10L,0xAAL,4L},{0x41L,254UL,0L,0xF8269F73L,0x70L,0xC2L,-8L},{0x41L,254UL,0L,0xF8269F73L,0x70L,0xC2L,-8L},{0xB4L,250UL,-1L,0x57EC4277L,-10L,0xAAL,4L},{0x26L,253UL,0xBE0EL,0x0DA8FB4CL,0xB2L,0L,0xD12DL},{0UL,7UL,-6L,0xD3B19451L,0x64L,0x22L,0xD1FDL},{0x26L,253UL,0xBE0EL,0x0DA8FB4CL,0xB2L,0L,0xD12DL}},{{0xB4L,250UL,-1L,0x57EC4277L,-10L,0xAAL,4L},{0x41L,254UL,0L,0xF8269F73L,0x70L,0xC2L,-8L},{0x41L,254UL,0L,0xF8269F73L,0x70L,0xC2L,-8L},{0xB4L,250UL,-1L,0x57EC4277L,-10L,0xAAL,4L},{0x26L,253UL,0xBE0EL,0x0DA8FB4CL,0xB2L,0L,0xD12DL},{0UL,7UL,-6L,0xD3B19451L,0x64L,0x22L,0xD1FDL},{0x26L,253UL,0xBE0EL,0x0DA8FB4CL,0xB2L,0L,0xD12DL}},{{0xB4L,250UL,-1L,0x57EC4277L,-10L,0xAAL,4L},{0x41L,254UL,0L,0xF8269F73L,0x70L,0xC2L,-8L},{0x41L,254UL,0L,0xF8269F73L,0x70L,0xC2L,-8L},{0xB4L,250UL,-1L,0x57EC4277L,-10L,0xAAL,4L},{0x26L,253UL,0xBE0EL,0x0DA8FB4CL,0xB2L,0L,0xD12DL},{0UL,7UL,-6L,0xD3B19451L,0x64L,0x22L,0xD1FDL},{0x26L,253UL,0xBE0EL,0x0DA8FB4CL,0xB2L,0L,0xD12DL}}},{{{0xB4L,250UL,-1L,0x57EC4277L,-10L,0xAAL,4L},{0x41L,254UL,0L,0xF8269F73L,0x70L,0xC2L,-8L},{0x41L,254UL,0L,0xF8269F73L,0x70L,0xC2L,-8L},{0xB4L,250UL,-1L,0x57EC4277L,-10L,0xAAL,4L},{0x26L,253UL,0xBE0EL,0x0DA8FB4CL,0xB2L,0L,0xD12DL},{0UL,7UL,-6L,0xD3B19451L,0x64L,0x22L,0xD1FDL},{0x26L,253UL,0xBE0EL,0x0DA8FB4CL,0xB2L,0L,0xD12DL}},{{0xB4L,250UL,-1L,0x57EC4277L,-10L,0xAAL,4L},{0x41L,254UL,0L,0xF8269F73L,0x70L,0xC2L,-8L},{0x41L,254UL,0L,0xF8269F73L,0x70L,0xC2L,-8L},{0xB4L,250UL,-1L,0x57EC4277L,-10L,0xAAL,4L},{0x26L,253UL,0xBE0EL,0x0DA8FB4CL,0xB2L,0L,0xD12DL},{248UL,0xEAL,0xEFF2L,0xB687CD04L,-9L,-10L,-1L},{0xFBL,247UL,-1L,-1L,0L,0x51L,0x07CDL}},{{0x41L,254UL,0L,0xF8269F73L,0x70L,0xC2L,-8L},{0UL,7UL,-6L,0xD3B19451L,0x64L,0x22L,0xD1FDL},{0UL,7UL,-6L,0xD3B19451L,0x64L,0x22L,0xD1FDL},{0x41L,254UL,0L,0xF8269F73L,0x70L,0xC2L,-8L},{0xFBL,247UL,-1L,-1L,0L,0x51L,0x07CDL},{248UL,0xEAL,0xEFF2L,0xB687CD04L,-9L,-10L,-1L},{0xFBL,247UL,-1L,-1L,0L,0x51L,0x07CDL}}}};
    struct S0 *l_480 = &l_224[2][1][0];
    int i, j, k;
    for (g_13 = (-9); (g_13 <= 20); ++g_13)
    { 
        uint8_t l_60[1][7][1] = {{{0xD3L},{255UL},{0xD3L},{255UL},{0xD3L},{255UL},{0xD3L}}};
        int32_t **l_479 = &g_177;
        struct S0 *l_481 = &g_385;
        int i, j, k;
        (*l_479) = func_57(l_60[0][0][0], func_61((safe_rshift_func_uint8_t_u_s(((l_60[0][0][0] & (safe_lshift_func_int16_t_s_s(g_16, func_71(func_73(l_75))))) , 255UL), g_2)), g_222, l_60[0][1][0], l_224[2][1][0], g_2));
        return l_481;
    }
    return &g_346;
}



static int32_t * func_57(uint32_t  p_58, int64_t * p_59)
{ 
    int32_t l_249[6][7][4] = {{{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}},{{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}},{{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}},{{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}},{{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}},{{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}}};
    uint64_t l_263 = 0xEBEBF65EF6CE2435LL;
    uint32_t *l_268 = &g_166[0];
    uint32_t l_307 = 0xA4D43317L;
    int32_t **l_308 = &g_177;
    int32_t ***l_309 = &l_308;
    uint8_t l_310 = 0x16L;
    uint16_t *l_312 = &g_238;
    uint16_t l_387[2];
    struct S0 l_397[3] = {{1UL,1UL,0x819EL,0x471300C7L,-4L,-1L,0L},{1UL,1UL,0x819EL,0x471300C7L,-4L,-1L,0L},{1UL,1UL,0x819EL,0x471300C7L,-4L,-1L,0L}};
    int32_t l_411 = 0L;
    uint64_t l_455 = 0UL;
    uint16_t l_461 = 0x2C51L;
    int32_t *l_464 = &l_397[1].f3;
    int32_t *l_465 = &l_411;
    int32_t *l_466 = &l_397[1].f3;
    int32_t *l_467 = &g_170;
    int32_t *l_468 = &g_170;
    int32_t *l_469 = &g_144;
    int32_t *l_470 = &g_346.f3;
    int32_t *l_471 = (void*)0;
    int32_t *l_472[6][7] = {{&g_123.f3,&l_397[1].f3,&g_144,&l_397[1].f3,&l_397[1].f3,&l_397[1].f3,(void*)0},{(void*)0,&g_144,&g_123.f3,(void*)0,&g_385.f3,&l_397[1].f3,&l_411},{&g_144,&g_170,&g_385.f3,&g_123.f3,&l_411,&l_411,&g_123.f3},{(void*)0,(void*)0,(void*)0,&l_411,&l_411,&g_170,&g_123.f3},{&l_397[1].f3,&l_411,&l_397[1].f3,&l_397[1].f3,&g_123.f3,(void*)0,&l_411},{&g_144,(void*)0,&g_170,&l_411,&l_411,&g_170,(void*)0}};
    int8_t l_473 = 0L;
    uint32_t l_474 = 0x1A29EAC0L;
    struct S0 *l_477 = &l_397[1];
    int32_t *l_478 = &g_144;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_387[i] = 0UL;
    for (g_123.f0 = 12; (g_123.f0 >= 45); ++g_123.f0)
    { 
        uint32_t *l_270 = &g_166[2];
        uint32_t **l_269[5] = {&l_268,&l_268,&l_268,&l_268,&l_268};
        const int32_t l_274 = 0xD72B920CL;
        int32_t *l_276 = (void*)0;
        int32_t *l_277 = &g_123.f3;
        int i;
        if (p_58)
            break;
        for (g_223 = 0; (g_223 < 23); g_223++)
        { 
            uint8_t l_250 = 0xACL;
            for (g_123.f6 = 0; (g_123.f6 <= (-4)); --g_123.f6)
            { 
                int32_t *l_248[4][7][7] = {{{&g_170,&g_170,&g_123.f3,&g_123.f3,&g_13,&g_144,(void*)0},{&g_123.f3,&g_144,&g_123.f3,&g_170,&g_170,&g_123.f3,&g_144},{(void*)0,&g_13,&g_123.f3,&g_123.f3,&g_170,&g_123.f3,&g_13},{(void*)0,&g_170,&g_13,&g_144,&g_13,&g_123.f3,&g_123.f3},{&g_123.f3,&g_170,&g_123.f3,&g_123.f3,&g_170,&g_123.f3,(void*)0},{&g_13,&g_123.f3,&g_123.f3,&g_170,&g_123.f3,&g_13,&g_170},{&g_13,&g_13,&g_13,&g_123.f3,&g_170,&g_170,&g_170}},{{&g_123.f3,&g_123.f3,&g_123.f3,&g_123.f3,&g_170,&g_170,&g_123.f3},{&g_123.f3,&g_170,&g_123.f3,&g_13,(void*)0,&g_144,&g_123.f3},{&g_13,&g_170,&g_123.f3,(void*)0,&g_13,(void*)0,&g_123.f3},{&g_13,&g_13,&g_144,&g_170,&g_144,(void*)0,&g_170},{&g_123.f3,&g_144,&g_170,&g_123.f3,&g_13,&g_144,&g_170},{(void*)0,&g_170,&g_144,&g_170,&g_144,&g_170,(void*)0},{(void*)0,(void*)0,&g_123.f3,&g_170,&g_13,&g_170,&g_123.f3}},{{&g_123.f3,&g_123.f3,&g_170,&g_123.f3,(void*)0,&g_13,&g_13},{&g_170,&g_170,&g_123.f3,&g_170,&g_170,&g_123.f3,&g_144},{&g_144,&g_170,&g_144,(void*)0,&g_170,&g_123.f3,(void*)0},{&g_170,&g_123.f3,&g_170,&g_13,&g_123.f3,&g_123.f3,&g_13},{&g_144,(void*)0,&g_144,&g_123.f3,&g_170,&g_123.f3,&g_13},{&g_170,&g_170,&g_123.f3,&g_123.f3,&g_13,&g_144,(void*)0},{&g_123.f3,&g_144,&g_123.f3,&g_170,&g_170,&g_123.f3,&g_144}},{{(void*)0,&g_13,&g_13,&g_123.f3,&g_144,&g_144,&g_123.f3},{&g_123.f3,&g_170,&g_13,&g_170,&g_123.f3,(void*)0,&g_13},{&g_170,&g_13,&g_123.f3,&g_123.f3,&g_13,&g_170,&g_123.f3},{&g_13,&g_13,&g_123.f3,&g_144,&g_144,&g_123.f3,&g_13},{&g_123.f3,&g_123.f3,&g_13,&g_170,&g_123.f3,&g_13,&g_123.f3},{&g_144,&g_13,&g_13,&g_144,&g_170,&g_144,(void*)0},{&g_144,&g_13,&g_123.f3,&g_123.f3,&g_170,&g_170,&g_123.f3}}};
                int i, j, k;
                ++l_250;
            }
            for (g_123.f5 = 1; (g_123.f5 <= (-3)); g_123.f5 = safe_sub_func_uint64_t_u_u(g_123.f5, 1))
            { 
                int64_t l_255 = 0x8734E80F069B4DB9LL;
                int32_t *l_256 = &g_123.f3;
                int32_t l_257 = 0x06C59208L;
                int32_t *l_258 = &g_123.f3;
                int32_t *l_259 = (void*)0;
                int32_t *l_260 = (void*)0;
                int32_t l_261 = 1L;
                int32_t *l_262[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_262[i] = &l_257;
                l_263--;
            }
        }
        (*l_277) = (((l_268 == (g_271 = &g_166[0])) , (safe_rshift_func_int16_t_s_s(g_123.f6, l_274))) == (!p_58));
    }
    if ((((-5L) == ((*l_312) = (~((safe_div_func_int32_t_s_s(((((safe_add_func_uint64_t_u_u((5L < (safe_mod_func_int32_t_s_s((((safe_div_func_int64_t_s_s((p_58 && (((((safe_div_func_int32_t_s_s((safe_add_func_uint32_t_u_u(((*l_268) = (safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s(((((*g_222) = (safe_rshift_func_uint8_t_u_s((((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s((p_58 , (p_58 ^ l_307)), (((*l_309) = l_308) == &g_177))), l_310)) == p_58), 6)), g_311)) != 0x2AL) & p_58), 5))) < (-4L)) ^ (*p_59)), 1UL)), 0xB111EF7BL))), p_58)), p_58)) < l_307) >= 0xEBCBL) != p_58) || 0UL)), g_170)) != (-3L)) > p_58), g_123.f5))), p_58)) >= g_47[1]) && 0xE16EAFACL) & 255UL), p_58)) , p_58)))) <= p_58))
    { 
        uint16_t *l_325 = &g_238;
        int32_t l_338 = 0xBDD5C616L;
        int64_t l_339 = 0xA2BE24FA4196A91DLL;
        struct S0 *l_345[2][1][1];
        const union U1 *l_353[5][7] = {{(void*)0,&g_134,(void*)0,&g_134,&g_134,&g_134,&g_134},{&g_134,(void*)0,&g_134,(void*)0,&g_134,&g_134,(void*)0},{(void*)0,&g_134,(void*)0,&g_134,&g_134,&g_134,&g_134},{&g_134,(void*)0,&g_134,(void*)0,&g_134,&g_134,(void*)0},{(void*)0,&g_134,(void*)0,&g_134,&g_134,&g_134,&g_134}};
        uint32_t l_388 = 18446744073709551609UL;
        int32_t ***l_392 = &l_308;
        int32_t l_413 = 0xF9B4017CL;
        int32_t l_415 = 0x81BAD5A2L;
        int32_t *l_423 = &g_385.f3;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_345[i][j][k] = &g_346;
            }
        }
        for (g_123.f5 = 0; (g_123.f5 < (-18)); g_123.f5 = safe_sub_func_uint8_t_u_u(g_123.f5, 1))
        { 
            const int32_t l_340 = (-2L);
            int32_t l_352 = 0x0F741C8FL;
            struct S0 * const *l_364[1][4][1] = {{{&l_345[1][0][0]},{(void*)0},{&l_345[1][0][0]},{(void*)0}}};
            struct S0 * const **l_363 = &l_364[0][2][0];
            int32_t l_398[3][3];
            uint16_t l_401[3][7] = {{0x77B0L,0x1865L,0x77B0L,0x1865L,0x77B0L,0x1865L,0x77B0L},{0xA1F1L,0xA1F1L,0xAB18L,0xAB18L,0xA1F1L,0xA1F1L,0xAB18L},{0x14D9L,0x1865L,0x14D9L,0x1865L,0x14D9L,0x1865L,0x14D9L}};
            int32_t l_405 = 0x85FE07A8L;
            int16_t l_409[7] = {0xAAE1L,0x7320L,0x7320L,0xAAE1L,0x7320L,0x7320L,0xAAE1L};
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                    l_398[i][j] = 1L;
            }
            for (g_115 = 0; (g_115 != 59); ++g_115)
            { 
                int32_t l_347[4];
                int32_t *l_370 = &g_346.f3;
                int i;
                for (i = 0; i < 4; i++)
                    l_347[i] = 0x3EE16D20L;
                for (g_223 = 0; (g_223 == 32); g_223++)
                { 
                    uint16_t *l_326 = &g_238;
                    uint64_t *l_337 = &g_140;
                    uint64_t *l_341 = &l_263;
                    int32_t *l_342 = &g_144;
                    struct S0 *l_344[3];
                    struct S0 **l_343[1][5] = {{&l_344[1],&l_344[1],&l_344[1],&l_344[1],&l_344[1]}};
                    int32_t *l_348 = &l_338;
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_344[i] = &g_123;
                    (*l_342) ^= (((((0x72C45AEDE10BE39DLL > ((*l_341) = (0L >= (((((*p_59) = ((safe_div_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((l_325 == l_326), (safe_sub_func_uint64_t_u_u((safe_mod_func_int8_t_s_s(p_58, g_123.f6)), (((*l_337) = (safe_unary_minus_func_uint16_t_u((+(safe_rshift_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(0xA923L, 0xBB5EL)) != 0x0209112DL), 1)))))) & l_338))))) >= l_339), (*g_222))), l_340)) && p_58)) | g_123.f6) ^ p_58) < p_58)))) > g_134.f0.f3) >= g_134.f0.f2) && 0x1A60L) || 1L);
                    (*l_342) |= ((l_345[0][0][0] = &g_123) == (void*)0);
                    (*l_348) &= (((g_47[1] ^ (((*l_342) |= p_58) , (-1L))) <= 0xF848F689L) ^ l_347[0]);
                }
                for (g_103 = (-11); (g_103 != 13); g_103 = safe_add_func_int8_t_s_s(g_103, 8))
                { 
                    int32_t *l_351[4] = {&g_123.f3,&g_123.f3,&g_123.f3,&g_123.f3};
                    int i;
                    l_338 &= p_58;
                    l_338 |= (l_352 ^= g_346.f3);
                }
                if (l_339)
                { 
                    const union U1 **l_354 = &l_353[3][1];
                    int16_t *l_367 = &g_123.f2;
                    int32_t *l_368 = &g_123.f3;
                    (*l_354) = l_353[3][4];
                    (*l_368) = (safe_sub_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(l_352, ((*l_367) = (safe_mul_func_int8_t_s_s(((((g_47[1] = 9L) , (safe_rshift_func_int8_t_s_u(((l_363 != &l_364[0][1][0]) <= ((safe_add_func_int8_t_s_s((g_98[5][0] , p_58), (((p_58 ^ (*p_59)) < 0UL) == p_58))) < p_58)), 7))) ^ (*g_271)) | l_340), p_58))))) & p_58), 0x5CC2L));
                }
                else
                { 
                    int32_t *l_369 = &l_352;
                    return l_370;
                }
                for (g_346.f0 = 1; (g_346.f0 < 59); g_346.f0++)
                { 
                    uint32_t l_375[1];
                    int16_t l_380 = 0x7C08L;
                    int8_t *l_384 = &g_123.f5;
                    uint32_t l_386 = 0x82F9C2A6L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_375[i] = 1UL;
                    (*l_308) = ((p_58 = ((((*g_271) = (safe_lshift_func_int16_t_s_u(l_375[0], 14))) < ((safe_add_func_int32_t_s_s(((*l_370) = ((safe_div_func_uint64_t_u_u(l_380, ((*p_59) = l_340))) >= (((~l_340) & ((((((void*)0 == l_384) & ((g_385 , l_353[3][4]) != (void*)0)) , l_386) , p_58) > l_387[0])) , l_339))), l_388)) <= (*g_222))) , (*g_271))) , l_370);
                    (*l_308) = &g_144;
                }
            }
            for (l_339 = 1; (l_339 >= 0); l_339 -= 1)
            { 
                int16_t l_393 = 0x4469L;
                const int32_t *l_394 = &g_123.f3;
                int32_t *l_396 = (void*)0;
                uint8_t *l_404 = &g_98[5][0];
                uint8_t **l_403 = &l_404;
                uint8_t ***l_402 = &l_403;
                int32_t l_408 = (-1L);
                int32_t l_410 = 8L;
                int32_t l_412 = 0xC8C1FC92L;
                int32_t l_414 = 4L;
                uint32_t l_416 = 0UL;
                uint64_t l_419 = 0x2C0CD190377EB335LL;
                l_338 |= (!(g_390 != l_392));
                if ((l_393 ^= 0x940985B5L))
                { 
                    g_395 = l_394;
                    return l_396;
                }
                else
                { 
                    g_346 = l_397[1];
                }
                for (l_352 = 3; (l_352 >= 0); l_352 -= 1)
                { 
                    int32_t *l_406[6][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                    int i, j, k;
                    l_405 &= ((l_398[0][0] ^= g_143[l_339]) > ((safe_add_func_uint16_t_u_u(8UL, (l_387[l_339] < (l_387[l_339] | (((l_387[l_339] , (((l_249[(l_339 + 1)][(l_339 + 2)][l_352] > (((l_401[2][0] && (*g_271)) , (void*)0) == l_402)) ^ (*p_59)) == 0x2BF71376L)) > p_58) == g_123.f1))))) && 0x6D56L));
                    if (p_58)
                        continue;
                    (**l_392) = l_406[5][0];
                    l_338 |= l_401[2][0];
                }
                for (g_123.f1 = 0; (g_123.f1 <= 1); g_123.f1 += 1)
                { 
                    int32_t *l_407[2];
                    uint32_t *l_422 = &l_416;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_407[i] = (void*)0;
                    --l_416;
                    if (g_143[g_123.f1])
                        continue;
                    if (p_58)
                        break;
                    l_338 |= p_58;
                    l_411 = ((g_346.f6 |= ((l_419 && (g_238 , (p_58 || g_385.f5))) , (((*l_422) = ((*g_271) = ((*g_222) < (((safe_div_func_uint32_t_u_u((l_398[0][0] & (l_405 >= g_223)), (*g_271))) , l_352) , g_143[1])))) | 0xE6279D0BL))) == 0xF714L);
                }
            }
            return l_423;
        }
    }
    else
    { 
        struct S0 l_424 = {1UL,247UL,-7L,1L,-9L,4L,8L};
        int32_t *l_425 = &l_397[1].f3;
        int32_t **l_426 = (void*)0;
        int32_t **l_427 = &l_425;
        int8_t *l_454 = &g_385.f5;
        (*l_427) = ((*l_308) = (l_424 , l_425));
        (**l_309) = (void*)0;
        for (p_58 = (-23); (p_58 >= 51); p_58 = safe_add_func_uint64_t_u_u(p_58, 9))
        { 
            int32_t **l_432 = &g_177;
            int8_t *l_451 = &l_397[1].f5;
            int32_t *l_456 = (void*)0;
            int32_t l_457[2];
            int32_t *l_458 = &g_346.f3;
            int32_t *l_459 = &g_346.f3;
            int32_t *l_460 = &g_123.f3;
            int i;
            for (i = 0; i < 2; i++)
                l_457[i] = 0xDF07027BL;
            (*l_425) |= (0x1D747827F66A1259LL && (safe_mod_func_uint8_t_u_u(((((l_432 != &l_425) || g_134.f0.f1) , (safe_mul_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_u((((safe_add_func_int32_t_s_s(((*l_432) != (void*)0), ((((safe_mul_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(((-8L) > 0UL), p_58)) != 7L), 0xEE81L)) , 0x1C3A0EA7L) > (*g_271)) || g_385.f3))) , p_58) , p_58), p_58)) < p_58) , (*g_222)), (-3L)))) , p_58), 251UL)));
            l_457[0] |= ((safe_mod_func_uint32_t_u_u(((((safe_rshift_func_int8_t_s_s((*l_425), ((((*l_451) &= (safe_rshift_func_uint16_t_u_s(0x9C90L, g_123.f3))) != g_385.f1) == (safe_rshift_func_int8_t_s_u(((g_16 , (l_454 != (void*)0)) | l_455), 7))))) , &g_223) != (void*)0) > g_134.f0.f0), p_58)) | 0xBF4510F9D1D51727LL);
            l_461--;
            (*l_432) = (*l_427);
        }
    }
    l_474--;
    (*l_477) = g_346;
    (*l_469) |= ((p_58 < 0x46L) > (*p_59));
    return l_478;
}



static int64_t * func_61(int16_t  p_62, uint16_t * p_63, int32_t  p_64, struct S0  p_65, uint64_t  p_66)
{ 
    uint16_t *l_237 = &g_238;
    int32_t l_239 = 0L;
    int32_t **l_240 = &g_177;
    int64_t *l_241 = &g_47[0];
    (*l_240) = (((safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((+((*p_63) | ((!0x0547CBADA1B3B349LL) < (((safe_div_func_int32_t_s_s(p_64, p_65.f1)) != ((*l_237) = (0x79L == p_65.f4))) & 0UL)))) || l_239), (*g_222))), 3UL)) >= l_239) , &l_239);
    return l_241;
}



static const int16_t  func_71(int32_t  p_72)
{ 
    int32_t *l_106[7][2] = {{&g_13,&g_13},{&g_13,&g_13},{&g_13,&g_13},{&g_13,&g_13},{&g_13,&g_13},{&g_13,&g_13},{&g_13,&g_13}};
    int32_t **l_107 = &l_106[0][0];
    uint8_t *l_114 = &g_115;
    int64_t l_125[3];
    uint32_t l_126 = 0x0368A9B8L;
    struct S0 *l_132 = &g_123;
    union U1 l_187 = {{0x48L,6UL,0x476EL,0xAB4B5E31L,9L,0x83L,9L}};
    uint64_t l_192 = 0xE84AB6B2F1F73366LL;
    int i, j;
    for (i = 0; i < 3; i++)
        l_125[i] = 0x33A15E26FEE090ECLL;
    (*l_107) = l_106[4][0];
    if ((safe_lshift_func_int8_t_s_u((((safe_rshift_func_uint8_t_u_u((g_98[0][0] = 0xFCL), (safe_lshift_func_uint8_t_u_s(((*l_114) = g_88[3]), ((safe_mul_func_int16_t_s_s(((safe_div_func_uint16_t_u_u((0x67B376A3B40187A3LL != (safe_unary_minus_func_uint64_t_u((l_125[2] = (safe_mod_func_uint64_t_u_u(((g_123 , 0xD65EL) | (~(g_47[1] >= p_72))), g_13)))))), (-7L))) , (-4L)), 7UL)) , p_72))))) || p_72) ^ g_16), l_126)))
    { 
        struct S0 l_127[4][5][6] = {{{{0x93L,0x78L,3L,5L,0x6DL,0x0FL,0L},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{0x93L,0x78L,3L,5L,0x6DL,0x0FL,0L},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L}},{{0x93L,0x78L,3L,5L,0x6DL,0x0FL,0L},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{0x93L,0x78L,3L,5L,0x6DL,0x0FL,0L},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L}},{{0x93L,0x78L,3L,5L,0x6DL,0x0FL,0L},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{0x93L,0x78L,3L,5L,0x6DL,0x0FL,0L},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L}},{{0x93L,0x78L,3L,5L,0x6DL,0x0FL,0L},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{0x93L,0x78L,3L,5L,0x6DL,0x0FL,0L},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L}},{{0x93L,0x78L,3L,5L,0x6DL,0x0FL,0L},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{0x93L,0x78L,3L,5L,0x6DL,0x0FL,0L},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L}}},{{{0x93L,0x78L,3L,5L,0x6DL,0x0FL,0L},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{0x93L,0x78L,3L,5L,0x6DL,0x0FL,0L},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L}},{{0x93L,0x78L,3L,5L,0x6DL,0x0FL,0L},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{0x93L,0x78L,3L,5L,0x6DL,0x0FL,0L},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL}},{{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL}},{{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL}},{{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL}}},{{{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL}},{{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL}},{{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL}},{{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL}},{{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL}}},{{{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL}},{{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL}},{{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL}},{{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL}},{{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{0xA2L,255UL,3L,-5L,1L,0L,0x64E0L},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL},{247UL,0x49L,0xDC33L,0xCF46C250L,-10L,5L,0x3E8DL}}}};
        struct S0 **l_138 = &l_132;
        int8_t l_139 = 0x00L;
        union U1 l_156 = {{255UL,7UL,-3L,0x09D05E8DL,-1L,0L,0x0CDFL}};
        int i, j, k;
        for (l_126 = 0; (l_126 <= 2); l_126 += 1)
        { 
            struct S0 *l_128 = &l_127[2][1][4];
            struct S0 *l_129[3];
            struct S0 l_130 = {255UL,0x17L,0x3202L,0L,0x49L,0L,0x5FD5L};
            struct S0 **l_131[5];
            const uint8_t *l_150 = (void*)0;
            const uint8_t **l_149 = &l_150;
            int i;
            for (i = 0; i < 3; i++)
                l_129[i] = &g_123;
            for (i = 0; i < 5; i++)
                l_131[i] = &l_129[0];
            l_130 = (g_123 = ((*l_128) = l_127[0][3][4]));
            if (p_72)
                continue;
            l_132 = &l_130;
            (*l_107) = &p_72;
            if (((&l_129[2] == &l_132) || (!((g_134 , ((safe_mul_func_int8_t_s_s((((&p_72 == ((*l_107) = &p_72)) , &g_16) == (void*)0), l_130.f1)) | p_72)) > 0x4DDFB9F2CFB6CEFELL))))
            { 
                struct S0 ***l_137[1][7];
                int32_t l_148[1];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_137[i][j] = &l_131[3];
                }
                for (i = 0; i < 1; i++)
                    l_148[i] = 0x7E747D96L;
                l_138 = &l_132;
                g_140--;
                g_123 = (*l_132);
                (*l_128) = (**l_138);
                if ((l_127[0][3][4].f3 |= 0xB885A690L))
                { 
                    (*l_107) = &p_72;
                    p_72 &= 0x7EA974B9L;
                    if (p_72)
                        break;
                    if (p_72)
                        break;
                }
                else
                { 
                    uint8_t l_145 = 1UL;
                    const uint8_t ***l_151[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_151[i] = &l_149;
                    ++l_145;
                    l_148[0] = g_13;
                    g_152 = l_149;
                }
            }
            else
            { 
                uint32_t *l_154 = &g_155;
                uint32_t *l_165[2];
                int32_t l_167 = 0x4424C02BL;
                int64_t *l_168 = &g_47[1];
                int32_t l_169 = 6L;
                int i;
                for (i = 0; i < 2; i++)
                    l_165[i] = &g_166[0];
                if ((l_169 &= (((*l_154) = (((l_125[l_126] = (!0UL)) > p_72) , g_93)) < (l_156 , (((safe_div_func_int8_t_s_s(((l_156.f0.f3 | ((*l_168) = (safe_sub_func_int64_t_s_s((safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(1UL, ((((((l_167 ^= 0UL) & g_134.f0.f5) ^ g_123.f2) && g_134.f0.f1) != p_72) , p_72))), l_127[0][3][4].f2)), 0L)))) , 0L), l_156.f0.f6)) != g_103) == g_134.f0.f5)))))
                { 
                    if (l_169)
                        break;
                    ++g_171;
                }
                else
                { 
                    uint64_t l_174 = 0x5C13A696D1F904BCLL;
                    l_174--;
                    if (g_134.f0.f5)
                        continue;
                }
                g_170 = 0xC898DBEBL;
                (**l_138) = (**l_138);
            }
        }
        g_177 = (*l_107);
lbl_186:
        (*l_138) = (void*)0;
        g_170 = 0xE098D1B7L;
        for (l_126 = 2; (l_126 >= 5); l_126++)
        { 
            int32_t *l_185 = &g_123.f3;
            struct S0 l_193 = {255UL,0x8BL,0x2D74L,0x87338087L,0x1AL,0L,0xB852L};
            int32_t l_201 = 0xDCAB98A7L;
            uint64_t l_203 = 0x9DFB2C95BC61E929LL;
            uint32_t *l_210 = &g_166[0];
            int8_t *l_219 = (void*)0;
            int8_t *l_220 = &g_88[3];
            uint64_t *l_221 = &l_192;
            for (l_156.f0.f0 = (-23); (l_156.f0.f0 <= 14); l_156.f0.f0 = safe_add_func_uint32_t_u_u(l_156.f0.f0, 6))
            { 
                int64_t * const l_190 = &l_125[2];
                int32_t l_198 = 0x5BBC914BL;
                int32_t l_199 = 0x69B105BAL;
                int32_t l_200 = 0x0BACE065L;
                int32_t l_202 = 0x568317A6L;
                for (p_72 = 1; (p_72 >= 0); p_72 -= 1)
                { 
                    l_127[0][3][4].f3 &= ((~(safe_rshift_func_uint8_t_u_s(1UL, 0))) ^ 0x91L);
                    if (p_72)
                        break;
                    (*l_107) = l_185;
                }
                if (l_126)
                    goto lbl_186;
                (*l_185) = (l_187 , 1L);
                if (((g_166[0] < (p_72 , (l_190 == &l_125[2]))) , p_72))
                { 
                    (*l_107) = &g_170;
                    (*l_107) = &g_13;
                    (*l_107) = &g_144;
                }
                else
                { 
                    uint8_t **l_191 = &l_114;
                    struct S0 *l_194 = (void*)0;
                    struct S0 *l_195 = &l_127[3][3][5];
                    (*l_185) |= ((((*l_191) = l_114) == (void*)0) <= (l_192 && g_123.f5));
                    (*l_195) = l_193;
                    (*l_185) = (safe_rshift_func_int8_t_s_u((*l_185), 5));
                }
                l_203--;
            }
            if (p_72)
                continue;
            (*l_185) = (&l_125[2] == &g_95);
            l_127[0][3][4].f3 |= (g_170 = ((*l_185) = (safe_add_func_int64_t_s_s((g_115 , (&g_94 == (((((p_72 = ((safe_mul_func_uint8_t_u_u((((*l_221) ^= (g_123.f2 != ((*l_220) &= ((p_72 && (0x5AF55B03L ^ (--(*l_210)))) >= (safe_rshift_func_int16_t_s_s((safe_div_func_int64_t_s_s(((safe_rshift_func_int16_t_s_u(0x662FL, 8)) >= (((void*)0 == l_219) , 0x410CA4D4BF2FAA02LL)), p_72)), 3)))))) <= (*l_185)), l_127[0][3][4].f0)) >= l_139)) && p_72) || p_72) , 0xD9L) , &g_94))), l_127[0][3][4].f1))));
        }
    }
    else
    { 
        (*l_132) = (*l_132);
    }
    return p_72;
}



static int32_t  func_73(const int32_t * p_74)
{ 
    int32_t l_80[7][1][1];
    int8_t *l_87 = &g_88[3];
    int64_t *l_89 = (void*)0;
    const int64_t **l_90 = (void*)0;
    const int64_t *l_92 = &g_93;
    const int64_t **l_91[2];
    uint8_t *l_96 = (void*)0;
    uint8_t *l_97 = &g_98[5][0];
    int32_t *l_99 = &l_80[6][0][0];
    int32_t *l_100 = &l_80[6][0][0];
    int32_t *l_101 = &l_80[0][0][0];
    int32_t *l_102[5] = {&l_80[4][0][0],&l_80[4][0][0],&l_80[4][0][0],&l_80[4][0][0],&l_80[4][0][0]};
    int i, j, k;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_80[i][j][k] = 0L;
        }
    }
    for (i = 0; i < 2; i++)
        l_91[i] = &l_92;
    (*l_99) = (safe_add_func_uint8_t_u_u(((((*l_97) = (safe_mul_func_uint8_t_u_u((0x570CL | (l_80[6][0][0] < (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((g_47[1] | (safe_sub_func_int64_t_s_s(g_2, (((*l_87) = (-1L)) != (l_89 == (g_94 = l_89)))))) < g_13), l_80[6][0][0])), l_80[6][0][0])))), (-3L)))) , 0x2F02L) < l_80[6][0][0]), 1L));
    g_103++;
    return g_98[0][0];
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_28[i], "g_28[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_47[i], "g_47[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_88[i], "g_88[i]", print_hash_value);

    }
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_98[i][j], "g_98[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_123.f0, "g_123.f0", print_hash_value);
    transparent_crc(g_123.f1, "g_123.f1", print_hash_value);
    transparent_crc(g_123.f2, "g_123.f2", print_hash_value);
    transparent_crc(g_123.f3, "g_123.f3", print_hash_value);
    transparent_crc(g_123.f4, "g_123.f4", print_hash_value);
    transparent_crc(g_123.f5, "g_123.f5", print_hash_value);
    transparent_crc(g_123.f6, "g_123.f6", print_hash_value);
    transparent_crc(g_134.f0.f0, "g_134.f0.f0", print_hash_value);
    transparent_crc(g_134.f0.f1, "g_134.f0.f1", print_hash_value);
    transparent_crc(g_134.f0.f2, "g_134.f0.f2", print_hash_value);
    transparent_crc(g_134.f0.f3, "g_134.f0.f3", print_hash_value);
    transparent_crc(g_134.f0.f4, "g_134.f0.f4", print_hash_value);
    transparent_crc(g_134.f0.f5, "g_134.f0.f5", print_hash_value);
    transparent_crc(g_134.f0.f6, "g_134.f0.f6", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_143[i], "g_143[i]", print_hash_value);

    }
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_166[i], "g_166[i]", print_hash_value);

    }
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    transparent_crc(g_346.f0, "g_346.f0", print_hash_value);
    transparent_crc(g_346.f1, "g_346.f1", print_hash_value);
    transparent_crc(g_346.f2, "g_346.f2", print_hash_value);
    transparent_crc(g_346.f3, "g_346.f3", print_hash_value);
    transparent_crc(g_346.f4, "g_346.f4", print_hash_value);
    transparent_crc(g_346.f5, "g_346.f5", print_hash_value);
    transparent_crc(g_346.f6, "g_346.f6", print_hash_value);
    transparent_crc(g_385.f0, "g_385.f0", print_hash_value);
    transparent_crc(g_385.f1, "g_385.f1", print_hash_value);
    transparent_crc(g_385.f2, "g_385.f2", print_hash_value);
    transparent_crc(g_385.f3, "g_385.f3", print_hash_value);
    transparent_crc(g_385.f4, "g_385.f4", print_hash_value);
    transparent_crc(g_385.f5, "g_385.f5", print_hash_value);
    transparent_crc(g_385.f6, "g_385.f6", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_515[i][j], "g_515[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_573, "g_573", print_hash_value);
    transparent_crc(g_596, "g_596", print_hash_value);
    transparent_crc(g_671, "g_671", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_695[i], "g_695[i]", print_hash_value);

    }
    transparent_crc(g_1068, "g_1068", print_hash_value);
    transparent_crc(g_1295, "g_1295", print_hash_value);
    transparent_crc(g_1342, "g_1342", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
