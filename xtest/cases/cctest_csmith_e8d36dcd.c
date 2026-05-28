// SPDX-License-Identifier: MIT
// cctest_csmith_e8d36dcd.c --- cctest case csmith_e8d36dcd (csmith seed 3906170317)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x7e9950de */
/* @exp_ticks 0x3aa2 */

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

// Options:   -s 3906170317 -o /tmp/csmith_gen_aazbhw1j/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
   int32_t  f1;
   uint32_t  f2;
   uint32_t  f3;
   uint8_t  f4;
   int8_t  f5;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   const int64_t  f0;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   int32_t  f0;
   int8_t  f1;
   int32_t  f2;
   uint32_t  f3;
};
#pragma pack(pop)

union U3 {
   struct S2  f0;
   int32_t  f1;
   int16_t  f2;
   int32_t  f3;
};


static uint32_t g_2[1][2] = {{5UL,5UL}};
static int32_t g_3 = 0x1DFD9475L;
static int32_t g_4 = 0x896E6A37L;
static struct S0 g_24 = {0xB786AE2AL,0L,0xD8E181F5L,0xB4373C94L,0x81L,0x37L};
static int32_t g_29 = 3L;
static uint64_t g_30 = 18446744073709551615UL;
static int32_t g_61 = 1L;
static struct S2 g_66 = {0x3423D511L,0x5EL,0L,0xDF671B33L};
static int32_t g_76 = 0x6C0B5FFCL;
static int16_t g_80 = 1L;
static uint8_t g_81 = 0UL;
static uint64_t g_118 = 0xC848226CAE363325LL;
static int32_t g_138 = 0x96D64EC8L;
static uint32_t g_139 = 0x955F0A0FL;
static int64_t g_180[2][4] = {{(-10L),0xE87007463A8961DALL,0xE87007463A8961DALL,(-10L)},{0xE87007463A8961DALL,(-10L),0xE87007463A8961DALL,0xE87007463A8961DALL}};
static int64_t g_181 = (-7L);
static int32_t g_188 = 0x0D4FA0CDL;
static uint8_t g_189 = 0xF6L;
static struct S2 g_192 = {6L,4L,9L,0x4A638037L};
static struct S0 g_193 = {1L,0L,4UL,1UL,251UL,0x29L};
static union U3 g_209 = {{0x2BC286E9L,-1L,0x18909AFEL,3UL}};



static struct S2  func_1(void);
static struct S0  func_5(int8_t  p_6, int32_t  p_7);
static int16_t  func_9(uint32_t  p_10, uint8_t  p_11, int32_t  p_12, struct S2  p_13, uint32_t  p_14);
static struct S1  func_18(const int32_t  p_19, struct S0  p_20, int8_t  p_21, int32_t  p_22);




static struct S2  func_1(void)
{ 
    uint16_t l_8 = 0x1AA0L;
    struct S2 l_15[2] = {{0x03132D68L,9L,-4L,4294967290UL},{0x03132D68L,9L,-4L,4294967290UL}};
    uint32_t l_222 = 4294967290UL;
    int i;
    for (g_3 = 0; (g_3 >= 0); g_3 -= 1)
    { 
        int32_t l_211 = 0x50D6889FL;
        for (g_4 = 0; (g_4 <= 0); g_4 += 1)
        { 
            int16_t l_213[1][5][4] = {{{1L,1L,1L,1L},{5L,1L,0x588EL,1L},{1L,(-1L),0x588EL,0x588EL},{5L,5L,1L,0x588EL},{1L,(-1L),1L,1L}}};
            int i, j, k;
            g_193 = func_5((((l_8 |= g_2[g_4][g_4]) || func_9((((-1L) > 0x96L) != (g_2[0][1] & g_3)), l_8, g_2[g_4][g_4], l_15[0], g_3)) , 0x46L), g_76);
            for (g_139 = 0; (g_139 <= 0); g_139 += 1)
            { 
                int32_t l_210 = 0xCDA0B4F8L;
                int32_t l_212 = (-6L);
                l_213[0][2][0] = (l_15[0].f3 ^ ((g_189 &= (safe_mod_func_int32_t_s_s((safe_mul_func_int8_t_s_s((l_212 = (g_193 , (g_66.f1 = ((g_192.f3 & (safe_mul_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_s((((!((safe_rshift_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s((g_209 , g_193.f1), 0xD954L)) > 65535UL) , 0x687BL), l_210)) > g_66.f2)) && g_192.f3) ^ g_2[g_4][g_4]), l_8)) != 1UL) & l_211), l_210))) > g_2[g_4][g_4])))), 0xC4L)), l_15[0].f0))) == 0xD6L));
            }
            for (g_66.f3 = 0; (g_66.f3 <= 0); g_66.f3 += 1)
            { 
                g_209.f0.f2 = (0x5C75313EL < (safe_sub_func_int16_t_s_s((g_193.f1 & g_192.f1), l_211)));
                if (g_4)
                    continue;
                g_209.f1 |= (l_8 == (4L | (((g_192.f2 ^ 0x6209F669L) != g_192.f0) , 0x959810F8L)));
            }
        }
        for (l_211 = 0; (l_211 <= 0); l_211 += 1)
        { 
            int i, j;
            l_15[0].f2 = (safe_lshift_func_int16_t_s_s(g_2[l_211][g_3], 6));
        }
    }
    g_24.f1 = (g_193.f1 = l_15[0].f0);
    for (g_209.f2 = 3; (g_209.f2 < (-12)); g_209.f2 = safe_sub_func_int8_t_s_s(g_209.f2, 2))
    { 
        uint16_t l_221 = 0UL;
        l_15[0].f2 = (l_221 = (+g_30));
        ++l_222;
    }
    return l_15[0];
}



static struct S0  func_5(int8_t  p_6, int32_t  p_7)
{ 
    int32_t l_106 = (-10L);
    int32_t l_108 = 0x06B3A0AEL;
    int32_t l_111 = (-6L);
    int32_t l_115 = (-1L);
    const uint64_t l_143 = 0UL;
    int8_t l_149 = 0L;
    int64_t l_183[5] = {0x61A169EDE8ABCFB1LL,0x61A169EDE8ABCFB1LL,0x61A169EDE8ABCFB1LL,0x61A169EDE8ABCFB1LL,0x61A169EDE8ABCFB1LL};
    int32_t l_185[1];
    int i;
    for (i = 0; i < 1; i++)
        l_185[i] = (-1L);
    for (g_24.f4 = 0; (g_24.f4 <= 0); g_24.f4 += 1)
    { 
        uint64_t l_105 = 3UL;
        int32_t l_117 = 0L;
        struct S2 l_142 = {5L,0x0CL,0x1E2AE170L,0x793E1877L};
        int32_t l_184 = 0x2D96FB6DL;
        int32_t l_186 = 0xE578D755L;
        int32_t l_187 = 0x7BAFC14AL;
        p_7 = (g_24.f3 && (safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s((0x292B5330BC39A618LL == ((safe_mod_func_uint8_t_u_u(g_66.f1, (l_105 || 0x3EL))) , g_30)), 1)), g_2[0][1])));
        if (l_106)
            continue;
        for (g_61 = 0; (g_61 <= 0); g_61 += 1)
        { 
            int16_t l_107 = 0xE7DAL;
            int32_t l_112 = 0L;
            int32_t l_114[3][1];
            struct S0 l_155[2][2][2] = {{{{0xBA2DDD70L,0x16229581L,4294967294UL,1UL,0xC6L,0x58L},{0xBA2DDD70L,0x16229581L,4294967294UL,1UL,0xC6L,0x58L}},{{0xBA2DDD70L,0x16229581L,4294967294UL,1UL,0xC6L,0x58L},{0xBA2DDD70L,0x16229581L,4294967294UL,1UL,0xC6L,0x58L}}},{{{0xBA2DDD70L,0x16229581L,4294967294UL,1UL,0xC6L,0x58L},{0xBA2DDD70L,0x16229581L,4294967294UL,1UL,0xC6L,0x58L}},{{0xBA2DDD70L,0x16229581L,4294967294UL,1UL,0xC6L,0x58L},{0xBA2DDD70L,0x16229581L,4294967294UL,1UL,0xC6L,0x58L}}}};
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_114[i][j] = 1L;
            }
            for (g_81 = 0; (g_81 <= 0); g_81 += 1)
            { 
                int16_t l_109 = (-5L);
                int32_t l_110 = 0x6E00AB68L;
                int32_t l_113 = (-1L);
                int32_t l_116 = 0xCC4140F9L;
                union U3 l_121 = {{0xB9804166L,0x29L,0x6A71AB25L,0x6FDAF309L}};
                int8_t l_144 = 1L;
                int i, j;
                g_118++;
                l_144 = (246UL | (l_121 , (l_106 = (((((safe_rshift_func_int8_t_s_u((g_24.f5 = (safe_add_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(((g_66 , ((safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_mod_func_int32_t_s_s((p_7 = (+(+(((((((((g_139++) , g_2[g_24.f4][g_24.f4]) , l_142) , 4294967295UL) == l_116) < g_66.f2) == 4UL) > p_6) | 8UL)))), l_143)) > 0x84L), p_6)), g_24.f5)) ^ 0x5127L)) < g_30), p_6)) & 1L), l_114[2][0])) | g_24.f3), l_107))), 6)) < 0x7ECBFEF2L) >= 4L) ^ p_6) && g_24.f2))));
                l_115 &= ((safe_mod_func_int8_t_s_s(((p_7 , ((((safe_rshift_func_int8_t_s_u((l_149 == (safe_add_func_int32_t_s_s((safe_unary_minus_func_int8_t_s(((l_108 = ((0x1906L != l_121.f1) <= p_6)) < l_121.f0.f3))), 0x8CDC9599L))), 7)) == g_66.f3) >= l_110) >= l_142.f0)) || p_7), l_142.f3)) != p_7);
            }
            if ((l_142.f2 = (safe_div_func_int16_t_s_s((((l_155[0][0][1] , (((safe_rshift_func_int8_t_s_u((g_2[g_24.f4][(g_24.f4 + 1)] < 0xB4L), 5)) , g_24.f0) != (-1L))) >= l_142.f1) < 0UL), g_24.f4))))
            { 
                uint32_t l_158 = 0xA1803D16L;
                l_158 = 0x9CF072A1L;
                if (g_24.f2)
                    continue;
            }
            else
            { 
                union U3 l_163 = {{0x6FD24E7AL,0xEDL,0xF3CC42DBL,0xDAEAD15EL}};
                p_7 ^= g_24.f4;
                l_115 |= (safe_div_func_uint16_t_u_u(l_108, (safe_lshift_func_int8_t_s_u((l_163 , (safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(g_61, ((safe_lshift_func_int8_t_s_u((safe_add_func_int8_t_s_s(g_61, g_24.f5)), 5)) || 0xA76C5E5CL))) & p_6), l_111)), g_81))), g_24.f0))));
            }
            if (g_76)
            { 
                if (p_6)
                    break;
                l_117 = ((g_81 = 0xAFL) < (p_7 | (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((l_155[0][0][1].f1 = ((g_80 = (((safe_div_func_int32_t_s_s((p_6 | (g_180[0][2] , p_7)), 0xC0F54646L)) & 0xDF18L) && 65534UL)) == 0x1D93L)), 11)), p_7))));
            }
            else
            { 
                int32_t l_182 = 0x17BC80E7L;
                g_181 &= (-1L);
                ++g_189;
            }
            for (g_66.f2 = 0; (g_66.f2 <= 0); g_66.f2 += 1)
            { 
                g_192 = g_66;
            }
        }
    }
    return g_24;
}



static int16_t  func_9(uint32_t  p_10, uint8_t  p_11, int32_t  p_12, struct S2  p_13, uint32_t  p_14)
{ 
    const uint32_t l_23 = 0x879096A9L;
    uint16_t l_26 = 0x3831L;
    uint32_t l_27 = 4294967295UL;
    const struct S1 l_85 = {0xB07E9083639C8BEELL};
    int32_t l_86 = 0x01985D36L;
    int16_t l_98 = 0L;
    l_86 = (((safe_add_func_int16_t_s_s(((func_18(l_23, g_24, ((safe_unary_minus_func_uint16_t_u((p_13 , ((((((g_24 , p_13.f3) ^ g_3) == l_26) >= 0xC923F2B6L) <= l_27) <= 9UL)))) || p_14), g_24.f1) , l_85) , 0x4BCFL), 0UL)) ^ 7UL) != p_13.f0);
    for (g_30 = 0; (g_30 > 15); ++g_30)
    { 
        if (p_14)
            break;
        for (g_61 = 0; (g_61 < (-3)); --g_61)
        { 
            uint32_t l_97 = 0xDC33B3E5L;
            for (g_81 = 17; (g_81 < 7); g_81--)
            { 
                p_13 = p_13;
                l_86 &= g_66.f3;
            }
            g_29 = ((safe_rshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(l_97, p_13.f1)), 4)) < (l_98 | g_2[0][1]));
        }
    }
    return g_24.f1;
}



static struct S1  func_18(const int32_t  p_19, struct S0  p_20, int8_t  p_21, int32_t  p_22)
{ 
    struct S0 l_28[2] = {{0x79815C87L,1L,0x106CF363L,4294967295UL,3UL,-1L},{0x79815C87L,1L,0x106CF363L,4294967295UL,3UL,-1L}};
    int32_t l_73 = (-1L);
    int32_t l_77 = 0xD2720855L;
    struct S1 l_84[5] = {{0xE846AAE9426A84ADLL},{0xE846AAE9426A84ADLL},{0xE846AAE9426A84ADLL},{0xE846AAE9426A84ADLL},{0xE846AAE9426A84ADLL}};
    int i;
    g_24 = l_28[1];
    if (p_21)
    { 
        uint8_t l_35 = 0xA5L;
        g_30++;
        for (p_20.f0 = 0; (p_20.f0 <= 1); p_20.f0 += 1)
        { 
            if (l_28[1].f2)
                break;
        }
        if ((((safe_rshift_func_int16_t_s_s(l_35, (g_3 , (safe_sub_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(p_22, 10)), (safe_unary_minus_func_uint16_t_u(p_19)))), g_3))))) != 0xB15E7CE1L) == p_20.f4))
        { 
            p_20.f1 = (l_28[1].f4 ^ 65529UL);
        }
        else
        { 
            for (g_24.f1 = 0; (g_24.f1 <= 0); g_24.f1 += 1)
            { 
                uint32_t l_43 = 6UL;
                if (l_43)
                    break;
            }
        }
    }
    else
    { 
        uint8_t l_50[5][2][5] = {{{0x7EL,0x7EL,0x7EL,0x7EL,0x7EL},{254UL,254UL,254UL,254UL,254UL}},{{0x7EL,0x7EL,0x7EL,0x7EL,0x7EL},{254UL,254UL,254UL,254UL,254UL}},{{0x7EL,0x7EL,0x7EL,0x7EL,0x7EL},{254UL,254UL,254UL,254UL,254UL}},{{0x7EL,0x7EL,0x7EL,0x7EL,0x7EL},{254UL,254UL,254UL,254UL,254UL}},{{0x7EL,0x7EL,0x7EL,0x7EL,0x7EL},{254UL,254UL,254UL,254UL,254UL}}};
        uint32_t l_62 = 1UL;
        struct S2 l_65 = {3L,0xE7L,-1L,0x9A852A6FL};
        int i, j, k;
        p_20 = l_28[1];
        if (((l_28[1].f2 == p_20.f2) & ((safe_rshift_func_int16_t_s_u(p_20.f3, 3)) || (safe_mul_func_uint8_t_u_u(((((((safe_mod_func_int32_t_s_s(((p_20.f2 , p_19) == l_28[1].f0), p_20.f0)) , l_28[1].f1) | l_50[2][0][2]) <= p_20.f3) , p_19) != l_50[4][1][0]), l_50[3][1][4])))))
        { 
            p_22 = (((safe_mod_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((safe_sub_func_int16_t_s_s((((safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s(0x58E7L, (g_61 = g_3))), l_28[1].f2)) & (65532UL && l_62)) != 0xAAF95405L), g_24.f2)), 0xA751A5503930A17CLL)), p_22)) & 0xB9E7DCD9L) > p_20.f3);
        }
        else
        { 
            uint64_t l_67 = 1UL;
            for (g_24.f2 = 19; (g_24.f2 > 58); g_24.f2 = safe_add_func_int64_t_s_s(g_24.f2, 8))
            { 
                g_66 = l_65;
                if (l_67)
                    continue;
                p_20.f1 = p_20.f2;
            }
        }
    }
    if ((safe_rshift_func_uint16_t_u_s((((safe_mul_func_uint16_t_u_u(g_24.f4, (((!(g_61 != ((((-1L) < l_73) > p_20.f4) > l_28[1].f5))) & g_61) | l_28[1].f5))) != 1UL) | l_73), g_24.f5)))
    { 
        p_22 ^= g_24.f1;
        p_20.f1 = g_24.f4;
    }
    else
    { 
        int16_t l_74 = 1L;
        int32_t l_75 = 0xD3C6BE40L;
        int32_t l_78 = 0x0797F44DL;
        int32_t l_79 = 0xDF9DF524L;
        g_24 = l_28[1];
        g_81--;
        l_78 &= (0x3D800CEEL > (((l_75 = l_28[1].f2) & g_76) >= (g_24.f1 ^= (((p_22 ^ g_66.f0) | g_24.f5) >= l_79))));
    }
    return l_84[3];
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_24.f0, "g_24.f0", print_hash_value);
    transparent_crc(g_24.f1, "g_24.f1", print_hash_value);
    transparent_crc(g_24.f2, "g_24.f2", print_hash_value);
    transparent_crc(g_24.f3, "g_24.f3", print_hash_value);
    transparent_crc(g_24.f4, "g_24.f4", print_hash_value);
    transparent_crc(g_24.f5, "g_24.f5", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_66.f0, "g_66.f0", print_hash_value);
    transparent_crc(g_66.f1, "g_66.f1", print_hash_value);
    transparent_crc(g_66.f2, "g_66.f2", print_hash_value);
    transparent_crc(g_66.f3, "g_66.f3", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_180[i][j], "g_180[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_192.f0, "g_192.f0", print_hash_value);
    transparent_crc(g_192.f1, "g_192.f1", print_hash_value);
    transparent_crc(g_192.f2, "g_192.f2", print_hash_value);
    transparent_crc(g_192.f3, "g_192.f3", print_hash_value);
    transparent_crc(g_193.f0, "g_193.f0", print_hash_value);
    transparent_crc(g_193.f1, "g_193.f1", print_hash_value);
    transparent_crc(g_193.f2, "g_193.f2", print_hash_value);
    transparent_crc(g_193.f3, "g_193.f3", print_hash_value);
    transparent_crc(g_193.f4, "g_193.f4", print_hash_value);
    transparent_crc(g_193.f5, "g_193.f5", print_hash_value);
    transparent_crc(g_209.f2, "g_209.f2", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
