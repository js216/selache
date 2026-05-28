// SPDX-License-Identifier: MIT
// cctest_csmith_954bf30d.c --- cctest case csmith_954bf30d (csmith seed 2504782605)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xd539a071 */
/* @exp_ticks 0x146c3 */

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

// Options:   -s 2504782605 -o /tmp/csmith_gen_fnh_1dpl/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint64_t  f0;
   int16_t  f1;
   uint64_t  f2;
   int32_t  f3;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int32_t  f0;
   int16_t  f1;
   uint32_t  f2;
   uint16_t  f3;
   int8_t  f4;
   uint16_t  f5;
};
#pragma pack(pop)

union U2 {
   const uint64_t  f0;
   const int8_t  f1;
   int16_t  f2;
};


static struct S1 g_2 = {0xEF6B8F3DL,3L,0xE164CAF1L,1UL,8L,1UL};
static uint8_t g_24 = 255UL;
static uint32_t g_40 = 0UL;
static uint32_t g_43[5][5][3] = {{{0x67AFFF16L,0UL,5UL},{0x2C910760L,0x2C910760L,4294967295UL},{0xF785B8EEL,0x2C910760L,0x28EC7DFFL},{0xDE2E510BL,0UL,0x2C910760L},{8UL,0xC84C923FL,0xD4AD4463L}},{{5UL,0xDE2E510BL,0x2C910760L},{0xE2401904L,0x28EC7DFFL,0x28EC7DFFL},{7UL,0UL,4294967295UL},{7UL,4294967295UL,5UL},{0xE2401904L,0xF785B8EEL,0x5A258D3BL}},{{5UL,8UL,0xE65C5BCCL},{8UL,0xF785B8EEL,0x67AFFF16L},{0xDE2E510BL,4294967295UL,0xDE2E510BL},{0xF785B8EEL,0UL,0xDE2E510BL},{0x2C910760L,0x28EC7DFFL,0x67AFFF16L}},{{0x67AFFF16L,1UL,0xD4AD4463L},{0xE2401904L,8UL,0xF785B8EEL},{0xDE2E510BL,0x2C910760L,0UL},{5UL,5UL,0xC84C923FL},{0x28EC7DFFL,5UL,0xE65C5BCCL}},{{1UL,0x2C910760L,5UL},{0UL,8UL,0x67AFFF16L},{0UL,1UL,5UL},{7UL,0xE65C5BCCL,0xE65C5BCCL},{0x5A258D3BL,0xE2401904L,0xC84C923FL}}};
static uint16_t g_44 = 5UL;
static struct S1 g_58 = {0xE7CE1BF9L,0x45AAL,18446744073709551615UL,0xEB37L,4L,65534UL};
static uint16_t g_62 = 0UL;
static uint32_t g_64 = 1UL;
static int64_t g_67[2][3][4] = {{{0L,0x36ED293A85175EF5LL,(-1L),(-1L)},{0xBB4FD8ED9CDEFDC0LL,0xBB4FD8ED9CDEFDC0LL,0L,(-1L)},{8L,0x36ED293A85175EF5LL,8L,0L}},{{8L,0L,0L,8L},{0xBB4FD8ED9CDEFDC0LL,0L,(-1L),0L},{0L,0x36ED293A85175EF5LL,(-1L),(-1L)}}};
static uint32_t g_68 = 0x60CCD11DL;
static uint8_t g_72 = 255UL;
static uint64_t g_81 = 1UL;
static const struct S0 g_96[3][4][5] = {{{{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL}},{{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL}},{{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL}},{{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL}}},{{{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL}},{{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL}},{{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL}},{{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL}}},{{{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL}},{{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL}},{{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL}},{{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL},{0x0B5FFC7B43BFD272LL,0L,1UL,0x77E0797FL}}}};
static struct S0 g_97 = {0UL,0L,7UL,0x6D33D981L};
static int8_t g_148 = 0x20L;
static uint64_t g_195[1] = {18446744073709551615UL};
static int32_t g_216 = 7L;
static uint64_t g_218 = 7UL;
static uint8_t g_267 = 0UL;
static int16_t g_291 = 3L;
static int8_t g_292 = 0x47L;
static uint8_t g_293 = 251UL;
static struct S0 g_308[2][2][1] = {{{{18446744073709551610UL,0x4D55L,1UL,-7L}},{{0x7784A7724EE0FCA2LL,1L,0xA8E1AED80D39D857LL,0x49E82916L}}},{{{18446744073709551610UL,0x4D55L,1UL,-7L}},{{0x7784A7724EE0FCA2LL,1L,0xA8E1AED80D39D857LL,0x49E82916L}}}};
static int32_t g_358 = 0x175AB73CL;
static int64_t g_359 = 6L;
static int16_t g_361 = 6L;
static uint64_t g_365 = 18446744073709551613UL;
static uint16_t g_401[5] = {65535UL,65535UL,65535UL,65535UL,65535UL};
static int16_t g_467 = 0x6F37L;



static uint32_t  func_1(void);
static int32_t  func_7(uint32_t  p_8);
static uint16_t  func_12(uint32_t  p_13, int32_t  p_14, int8_t  p_15, uint8_t  p_16, uint32_t  p_17);
static int32_t  func_37(uint32_t  p_38);




static uint32_t  func_1(void)
{ 
    struct S1 l_3 = {1L,0x5E79L,2UL,65526UL,4L,5UL};
    int32_t l_456 = 0x2D181059L;
    l_3 = g_2;
    for (g_2.f3 = 0; (g_2.f3 != 39); g_2.f3 = safe_add_func_int32_t_s_s(g_2.f3, 1))
    { 
        uint8_t l_9 = 0x4AL;
        uint32_t l_437 = 0x75871132L;
        int32_t l_482[5];
        int i;
        for (i = 0; i < 5; i++)
            l_482[i] = (-9L);
        if ((((g_2.f4 = g_2.f3) < (g_2.f5 < (~func_7(l_9)))) || l_3.f5))
        { 
            int8_t l_427 = 0xF5L;
            int32_t l_428 = 0L;
            int32_t l_458 = (-1L);
            int64_t l_468[3][5][4] = {{{9L,0xF8AF2F0B5B4A8D52LL,9L,0xF8AF2F0B5B4A8D52LL},{9L,0xF8AF2F0B5B4A8D52LL,9L,0xF8AF2F0B5B4A8D52LL},{9L,0xF8AF2F0B5B4A8D52LL,9L,0xF8AF2F0B5B4A8D52LL},{9L,0xF8AF2F0B5B4A8D52LL,9L,0xF8AF2F0B5B4A8D52LL},{9L,0xF8AF2F0B5B4A8D52LL,9L,0xF8AF2F0B5B4A8D52LL}},{{9L,0xF8AF2F0B5B4A8D52LL,9L,0xF8AF2F0B5B4A8D52LL},{9L,0xF8AF2F0B5B4A8D52LL,9L,0xF8AF2F0B5B4A8D52LL},{9L,0xF8AF2F0B5B4A8D52LL,9L,0xF8AF2F0B5B4A8D52LL},{9L,0xF8AF2F0B5B4A8D52LL,9L,0xF8AF2F0B5B4A8D52LL},{9L,0xF8AF2F0B5B4A8D52LL,9L,0xF8AF2F0B5B4A8D52LL}},{{9L,0xF8AF2F0B5B4A8D52LL,9L,0xF8AF2F0B5B4A8D52LL},{9L,0xF8AF2F0B5B4A8D52LL,9L,0xF8AF2F0B5B4A8D52LL},{9L,0xF8AF2F0B5B4A8D52LL,9L,0xF8AF2F0B5B4A8D52LL},{9L,0xF8AF2F0B5B4A8D52LL,9L,0xF8AF2F0B5B4A8D52LL},{9L,0xF8AF2F0B5B4A8D52LL,9L,0xF8AF2F0B5B4A8D52LL}}};
            int32_t l_470[2];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_470[i] = 0xEEE2EC9CL;
            for (g_62 = (-29); (g_62 < 55); ++g_62)
            { 
                int64_t l_426 = 0L;
                if (l_3.f5)
                    break;
                g_97.f3 = l_426;
                l_428 ^= (l_427 & g_2.f1);
            }
            if ((safe_lshift_func_uint16_t_u_s(g_2.f1, (safe_mod_func_uint32_t_u_u(((((safe_sub_func_int8_t_s_s(g_195[0], (l_437 = (((safe_sub_func_uint8_t_u_u(l_3.f4, (0x0644F6611DB17AA1LL <= l_9))) > l_9) | g_64)))) , 0x00BD7A3CL) , l_3.f1) <= 1UL), g_62)))))
            { 
                uint32_t l_457 = 18446744073709551606UL;
                l_458 |= (((safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s(g_2.f3, (safe_div_func_int32_t_s_s(((-1L) == ((safe_sub_func_uint64_t_u_u(((l_456 = (safe_div_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((g_58.f5++), (safe_div_func_int8_t_s_s(1L, (safe_mul_func_int16_t_s_s((65529UL > 0x27DDL), 65535UL)))))) != 247UL), l_428))) && g_58.f5), g_72)) != l_427)), l_457)))), 0x09L)) | g_97.f2) | 246UL);
            }
            else
            { 
                int64_t l_469 = 0xCD4E90041EC7C2ADLL;
                l_470[1] = (!(l_469 = (g_43[1][0][0] , (((((((safe_div_func_int32_t_s_s(((18446744073709551609UL ^ (g_195[0] = (!(((safe_add_func_uint8_t_u_u(l_428, (safe_div_func_uint16_t_u_u(l_428, g_467)))) >= 0xF549C92EL) != 18446744073709551614UL)))) & l_3.f4), (-8L))) && l_9) <= 5UL) , g_64) , l_437) == l_468[2][3][1]) | g_293))));
            }
            for (g_72 = 29; (g_72 > 59); g_72++)
            { 
                int32_t l_473 = 1L;
                int32_t l_474[5] = {(-5L),(-5L),(-5L),(-5L),(-5L)};
                int i;
                g_358 = ((g_308[1][0][0].f1 , (g_361 = g_67[0][0][2])) & l_473);
                l_474[1] = 0xAF9431CFL;
            }
        }
        else
        { 
            uint32_t l_475 = 4UL;
            int32_t l_476 = 0xDDA2389FL;
            int32_t l_477 = 0x0A6F1ECEL;
            l_477 = ((((((g_43[3][3][2] = ((((g_195[0] != g_2.f0) & 0L) || ((((l_476 = (((l_475 || l_475) || l_437) >= l_3.f1)) < g_44) <= l_3.f3) , l_3.f2)) , g_58.f3)) <= l_3.f5) != 0xBBF3BCAA90B541A9LL) ^ l_3.f3) | 5UL) & 246UL);
        }
        if (g_2.f2)
            continue;
        g_358 = (l_482[3] = ((safe_add_func_int32_t_s_s((safe_sub_func_int32_t_s_s(0x8993676AL, g_81)), (g_97.f3 = g_361))) && 0xA5L));
    }
    return g_96[1][2][0].f3;
}



static int32_t  func_7(uint32_t  p_8)
{ 
    uint32_t l_31 = 0x28694A21L;
    int32_t l_32 = (-10L);
    int32_t l_33[1];
    int32_t l_34[5][3][1] = {{{(-1L)},{0x786AE2ADL},{(-1L)}},{{0x786AE2ADL},{(-1L)},{0x786AE2ADL}},{{(-1L)},{0x786AE2ADL},{(-1L)}},{{0x786AE2ADL},{(-1L)},{0x786AE2ADL}},{{(-1L)},{0x786AE2ADL},{(-1L)}}};
    int64_t l_289 = 1L;
    uint32_t l_296 = 1UL;
    struct S0 l_297 = {18446744073709551615UL,-10L,18446744073709551606UL,-8L};
    uint32_t l_305[3];
    int32_t l_350 = (-1L);
    uint32_t l_394 = 1UL;
    struct S1 l_413[5][5] = {{{-8L,-1L,0x7C0D026DL,7UL,0xCDL,0xC213L},{5L,-1L,0xA385BC1CL,0x669FL,0x19L,0UL},{-1L,9L,0x135FBB91L,0xEE3DL,6L,0UL},{2L,-1L,0x73066D88L,0xE048L,2L,0x99A8L},{-1L,-5L,0x37350418L,65531UL,0xFAL,6UL}},{{-1L,9L,0x135FBB91L,0xEE3DL,6L,0UL},{5L,-1L,0xA385BC1CL,0x669FL,0x19L,0UL},{-8L,-1L,0x7C0D026DL,7UL,0xCDL,0xC213L},{-8L,-1L,0x7C0D026DL,7UL,0xCDL,0xC213L},{5L,-1L,0xA385BC1CL,0x669FL,0x19L,0UL}},{{-2L,-10L,9UL,0xB26BL,0xC8L,0xDB15L},{0x7B61FB8DL,0x801DL,0xF3476687L,0xD673L,0x7FL,3UL},{0xF949D228L,1L,0xDD5B5724L,7UL,0L,0xA284L},{5L,-1L,0xA385BC1CL,0x669FL,0x19L,0UL},{-1L,-5L,0x37350418L,65531UL,0xFAL,6UL}},{{0x7B61FB8DL,0x801DL,0xF3476687L,0xD673L,0x7FL,3UL},{-8L,-1L,0x7C0D026DL,7UL,0xCDL,0xC213L},{0xF949D228L,1L,0xDD5B5724L,7UL,0L,0xA284L},{0xF2FE3ECDL,0x2711L,1UL,8UL,0x6FL,0UL},{0xF949D228L,1L,0xDD5B5724L,7UL,0L,0xA284L}},{{-1L,-5L,0x37350418L,65531UL,0xFAL,6UL},{-1L,-5L,0x37350418L,65531UL,0xFAL,6UL},{-8L,-1L,0x7C0D026DL,7UL,0xCDL,0xC213L},{-2L,-10L,9UL,0xB26BL,0xC8L,0xDB15L},{0x4B6F3A20L,0x4AD0L,0x13C408D7L,65532UL,0x51L,0x134EL}}};
    struct S1 l_423 = {0x290D9297L,-2L,18446744073709551612UL,0UL,0x55L,1UL};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_33[i] = 1L;
    for (i = 0; i < 3; i++)
        l_305[i] = 0x20B93434L;
lbl_368:
    if (((safe_add_func_uint64_t_u_u(0xF7D2668451F1E283LL, ((func_12((l_33[0] = ((safe_rshift_func_int16_t_s_u((g_2.f1 &= (safe_div_func_int32_t_s_s(((safe_sub_func_int8_t_s_s((g_24 = p_8), g_2.f5)) && (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((l_32 = ((l_31 = (safe_rshift_func_int16_t_s_u(g_24, 11))) <= g_2.f2)), 6)), g_2.f2))), g_2.f2))), 15)) >= g_2.f3)), l_34[4][0][0], g_2.f0, g_2.f2, l_34[4][0][0]) | l_34[3][2][0]) ^ 0x6DL))) | 0x8752L))
    { 
        return g_58.f4;
    }
    else
    { 
        int32_t l_290 = (-1L);
        int32_t l_329 = 1L;
        --g_293;
        l_296 = l_34[3][1][0];
        for (g_81 = 0; (g_81 <= 1); g_81 += 1)
        { 
            uint64_t l_304 = 0xB83F1A1F52BABF69LL;
            int32_t l_321 = 2L;
            const struct S0 l_327[2][3] = {{{0xF4EF1C2AC4045477LL,-1L,1UL,0xCA451F2BL},{0xF4EF1C2AC4045477LL,-1L,1UL,0xCA451F2BL},{5UL,0xEDDFL,0xBABF0A7AF316F5ADLL,0x4E073102L}},{{0xF4EF1C2AC4045477LL,-1L,1UL,0xCA451F2BL},{0xF4EF1C2AC4045477LL,-1L,1UL,0xCA451F2BL},{5UL,0xEDDFL,0xBABF0A7AF316F5ADLL,0x4E073102L}}};
            struct S0 l_328 = {7UL,1L,18446744073709551615UL,0xA7B5485DL};
            int i, j;
            l_297 = l_297;
            g_216 |= (l_290 <= (safe_div_func_int8_t_s_s(((l_33[0] = l_290) <= (safe_div_func_int16_t_s_s((((safe_add_func_int64_t_s_s(l_304, ((0x6D62L ^ g_67[0][2][3]) > 0x77L))) & p_8) == 18446744073709551615UL), p_8))), p_8)));
            for (g_97.f3 = 1; (g_97.f3 >= 0); g_97.f3 -= 1)
            { 
                int16_t l_323[4][1][3] = {{{1L,7L,(-1L)}},{{0L,7L,0L}},{{0L,1L,(-1L)}},{{0L,0L,1L}}};
                int32_t l_324 = (-1L);
                uint32_t l_325 = 18446744073709551608UL;
                int32_t l_326 = 1L;
                int i, j, k;
                ++l_305[1];
                g_308[1][0][0] = l_297;
                l_326 = (safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(g_2.f0, (safe_div_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s(((safe_mul_func_uint8_t_u_u((((l_321 = 1UL) ^ ((l_325 &= ((p_8 &= g_58.f3) <= (l_324 |= (!((l_323[1][0][0] &= (g_308[1][0][0] , 7UL)) | l_33[0]))))) <= l_326)) >= l_33[0]), 255UL)) != 0x46A76BEB16780120LL), g_218)), g_2.f1)))), 0UL)), 0x7731L));
            }
            for (g_97.f2 = 0; (g_97.f2 <= 1); g_97.f2 += 1)
            { 
                l_328 = l_327[1][2];
                l_329 ^= (0x0E3C0702EA304488LL <= (l_328.f3 = l_290));
                return p_8;
            }
        }
    }
    if ((safe_lshift_func_int8_t_s_s(((l_289 & (((l_297.f3 = ((safe_lshift_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u(((safe_mul_func_int8_t_s_s((((++g_64) , ((!(!(safe_div_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(1UL, (safe_mul_func_int16_t_s_s(((((0x18L <= p_8) <= 1L) || 0x3EBA5CBCL) , g_2.f0), 65535UL)))) != 0L), l_350)))) , 5UL)) ^ l_289), 0xAFL)) > l_289), 1UL)) >= l_297.f0), 7)) & 0UL)) < 0x4DL) >= p_8)) && 1UL), l_305[1])))
    { 
        int8_t l_351 = (-7L);
        int32_t l_352 = 0xFC0084AFL;
        int32_t l_353 = 0xB38B31F9L;
        int32_t l_354 = 1L;
        int32_t l_355 = 0xF43318F5L;
        int32_t l_356 = 4L;
        int32_t l_357 = 8L;
        int32_t l_360 = 1L;
        int32_t l_362 = 0xE3B1E934L;
        int32_t l_363 = (-1L);
        int32_t l_364 = 0x240B66F2L;
        uint16_t l_407 = 1UL;
lbl_411:
        ++g_365;
        if (g_97.f2)
            goto lbl_368;
        if (((safe_sub_func_int8_t_s_s(((l_354 ^= ((safe_div_func_int16_t_s_s((safe_mod_func_int32_t_s_s((g_308[1][0][0].f3 &= (-10L)), l_360)), (l_352 = (safe_rshift_func_int16_t_s_s(((l_363 && (safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(l_296, g_2.f1)), g_96[1][2][0].f1))) == g_308[1][0][0].f2), l_356))))) != p_8)) <= l_362), p_8)) || l_355))
        { 
            union U2 l_386[4] = {{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}};
            int32_t l_389[1];
            int i;
            for (i = 0; i < 1; i++)
                l_389[i] = 0L;
            l_389[0] = ((~((safe_div_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((((l_305[1] == (g_291 = (l_386[2] , l_31))) > (safe_add_func_uint16_t_u_u((g_308[1][0][0].f3 , 65535UL), g_148))) , 0x5EL), 5L)) == p_8), l_386[2].f0)) ^ 1L)) , 0x5CF39A5DL);
            if ((g_58.f1 > (safe_sub_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u(l_394, (safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((safe_div_func_int64_t_s_s((g_96[1][2][0].f2 > ((l_354 = ((((l_389[0] = 0x1F56L) | p_8) | l_386[2].f0) < p_8)) <= 0x9EL)), l_362)), 3)), l_386[2].f1)))) >= g_72), 2UL))))
            { 
                int16_t l_404[1];
                int32_t l_405 = (-9L);
                int32_t l_406 = 0x7140BE0AL;
                int i;
                for (i = 0; i < 1; i++)
                    l_404[i] = 0x3C61L;
                g_401[3]++;
                l_407--;
            }
            else
            { 
                int64_t l_410 = (-1L);
                g_97.f3 = l_410;
            }
            if (g_58.f3)
                goto lbl_411;
        }
        else
        { 
            const struct S1 l_412 = {0L,1L,0x7313F530L,65532UL,0x9BL,0x2B78L};
            l_413[2][1] = l_412;
        }
    }
    else
    { 
        int32_t l_419 = 1L;
        g_97.f3 ^= ((!(safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((p_8 >= ((l_419 & ((safe_mod_func_int64_t_s_s((!((((((g_291 , (g_195[0] & p_8)) != p_8) & g_97.f1) , g_308[1][0][0].f1) ^ l_419) , 18446744073709551607UL)), p_8)) , l_297.f1)) || 9UL)), 1L)), l_419))) || p_8);
        l_423 = (g_58 = (l_413[2][1] = g_58));
    }
    return l_32;
}



static uint16_t  func_12(uint32_t  p_13, int32_t  p_14, int8_t  p_15, uint8_t  p_16, uint32_t  p_17)
{ 
    int32_t l_234 = 0x687B01C4L;
    int32_t l_239 = 0x8ED02343L;
    int32_t l_287[3][2];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            l_287[i][j] = 0x589B7E73L;
    }
    for (p_15 = 2; (p_15 < 11); p_15 = safe_add_func_int64_t_s_s(p_15, 5))
    { 
        int16_t l_39 = (-2L);
        int32_t l_221 = 0xE295090CL;
        int32_t l_255 = 0x6961723AL;
        g_216 ^= func_37((++g_40));
        g_97.f3 = (g_97 , 0x0375A509L);
        for (g_72 = 0; (g_72 <= 1); g_72 += 1)
        { 
            const struct S1 l_226[3][2][1] = {{{{-7L,0x92A3L,0xED498468L,0xDD60L,8L,0xDD1CL}},{{0x4D6F2C81L,1L,4UL,0x03FBL,0L,9UL}}},{{{-7L,0x92A3L,0xED498468L,0xDD60L,8L,0xDD1CL}},{{0x4D6F2C81L,1L,4UL,0x03FBL,0L,9UL}}},{{{-7L,0x92A3L,0xED498468L,0xDD60L,8L,0xDD1CL}},{{0x4D6F2C81L,1L,4UL,0x03FBL,0L,9UL}}}};
            int32_t l_254 = 0xD3A3AF24L;
            const int64_t l_266 = 1L;
            int i, j, k;
            l_221 = g_97.f2;
            if (((((((safe_div_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((l_226[2][1][0] , (0x28927F863D7CA0C7LL && (g_97.f0 = (+(safe_div_func_uint8_t_u_u((g_24 = (((safe_sub_func_uint8_t_u_u((safe_div_func_int8_t_s_s((-1L), l_234)), p_15)) == g_96[1][2][0].f2) > 6UL)), p_16)))))) & 4UL), 0x42L)), 0x1E63C6DCL)) != l_234) , p_17) == g_2.f1) <= l_221) == g_81))
            { 
                l_221 = (safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((7UL | (l_226[2][1][0].f4 , (l_239 >= ((safe_add_func_uint32_t_u_u((0x08306245C75313E7LL > 0x3C25EC4CE350B082LL), g_68)) || p_17)))) == 0x6F3E09BFL), g_24)), p_14));
                if (p_17)
                    break;
            }
            else
            { 
                l_255 ^= ((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_u((l_234 = ((safe_rshift_func_int16_t_s_s((l_254 |= (l_239 == (safe_rshift_func_uint16_t_u_s(((safe_mul_func_int8_t_s_s(0x3BL, ((250UL < (p_16 = ((4294967293UL >= p_15) <= g_2.f0))) != l_234))) > l_226[2][1][0].f4), 4)))), 4)) || g_2.f5)), g_44)) <= l_221), p_13)) , (-8L));
                l_255 = g_24;
                p_14 = ((safe_sub_func_int32_t_s_s(((((((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(l_226[2][1][0].f1, 13)), (((((safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((l_266 < l_234), 6)), g_68)) , p_17) , g_148) <= g_216) <= p_17))) , 0xCAC88C8FEF7A6630LL) | g_216) || p_15) >= p_16) == 0xAC9281E6L), l_226[2][1][0].f4)) & g_24);
            }
            g_267--;
            for (g_148 = 1; (g_148 >= 0); g_148 -= 1)
            { 
                int32_t l_286[2];
                int32_t l_288 = 1L;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_286[i] = 0xDA1FC9DCL;
                l_288 = (safe_rshift_func_int16_t_s_u(((safe_div_func_uint16_t_u_u(((l_287[1][1] &= (l_286[0] = (safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((((safe_rshift_func_int16_t_s_u((l_234 = (safe_sub_func_int64_t_s_s((-1L), g_67[g_148][(g_148 + 1)][g_148]))), (safe_sub_func_int32_t_s_s(g_2.f2, ((((((safe_lshift_func_uint8_t_u_s((((g_62 = (l_239 | p_14)) | g_72) <= g_96[1][2][0].f3), l_255)) >= 0x56F7L) && p_14) || p_14) & p_14) || p_14))))) && p_16) || 0xFEL) & l_226[2][1][0].f4), p_16)), g_96[1][2][0].f1)))) || p_17), l_39)) , p_17), l_255));
                l_286[1] = (p_15 <= l_221);
            }
        }
    }
    return g_2.f2;
}



static int32_t  func_37(uint32_t  p_38)
{ 
    uint8_t l_59 = 2UL;
    int32_t l_61 = 0x2B77DEECL;
    int32_t l_71 = 0xC31B0F82L;
    uint32_t l_75 = 6UL;
    struct S0 l_82 = {0x16C4145F50B00A49LL,0x9765L,1UL,1L};
    struct S1 l_106[1][5] = {{{0x5F9EFA0EL,0xCC22L,0UL,0xF314L,0x7EL,4UL},{0x5F9EFA0EL,0xCC22L,0UL,0xF314L,0x7EL,4UL},{0x5F9EFA0EL,0xCC22L,0UL,0xF314L,0x7EL,4UL},{0x5F9EFA0EL,0xCC22L,0UL,0xF314L,0x7EL,4UL},{0x5F9EFA0EL,0xCC22L,0UL,0xF314L,0x7EL,4UL}}};
    uint32_t l_146[1][3][1];
    int64_t l_171 = 0xCDC9599D76A8CF68LL;
    uint64_t l_193[4];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
                l_146[i][j][k] = 1UL;
        }
    }
    for (i = 0; i < 4; i++)
        l_193[i] = 18446744073709551615UL;
    for (g_2.f1 = 0; (g_2.f1 <= 2); g_2.f1 += 1)
    { 
        uint8_t l_47[5][5] = {{0x99L,0x99L,0x93L,0x99L,0x99L},{1UL,0x99L,1UL,1UL,0x99L},{0x99L,1UL,1UL,0x99L,1UL},{0x99L,0x99L,0x93L,0x99L,0x99L},{1UL,0x99L,1UL,1UL,0x99L}};
        int32_t l_63 = 0x29999451L;
        int i, j;
        --g_44;
        if (l_47[1][0])
            continue;
        for (g_40 = 0; (g_40 <= 2); g_40 += 1)
        { 
            uint64_t l_56 = 0x151158E584094784LL;
            struct S1 l_57 = {-1L,1L,0xD2A5DBDFL,0xDCA6L,1L,0UL};
            int32_t l_60[1];
            int i;
            for (i = 0; i < 1; i++)
                l_60[i] = 0x33985213L;
            if ((g_44 , (+(((l_60[0] = (~(safe_div_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s(((((g_44++) > (0x2C9EA21F9F6D65DBLL == l_56)) || (((g_58 = l_57) , 0x8603L) ^ g_2.f1)) | l_57.f4), l_59)) & (-5L)), p_38)))) < 0xE702L) | l_61))))
            { 
                l_60[0] ^= g_24;
                g_62 ^= g_2.f1;
                g_64++;
            }
            else
            { 
                l_60[0] = g_2.f1;
                --g_68;
                g_72++;
            }
            for (g_58.f1 = 2; (g_58.f1 >= 0); g_58.f1 -= 1)
            { 
                return p_38;
            }
        }
    }
    if (((l_71 || ((g_58.f5 == l_75) > ((0x6BA6FA0FL & l_71) >= 0L))) , l_61))
    { 
        int16_t l_80 = 0xDF25L;
        g_81 = ((safe_rshift_func_int16_t_s_s(((safe_add_func_int16_t_s_s((g_2.f1 && g_44), (l_80 = 0x80F2L))) || l_80), 11)) < p_38);
    }
    else
    { 
        uint32_t l_92 = 0xD616EC0BL;
        int32_t l_108 = 0xF03D6BE2L;
        const int8_t l_207 = 0x70L;
        int32_t l_217[4] = {0x836393F6L,0x836393F6L,0x836393F6L,0x836393F6L};
        int i;
        if ((l_82 , (((p_38 | (safe_lshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((~p_38), (safe_rshift_func_uint8_t_u_u((safe_add_func_int64_t_s_s((l_92 > g_2.f5), (-1L))), 1)))), l_71))) || p_38) != g_58.f5)))
        { 
            uint16_t l_95 = 0x1806L;
            int32_t l_107 = 1L;
            l_82.f3 = (safe_div_func_int16_t_s_s((-8L), l_95));
            if (g_64)
                goto lbl_98;
            if ((0x1E25F8A0L || p_38))
            { 
                l_71 = (p_38 | 0xC2F892C2L);
lbl_98:
                g_97 = g_96[1][2][0];
                g_97.f3 = ((safe_add_func_uint16_t_u_u((+((safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((((l_106[0][3] , g_58.f5) , 0UL) || 0x4AL), g_58.f5)), 1)) ^ 0xC7A4504AE8C7AEF2LL)), g_68)) , g_64);
            }
            else
            { 
                uint16_t l_109 = 5UL;
                l_109--;
            }
        }
        else
        { 
            int16_t l_118 = 4L;
            int32_t l_126 = 0x86691D7FL;
            if (((safe_mul_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u(l_108, ((0xE05CL || ((((safe_rshift_func_uint16_t_u_s(0UL, 2)) | l_118) , 0L) != g_58.f3)) & g_58.f0))) , g_2.f2), 7L)) | 0x980116228B080850LL))
            { 
                const uint8_t l_121 = 0x60L;
                g_97.f3 = (((((p_38 , p_38) >= g_96[1][2][0].f0) ^ ((safe_rshift_func_int8_t_s_s(l_121, 2)) || l_108)) && 0x09C7E4F7L) == g_96[1][2][0].f0);
            }
            else
            { 
                l_82.f3 = (safe_mod_func_int64_t_s_s((p_38 <= (safe_lshift_func_int16_t_s_u(g_96[1][2][0].f1, 6))), l_82.f0));
                l_126 |= p_38;
                l_106[0][3] = l_106[0][2];
            }
        }
        if ((safe_mul_func_uint8_t_u_u((g_97.f1 >= (safe_rshift_func_int8_t_s_u(l_108, 3))), ((!(l_106[0][3].f3 > (safe_lshift_func_int16_t_s_u(((g_67[1][0][3] && l_92) <= g_40), l_92)))) <= g_97.f3))))
        { 
            uint8_t l_136 = 0x46L;
            int32_t l_147 = (-9L);
            int32_t l_166 = 1L;
            int32_t l_194 = 3L;
            for (l_75 = 0; (l_75 != 9); l_75 = safe_add_func_uint64_t_u_u(l_75, 3))
            { 
                union U2 l_143 = {0x73C17101716674BELL};
                const uint32_t l_149 = 0x02E23DBEL;
                int32_t l_150 = 0xB44D923BL;
                l_136++;
                g_97.f3 |= ((l_150 = (safe_div_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(((((l_143 , (((l_108 = l_146[0][1][0]) || (l_147 >= p_38)) >= p_38)) <= p_38) == g_148) ^ p_38), (-1L))), l_149))) | 18446744073709551615UL);
            }
            if ((((safe_div_func_int32_t_s_s(0x8FD62B9EL, (l_166 = (safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s(p_38, 7)), (((safe_mod_func_int32_t_s_s((safe_unary_minus_func_int64_t_s((g_67[1][2][3] = ((l_136 && (safe_lshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s((g_2.f5 , g_58.f1), g_2.f2)), p_38))) & 0xE808L)))), 0x8B0A1B9EL)) | 0x8CL) || g_2.f5))), 4))))) > l_136) < p_38))
            { 
                uint32_t l_169 = 0x4EEA7A90L;
                l_166 = (safe_add_func_uint64_t_u_u(g_148, l_169));
            }
            else
            { 
                uint32_t l_170 = 0x65E47C54L;
                return l_170;
            }
            if (l_171)
            { 
                const uint8_t l_188 = 250UL;
                g_97.f3 |= (((safe_sub_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(((safe_add_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((safe_sub_func_uint64_t_u_u(l_188, 0x476D7F101BA2FB85LL)), ((safe_rshift_func_uint16_t_u_s((l_82.f3 ^= (l_136 <= (safe_mod_func_uint32_t_u_u(0x9581EB8BL, (-1L))))), g_96[1][2][0].f0)) != g_96[1][2][0].f0))) | 0xA247L), l_147)) , g_97.f2), l_193[0])), g_40)), 0UL)), 1)) || g_2.f1), 4294967292UL)) ^ 0UL) >= p_38);
            }
            else
            { 
                g_97.f3 = (l_71 = g_72);
                ++g_195[0];
                g_97.f3 = (((safe_rshift_func_int16_t_s_u((0xC0L < ((safe_add_func_int32_t_s_s((((l_92 ^ (0L && ((l_106[0][3].f1 ^ l_166) != (-1L)))) ^ p_38) > g_2.f3), p_38)) <= g_24)), l_92)) || 0xDAD2L) != g_24);
            }
        }
        else
        { 
            uint32_t l_206[5] = {0x8E114101L,0x8E114101L,0x8E114101L,0x8E114101L,0x8E114101L};
            int32_t l_208[1];
            int i;
            for (i = 0; i < 1; i++)
                l_208[i] = (-1L);
            for (l_82.f3 = 25; (l_82.f3 < 13); l_82.f3--)
            { 
                int16_t l_213[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_213[i] = 6L;
                l_208[0] = (p_38 && (l_92 ^ (((safe_div_func_int8_t_s_s((l_206[0] = g_148), l_207)) | g_96[1][2][0].f1) ^ p_38)));
                l_208[0] = ((9UL || (0xFD2DEE4CL == (l_108 & ((safe_div_func_uint16_t_u_u((0x82L ^ p_38), g_96[1][2][0].f2)) < g_97.f2)))) < l_108);
                l_208[0] ^= ((((safe_mul_func_int8_t_s_s((g_2.f5 < g_81), 0x8AL)) != l_213[3]) || g_72) & 0xC5B7124CL);
            }
            if (l_108)
            { 
                return g_96[1][2][0].f0;
            }
            else
            { 
                uint16_t l_214 = 5UL;
                int32_t l_215 = 0L;
                l_215 = l_214;
            }
            g_218--;
        }
    }
    return g_2.f2;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2.f0, "g_2.f0", print_hash_value);
    transparent_crc(g_2.f1, "g_2.f1", print_hash_value);
    transparent_crc(g_2.f2, "g_2.f2", print_hash_value);
    transparent_crc(g_2.f3, "g_2.f3", print_hash_value);
    transparent_crc(g_2.f4, "g_2.f4", print_hash_value);
    transparent_crc(g_2.f5, "g_2.f5", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_43[i][j][k], "g_43[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_58.f0, "g_58.f0", print_hash_value);
    transparent_crc(g_58.f1, "g_58.f1", print_hash_value);
    transparent_crc(g_58.f2, "g_58.f2", print_hash_value);
    transparent_crc(g_58.f3, "g_58.f3", print_hash_value);
    transparent_crc(g_58.f4, "g_58.f4", print_hash_value);
    transparent_crc(g_58.f5, "g_58.f5", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_67[i][j][k], "g_67[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_96[i][j][k].f0, "g_96[i][j][k].f0", print_hash_value);
                transparent_crc(g_96[i][j][k].f1, "g_96[i][j][k].f1", print_hash_value);
                transparent_crc(g_96[i][j][k].f2, "g_96[i][j][k].f2", print_hash_value);
                transparent_crc(g_96[i][j][k].f3, "g_96[i][j][k].f3", print_hash_value);

            }
        }
    }
    transparent_crc(g_97.f0, "g_97.f0", print_hash_value);
    transparent_crc(g_97.f1, "g_97.f1", print_hash_value);
    transparent_crc(g_97.f2, "g_97.f2", print_hash_value);
    transparent_crc(g_97.f3, "g_97.f3", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_195[i], "g_195[i]", print_hash_value);

    }
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    transparent_crc(g_291, "g_291", print_hash_value);
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_293, "g_293", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_308[i][j][k].f0, "g_308[i][j][k].f0", print_hash_value);
                transparent_crc(g_308[i][j][k].f1, "g_308[i][j][k].f1", print_hash_value);
                transparent_crc(g_308[i][j][k].f2, "g_308[i][j][k].f2", print_hash_value);
                transparent_crc(g_308[i][j][k].f3, "g_308[i][j][k].f3", print_hash_value);

            }
        }
    }
    transparent_crc(g_358, "g_358", print_hash_value);
    transparent_crc(g_359, "g_359", print_hash_value);
    transparent_crc(g_361, "g_361", print_hash_value);
    transparent_crc(g_365, "g_365", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_401[i], "g_401[i]", print_hash_value);

    }
    transparent_crc(g_467, "g_467", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
