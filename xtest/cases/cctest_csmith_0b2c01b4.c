// SPDX-License-Identifier: MIT
// cctest_csmith_0b2c01b4.c --- cctest case csmith_0b2c01b4 (csmith seed 187433396)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2e648d1d */
/* @exp_ticks 0x3608 */

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

// Options:   -s 187433396 -o /tmp/csmith_gen_nyi5tmb9/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int16_t  f0;
   int16_t  f1;
   uint32_t  f2;
   int32_t  f3;
   const int64_t  f4;
};

union U1 {
   int32_t  f0;
   uint32_t  f1;
   int32_t  f2;
   int64_t  f3;
};


static int32_t g_30[4] = {0x2D38CA8CL,0x2D38CA8CL,0x2D38CA8CL,0x2D38CA8CL};
static uint64_t g_31 = 0x74FA72D50FA8FAD7LL;
static int16_t g_46[3] = {0xBE49L,0xBE49L,0xBE49L};
static int64_t g_59 = (-10L);
static uint32_t g_60 = 0xFA52E963L;
static int8_t g_66 = 0L;
static int32_t g_74 = 0x0F898D4EL;
static int16_t g_85 = 0xBEB8L;
static int8_t g_89 = 2L;
static uint32_t g_128 = 0x12407C9BL;
static uint16_t g_129 = 65535UL;
static uint32_t g_159 = 0x4F01B87CL;
static union U1 g_164 = {0x697D3C62L};
static uint8_t g_213 = 1UL;
static uint8_t g_214 = 247UL;
static uint32_t g_278 = 0x54CF3BF9L;



static union U1  func_1(void);
static int16_t  func_11(int64_t  p_12);
static const int64_t  func_17(int32_t  p_18, uint16_t  p_19, uint32_t  p_20, uint16_t  p_21, int32_t  p_22);
static int32_t  func_23(uint32_t  p_24);




static union U1  func_1(void)
{ 
    struct S0 l_4 = {9L,-4L,0x21F90EF3L,1L,-9L};
    const union U1 l_216 = {0x0E9085B8L};
    int32_t l_223 = 0L;
    if (((safe_mul_func_uint16_t_u_u((((l_4 , l_4.f4) <= (safe_lshift_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s(((g_214 ^= ((g_213 = (safe_div_func_int16_t_s_s(func_11(l_4.f4), l_4.f0))) <= g_30[1])) , 0x8699A9D7EB52307CLL), 0x2A6299ED92AE5AEDLL)) || l_4.f0), 6))) & g_30[2]), g_30[1])) > g_30[0]))
    { 
        const int32_t l_215[5][1][2] = {{{0xA29AB7E0L,0xA29AB7E0L}},{{0xA29AB7E0L,0xA29AB7E0L}},{{0xA29AB7E0L,0xA29AB7E0L}},{{0xA29AB7E0L,0xA29AB7E0L}},{{0xA29AB7E0L,0xA29AB7E0L}}};
        union U1 l_224 = {0x792AF5FFL};
        int i, j, k;
        l_223 = (l_215[0][0][0] < (g_74 <= ((l_216 , (((safe_mod_func_uint16_t_u_u((++g_129), ((safe_mul_func_int8_t_s_s(((g_30[2] != g_46[1]) == l_216.f1), 0xD6L)) | g_30[2]))) != 0xE91CA70FL) || l_4.f1)) <= l_216.f2)));
        return l_224;
    }
    else
    { 
        uint32_t l_225[5];
        int32_t l_256 = 1L;
        int32_t l_257 = (-1L);
        int i;
        for (i = 0; i < 5; i++)
            l_225[i] = 4294967295UL;
        --l_225[3];
        l_257 ^= (safe_mul_func_uint16_t_u_u(((((g_214--) > ((+(safe_rshift_func_uint16_t_u_s(((l_225[3] ^ (safe_div_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s(((l_256 &= (safe_div_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((l_223 = (safe_mod_func_int64_t_s_s((safe_div_func_uint64_t_u_u((0xD851558E0F9DADCBLL >= ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_u(((g_30[3] | ((safe_lshift_func_int8_t_s_s((+(g_129 = (g_164 , g_66))), l_4.f2)) || g_46[0])) && l_225[3]), 3)) , g_164.f2), 2)), 9)) == 0x02DDAE1D84189116LL)), 0xCAA22433CC30774ELL)), g_31))), 8L)), 0x4223L))) & 1UL), g_66)), 1L))) & g_59), 7))) <= 0UL)) ^ l_4.f4) && g_60), 0x5FB5L));
    }
    for (g_159 = 0; g_159 < 4; g_159 += 1)
    {
        g_30[g_159] = 0L;
    }
    g_278 &= ((safe_sub_func_uint64_t_u_u(18446744073709551609UL, (safe_rshift_func_uint8_t_u_s((+(0x736F6A9FL > (((safe_rshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u(g_85, ((safe_div_func_int8_t_s_s(((((safe_div_func_uint16_t_u_u((safe_add_func_int64_t_s_s((g_59 ^= (safe_sub_func_int16_t_s_s(((+(safe_div_func_uint32_t_u_u(0UL, (-1L)))) < g_164.f0), g_89))), 0xBFB48A0A5ABD8B40LL)), l_4.f4)) & g_128) == l_4.f2) && l_4.f3), l_4.f0)) & 2L))), 4)) <= 65535UL) != l_216.f1))), 2)))) > g_74);
    return l_216;
}



static int16_t  func_11(int64_t  p_12)
{ 
    const int8_t l_34 = (-8L);
    int32_t l_98[2][2][2] = {{{0xBAD64B6CL,0xBAD64B6CL},{0xBAD64B6CL,0xBAD64B6CL}},{{0xBAD64B6CL,0xBAD64B6CL},{0xBAD64B6CL,0xBAD64B6CL}}};
    uint16_t l_120 = 65533UL;
    union U1 l_202[3][4][1] = {{{{0L}},{{0L}},{{0L}},{{0L}}},{{{0L}},{{0L}},{{0L}},{{0L}}},{{{0L}},{{0L}},{{0L}},{{0L}}}};
    int8_t l_212[1][5];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
            l_212[i][j] = 1L;
    }
lbl_161:
    for (p_12 = 0; (p_12 >= 16); ++p_12)
    { 
        uint64_t l_97 = 0x00AFC62902D27084LL;
        int32_t l_99 = 5L;
        if (((((safe_add_func_int16_t_s_s((func_17(func_23(p_12), (l_34 >= (((0x2601C8D5L > 0x20F620A3L) > l_34) <= g_30[2])), g_30[2], g_30[2], g_30[2]) | (-6L)), l_34)) != 0x64L) , 4L) < l_34))
        { 
            uint16_t l_103 = 0xEAA4L;
            int32_t l_106 = 1L;
            if (g_59)
            { 
                uint16_t l_94[2][3];
                int8_t l_102 = 0x31L;
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_94[i][j] = 65533UL;
                }
                l_99 &= ((safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s(0xA5L, l_94[1][1])), g_30[2])) , (l_98[1][1][1] = (((safe_sub_func_int16_t_s_s((0x990EL > 4UL), p_12)) , l_97) <= 9UL)));
                l_99 ^= ((((safe_div_func_int16_t_s_s(l_102, 4UL)) && 18446744073709551612UL) <= 5UL) || p_12);
                l_103 ^= (l_98[0][1][1] = l_97);
            }
            else
            { 
                int32_t l_107 = 0x6ED2767FL;
                int8_t l_108 = (-1L);
                l_98[1][1][1] &= (safe_rshift_func_uint16_t_u_s((((l_106 = p_12) >= ((((l_108 = l_107) >= 1L) && (((((g_59 | g_31) | 1L) | g_46[0]) | p_12) <= p_12)) == l_99)) ^ 0xA016C9CC5FAE8CD7LL), 14));
                return g_74;
            }
        }
        else
        { 
            uint8_t l_109 = 255UL;
            l_99 = (l_109 = g_59);
            return p_12;
        }
    }
    if (((g_30[2] == (0UL & (safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((l_98[0][1][1] || ((safe_rshift_func_uint8_t_u_u((((safe_sub_func_uint8_t_u_u(p_12, p_12)) >= p_12) > 2L), 0)) <= 0UL)) && g_46[0]) > l_120), g_89)), g_46[2])))) >= 0x2907L))
    { 
        uint16_t l_125 = 1UL;
        int32_t l_126 = (-1L);
        if ((g_46[0] & (safe_mul_func_uint16_t_u_u((l_126 ^= (0x2751L >= ((g_59 &= (l_120 | (safe_lshift_func_uint8_t_u_u(0x33L, 1)))) > l_125))), 0xBF8FL))))
        { 
            int32_t l_127 = 0L;
            g_128 = l_127;
            g_129++;
        }
        else
        { 
            uint64_t l_134[1];
            int32_t l_160[1][3][4] = {{{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L}}};
            int32_t l_197 = 0xCDD84AA6L;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_134[i] = 0x94463E91B5B2358ALL;
            if (((safe_mul_func_uint8_t_u_u((l_160[0][0][3] = (g_85 | ((++l_134[0]) || (((safe_sub_func_uint32_t_u_u((((safe_add_func_int8_t_s_s((safe_sub_func_int64_t_s_s(((g_159 = ((safe_rshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(p_12, 0)), (safe_add_func_uint16_t_u_u(p_12, (((safe_div_func_int8_t_s_s((safe_mod_func_int16_t_s_s(p_12, l_134[0])), p_12)) > 0x14A35B98692F7AB6LL) & l_34))))), 11)) <= g_89), g_60)) , l_98[0][1][1]), p_12)) , g_89)) && (-7L)), 5L)), l_126)) >= p_12) | 1L), 0L)) > 65527UL) >= l_98[1][1][1])))), p_12)) != p_12))
            { 
                if (g_59)
                    goto lbl_161;
            }
            else
            { 
                uint64_t l_165 = 0xAEA256EE4573DCF3LL;
                l_98[0][1][1] = 0x20451B91L;
                l_165 = (safe_mul_func_int8_t_s_s((g_164 , l_126), (0xF7L == 0x4BL)));
                g_164.f2 = (safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_s(((safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((~(p_12 ^ (-4L))) | ((((((safe_div_func_int32_t_s_s(0xBE62397AL, (safe_mod_func_uint64_t_u_u(((safe_rshift_func_int16_t_s_s(((l_165 & g_46[0]) >= g_164.f0), 4)) , l_120), l_125)))) , 0xB05FL) & g_60) > g_46[1]) == g_85) == 2L)), l_165)), l_165)) > 0xB735CC48L), l_160[0][0][3])) < g_164.f2), g_59));
            }
            l_160[0][0][3] = 0xB60272E8L;
            l_197 = ((g_60 >= l_120) < (((safe_div_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(((safe_add_func_int32_t_s_s(((((safe_lshift_func_int16_t_s_s((l_160[0][0][3] = ((safe_sub_func_int32_t_s_s(p_12, (((safe_add_func_uint8_t_u_u(((0x3A88L && 8UL) <= l_126), 2L)) > (-1L)) <= l_160[0][0][0]))) != 0xA2BCBDF4B4D06AD9LL)), 7)) < p_12) || 0xA4D6L) <= g_46[0]), g_59)) >= 1UL), 0xD5BE6635L)) , 1L), 0x76D0L)) , p_12), p_12)), 0x97L)) , p_12) & g_30[0]));
        }
    }
    else
    { 
        int8_t l_211[3];
        int i;
        for (i = 0; i < 3; i++)
            l_211[i] = (-1L);
        l_212[0][1] = (safe_add_func_int64_t_s_s(g_31, (((safe_div_func_int8_t_s_s((l_202[1][0][0] , (safe_mod_func_uint64_t_u_u(((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((g_129 = (safe_lshift_func_uint16_t_u_s(((l_211[2] = ((g_128 != 0x02797321L) == 3UL)) != 0x2B8A50C05B529F70LL), 14))), p_12)), 7UL)) | 0x794BBEC019993031LL), p_12))), p_12)) , (-1L)) & p_12)));
        for (g_164.f2 = 0; g_164.f2 < 1; g_164.f2 += 1)
        {
            for (g_85 = 0; g_85 < 5; g_85 += 1)
            {
                l_212[g_164.f2][g_85] = (-2L);
            }
        }
    }
    return p_12;
}



static const int64_t  func_17(int32_t  p_18, uint16_t  p_19, uint32_t  p_20, uint16_t  p_21, int32_t  p_22)
{ 
    int64_t l_45 = 0x98564DBB9A2F725DLL;
    int32_t l_86 = 0xDE0B5DAEL;
    for (g_31 = 4; (g_31 != 53); g_31 = safe_add_func_int64_t_s_s(g_31, 7))
    { 
        uint32_t l_65 = 4294967287UL;
        int32_t l_81 = 4L;
        g_46[0] = ((safe_lshift_func_uint8_t_u_s(g_31, ((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u((g_31 ^ (safe_add_func_int8_t_s_s(6L, (p_19 , g_30[0])))), p_18)), l_45)) && 0x8A2DB6377F0A061FLL))) ^ g_31);
        for (p_21 = 20; (p_21 <= 46); p_21++)
        { 
            int8_t l_57 = 0x3EL;
            uint32_t l_82 = 1UL;
            if (((safe_sub_func_uint64_t_u_u(p_20, (p_21 <= (safe_mod_func_int16_t_s_s(((p_22 <= (safe_rshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u(g_30[0], 0xBD61L)), l_45))) == p_19), l_57))))) & g_31))
            { 
                int64_t l_58 = (-4L);
                int32_t l_73 = 0x71239B75L;
                g_60++;
                g_74 = ((safe_lshift_func_uint16_t_u_s((g_66 = l_65), 15)) ^ (safe_mul_func_int16_t_s_s((l_73 = (((safe_div_func_int8_t_s_s(0x6CL, (safe_lshift_func_uint8_t_u_u(p_19, ((g_46[2] , 9L) >= 18446744073709551613UL))))) || g_31) ^ p_21)), 1UL)));
                l_86 = (((safe_mul_func_uint16_t_u_u((0xDB9CL >= g_30[2]), ((safe_mul_func_uint8_t_u_u(((l_57 || (g_85 = (l_82--))) <= l_73), 0x43L)) | 0UL))) , g_66) | g_30[2]);
            }
            else
            { 
                g_89 = (safe_sub_func_uint8_t_u_u(((l_45 , 0x6930L) >= ((((((-1L) < g_60) <= g_46[0]) , (-1L)) >= 0xA066EE53L) , 1UL)), 0xD4L));
                return l_45;
            }
        }
    }
    return l_45;
}



static int32_t  func_23(uint32_t  p_24)
{ 
    uint8_t l_27 = 254UL;
    int32_t l_28 = 0xED1D25BBL;
    int32_t l_29[3][5][1];
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
                l_29[i][j][k] = (-7L);
        }
    }
    for (p_24 = 11; (p_24 <= 55); p_24 = safe_add_func_uint32_t_u_u(p_24, 7))
    { 
        return l_27;
    }
    ++g_31;
    return g_30[2];
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_30[i], "g_30[i]", print_hash_value);

    }
    transparent_crc(g_31, "g_31", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_46[i], "g_46[i]", print_hash_value);

    }
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_164.f0, "g_164.f0", print_hash_value);
    transparent_crc(g_164.f1, "g_164.f1", print_hash_value);
    transparent_crc(g_164.f2, "g_164.f2", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_278, "g_278", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
