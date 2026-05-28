// SPDX-License-Identifier: MIT
// cctest_csmith_d2a7dcb7.c --- cctest case csmith_d2a7dcb7 (csmith seed 3534216375)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x7ba06350 */
/* @exp_ticks 0x576d */

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

// Options:   -s 3534216375 -o /tmp/csmith_gen_cs28_c3l/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int8_t  f0;
};

union U1 {
   struct S0  f0;
};


static int32_t g_2 = 1L;
static int32_t g_6 = 1L;
static int32_t g_7 = (-4L);
static uint32_t g_23 = 0xEA7EB8E1L;
static struct S0 g_47 = {0x08L};
static uint32_t g_61 = 0x3EAFCA19L;
static int64_t g_86 = 0x87B67A03D6E0AFCELL;
static int16_t g_89[2] = {0x6582L,0x6582L};
static int32_t g_90 = 0x56AB6569L;
static uint32_t g_91 = 4294967292UL;
static int64_t g_109[1] = {0x8E76B2DC29D91FBELL};
static int16_t g_122[3][2] = {{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}};
static union U1 g_125 = {{1L}};
static int32_t g_148 = 1L;
static int8_t g_149 = 0L;
static int8_t g_150[4] = {1L,1L,1L,1L};
static uint16_t g_180[3][4] = {{65529UL,65529UL,65529UL,65529UL},{65529UL,65529UL,65529UL,65529UL},{65529UL,65529UL,65529UL,65529UL}};
static uint8_t g_181 = 0x85L;
static int32_t g_190[5][5][4] = {{{0xEC598316L,1L,1L,(-1L)},{0L,0x13D0C7CDL,9L,(-1L)},{(-10L),1L,(-10L),9L},{0xC73AE716L,0xEC598316L,0x628D867FL,0xC73AE716L},{0L,9L,0x8CA52837L,0xEC598316L}},{{9L,0x13D0C7CDL,0xD6A9AA89L,0xD6A9AA89L},{9L,9L,0xC73AE716L,5L},{0x8CA52837L,0x23FA78A7L,1L,(-10L)},{1L,(-10L),0xBBA7677CL,1L},{9L,(-10L),1L,(-10L)}},{{(-10L),0x23FA78A7L,0xD6A9AA89L,5L},{0x628D867FL,9L,0xBBA7677CL,0xD6A9AA89L},{0x8CA52837L,0x13D0C7CDL,(-1L),(-10L)},{0x8CA52837L,0xBBA7677CL,0xBBA7677CL,0x8CA52837L},{0x628D867FL,(-10L),0xD6A9AA89L,0xBBA7677CL}},{{(-10L),0x13D0C7CDL,1L,5L},{9L,0x628D867FL,0xBBA7677CL,5L},{1L,0x13D0C7CDL,1L,0xBBA7677CL},{0x8CA52837L,(-10L),0xC73AE716L,0x8CA52837L},{9L,0xBBA7677CL,0xD6A9AA89L,(-10L)}},{{0xBBA7677CL,0x13D0C7CDL,0xD6A9AA89L,0xD6A9AA89L},{9L,9L,0xC73AE716L,5L},{0x8CA52837L,0x23FA78A7L,1L,(-10L)},{1L,(-10L),0xBBA7677CL,1L},{9L,(-10L),1L,(-10L)}}};



static struct S0  func_1(void);
static const int64_t  func_26(uint64_t  p_27, uint32_t  p_28, const union U1  p_29, int8_t  p_30);
static const uint8_t  func_31(uint32_t  p_32, int64_t  p_33, int8_t  p_34, uint32_t  p_35);
static struct S0  func_37(union U1  p_38, int32_t  p_39, int32_t  p_40, uint64_t  p_41, struct S0  p_42);




static struct S0  func_1(void)
{ 
    int32_t l_5[3][3] = {{0xF6DD8D13L,0xD94FE5F3L,0xD94FE5F3L},{0xF6DD8D13L,0xD94FE5F3L,0xD94FE5F3L},{0xF6DD8D13L,0xD94FE5F3L,0xD94FE5F3L}};
    int32_t l_12 = 0xB00868BBL;
    int8_t l_36 = (-5L);
    const union U1 l_65 = {{0L}};
    int16_t l_102 = (-1L);
    struct S0 l_108[4][4] = {{{0x20L},{0xECL},{0xECL},{0x20L}},{{0xECL},{0x20L},{0xECL},{0xECL}},{{0x20L},{0x20L},{-9L},{0x20L}},{{0x20L},{0xECL},{0xECL},{0x20L}}};
    uint8_t l_131 = 1UL;
    int32_t l_151 = 0L;
    int32_t l_193 = (-3L);
    int32_t l_194[1];
    uint64_t l_222[3];
    int i, j;
    for (i = 0; i < 1; i++)
        l_194[i] = 2L;
    for (i = 0; i < 3; i++)
        l_222[i] = 18446744073709551615UL;
    for (g_2 = 14; (g_2 == (-29)); g_2 = safe_sub_func_uint64_t_u_u(g_2, 5))
    { 
        for (g_6 = 2; (g_6 >= 0); g_6 -= 1)
        { 
            uint8_t l_8 = 0x98L;
            for (g_7 = 2; (g_7 >= 0); g_7 -= 1)
            { 
                int32_t l_11 = (-1L);
                l_8--;
                if (l_11)
                    continue;
            }
            l_12 = g_2;
        }
    }
lbl_198:
    l_102 = (((safe_add_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u(((0x92L > (safe_mod_func_uint16_t_u_u((safe_add_func_int16_t_s_s((g_23 = (safe_lshift_func_int8_t_s_u(9L, 4))), ((safe_rshift_func_uint16_t_u_s((func_26(((func_31(g_7, l_36, l_36, l_36) , g_47.f0) , l_36), l_36, l_65, g_7) || 0x47B12BF80AFD421DLL), l_36)) == 0x1AB084DBL))), 0xAF2BL))) , l_12), 5)), l_5[0][1])) || l_5[2][0]) > 0x260EE2FB047B2A23LL);
    for (g_86 = 0; (g_86 <= 2); g_86 += 1)
    { 
        int64_t l_123[2];
        uint64_t l_124 = 18446744073709551607UL;
        struct S0 l_133 = {-1L};
        int32_t l_146 = 1L;
        int32_t l_147 = 0x48E638A3L;
        uint64_t l_152[2];
        const union U1 l_158 = {{-5L}};
        uint32_t l_179 = 0x59428FE1L;
        int32_t l_185 = 6L;
        int32_t l_186 = 0xABD92496L;
        int32_t l_188 = 7L;
        int32_t l_191[2];
        uint32_t l_195 = 0x57AD140FL;
        uint32_t l_210 = 4294967295UL;
        int i;
        for (i = 0; i < 2; i++)
            l_123[i] = 0L;
        for (i = 0; i < 2; i++)
            l_152[i] = 0xFF6E85A4DA777F1DLL;
        for (i = 0; i < 2; i++)
            l_191[i] = 1L;
        for (g_6 = 0; (g_6 <= 2); g_6 += 1)
        { 
            struct S0 l_103 = {0xBDL};
            return l_103;
        }
        for (g_7 = 2; (g_7 >= 0); g_7 -= 1)
        { 
            int64_t l_106[4] = {0x7EE776C1F1C6DC0DLL,0x7EE776C1F1C6DC0DLL,0x7EE776C1F1C6DC0DLL,0x7EE776C1F1C6DC0DLL};
            struct S0 l_121 = {0x1FL};
            int32_t l_162[2];
            int i, j;
            for (i = 0; i < 2; i++)
                l_162[i] = (-1L);
            g_2 = l_5[g_7][g_86];
            if ((safe_sub_func_uint16_t_u_u(((l_5[g_86][g_86] || l_106[3]) == (g_6 && 0xE6F1L)), l_5[g_7][g_86])))
            { 
                struct S0 l_107 = {0L};
                l_108[2][3] = l_107;
            }
            else
            { 
                uint32_t l_110 = 4294967295UL;
                uint32_t l_132[5][1] = {{2UL},{0xAB3A25EAL},{2UL},{0xAB3A25EAL},{2UL}};
                int i, j;
                l_110--;
                l_124 = (safe_mod_func_uint32_t_u_u((g_90 >= (safe_rshift_func_uint8_t_u_u(4UL, 1))), (safe_div_func_uint8_t_u_u((g_122[1][1] = (safe_mod_func_int16_t_s_s((l_121 , (0x224DL > g_109[0])), l_121.f0))), l_123[1]))));
                l_121 = func_37(g_125, l_110, ((((safe_unary_minus_func_int16_t_s((((((safe_rshift_func_uint16_t_u_u(65529UL, ((safe_div_func_int8_t_s_s(l_131, g_122[1][1])) != 0xD521574284727EF2LL))) & 0xF2DD187DL) == 0x596FL) , 0xC07AB760D964AFFBLL) ^ l_110))) > 0x083D25ECE1F0CC2DLL) <= g_23) != l_132[1][0]), g_7, l_133);
            }
            if (((safe_add_func_int32_t_s_s(l_123[0], ((safe_sub_func_int32_t_s_s((l_121.f0 , (safe_rshift_func_uint8_t_u_s((l_133.f0 , (l_146 = (safe_rshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(1UL, g_23)), 1UL)), 7)))), g_109[0]))), g_91)) != l_123[0]))) && g_109[0]))
            { 
                if (l_106[3])
                    break;
                g_125.f0 = (l_147 , l_108[0][0]);
            }
            else
            { 
                int32_t l_161 = (-1L);
                ++l_152[0];
                l_162[1] ^= ((l_147 , (!(safe_mod_func_int64_t_s_s((l_158 , (l_102 >= (safe_add_func_uint16_t_u_u(l_121.f0, g_150[2])))), 0x2512C82440A59923LL)))) >= l_161);
            }
        }
        g_6 |= (safe_mod_func_uint8_t_u_u(l_124, (((((safe_rshift_func_int16_t_s_u((65535UL && ((safe_sub_func_uint64_t_u_u((g_180[2][2] = (((safe_sub_func_uint64_t_u_u((0x8AA747B8834005F2LL && (((~((safe_mul_func_uint16_t_u_u(((((safe_add_func_int8_t_s_s((~(((safe_mod_func_int16_t_s_s(((g_90 >= l_5[2][0]) <= (-10L)), g_23)) & g_148) ^ l_179)), l_12)) >= l_108[2][3].f0) , l_108[2][3].f0) < 0UL), 0x2AFCL)) == (-1L))) && l_123[1]) , g_23)), g_109[0])) && g_122[1][1]) | 18446744073709551611UL)), g_109[0])) != l_152[0])), g_61)) , 0L) == l_147) , 0L) ^ g_86)));
        for (l_36 = 0; (l_36 <= 2); l_36 += 1)
        { 
            int32_t l_184[3][5] = {{(-1L),0x989F2823L,(-1L),0x989F2823L,(-1L)},{0x2F59D8B5L,0x2F59D8B5L,0x2F59D8B5L,0x2F59D8B5L,0x2F59D8B5L},{(-1L),0x989F2823L,(-1L),0x989F2823L,(-1L)}};
            union U1 l_202 = {{-7L}};
            int32_t l_221 = 0x8BB71FC3L;
            int i, j;
            g_181--;
            if (l_5[l_36][l_36])
            { 
                int16_t l_187 = 0x69A3L;
                int32_t l_189 = 0L;
                int32_t l_192[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_192[i] = 0x35B6E95BL;
                l_195--;
                if (l_158.f0.f0)
                    goto lbl_198;
            }
            else
            { 
                uint16_t l_199 = 0x0DCDL;
                int32_t l_207 = 0x514DB471L;
                --l_199;
                l_202.f0 = func_37(l_202, l_202.f0.f0, (safe_rshift_func_int16_t_s_u(((safe_add_func_uint16_t_u_u(((((g_180[2][2]++) ^ (l_210 && ((safe_add_func_int64_t_s_s(g_150[2], (-7L))) < 18446744073709551608UL))) , g_61) && l_193), 1L)) > g_190[2][1][1]), g_122[1][1])), l_151, g_125.f0);
                g_190[3][3][1] = (safe_rshift_func_uint16_t_u_s(g_90, 13));
            }
            g_190[4][4][0] |= (l_184[1][3] | (((safe_add_func_uint32_t_u_u((0L || ((((((((((safe_add_func_uint8_t_u_u((g_6 & (((l_210 <= 0x83L) >= g_149) <= g_180[2][2])), 1UL)) != 3L) & 4L) , g_47.f0) > 0UL) == g_47.f0) <= g_61) && l_221) ^ l_184[2][1]) || 0UL)), g_122[1][1])) < l_222[1]) | 0x8ECB81EBL));
        }
    }
    return l_108[1][3];
}



static const int64_t  func_26(uint64_t  p_27, uint32_t  p_28, const union U1  p_29, int8_t  p_30)
{ 
    uint32_t l_66[5];
    int32_t l_84 = 2L;
    int32_t l_85 = 0x652FC611L;
    int32_t l_87 = 0L;
    int32_t l_88[5];
    int i;
    for (i = 0; i < 5; i++)
        l_66[i] = 0UL;
    for (i = 0; i < 5; i++)
        l_88[i] = 0x2DBBA470L;
    if ((g_2 > 0x2CA52C43L))
    { 
        struct S0 l_67[5][2] = {{{0x23L},{0xDFL}},{{0xDFL},{0x23L}},{{0xDFL},{0xDFL}},{{0x23L},{0xDFL}},{{0xDFL},{0x23L}}};
        int i, j;
lbl_70:
        l_67[0][1] = ((3L == (l_66[4] ^= p_29.f0.f0)) , p_29.f0);
        for (g_2 = (-29); (g_2 < 3); ++g_2)
        { 
            int32_t l_71 = (-8L);
            if (g_2)
                goto lbl_70;
            if (l_71)
                continue;
        }
    }
    else
    { 
        uint32_t l_82 = 0x259947D9L;
        int32_t l_83[5][4] = {{0L,2L,2L,0L},{0L,2L,2L,0L},{0L,2L,2L,0L},{0L,2L,2L,0L},{0L,2L,2L,0L}};
        int i, j;
        l_83[4][1] &= (safe_mul_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u(((l_66[4] == (safe_rshift_func_uint8_t_u_u(((safe_div_func_int16_t_s_s((l_82 &= (((0x32D1299D621DD8CALL < (safe_rshift_func_int16_t_s_u(0xA87DL, g_61))) != l_66[0]) && 6L)), g_47.f0)) <= p_27), p_28))) < g_47.f0), g_2)) || p_27) <= g_6), 0x0DDAL));
    }
    g_91++;
    for (p_30 = 0; (p_30 <= (-28)); --p_30)
    { 
        int16_t l_97 = 0x679FL;
        l_85 |= (g_6 || (((!l_88[4]) != l_97) | ((safe_add_func_uint32_t_u_u(((safe_div_func_uint32_t_u_u(((p_27 | 4UL) ^ p_27), 4294967295UL)) , g_6), 4294967290UL)) ^ g_86)));
    }
    return p_30;
}



static const uint8_t  func_31(uint32_t  p_32, int64_t  p_33, int8_t  p_34, uint32_t  p_35)
{ 
    union U1 l_43 = {{8L}};
    int32_t l_44[5][1][3] = {{{0x0CEC5193L,0x0CEC5193L,0x0CEC5193L}},{{1L,1L,1L}},{{0x0CEC5193L,0x0CEC5193L,0x0CEC5193L}},{{1L,1L,1L}},{{0x0CEC5193L,0x0CEC5193L,0x0CEC5193L}}};
    int32_t l_46 = 0xB0A94FE8L;
    int i, j, k;
    g_47 = func_37(l_43, l_44[1][0][0], ((l_46 = ((g_6 >= (!((l_44[4][0][2] >= l_44[4][0][0]) ^ (-1L)))) == g_6)) < l_44[2][0][1]), l_44[1][0][0], g_47);
    g_47 = (l_43.f0 = g_47);
    return p_34;
}



static struct S0  func_37(union U1  p_38, int32_t  p_39, int32_t  p_40, uint64_t  p_41, struct S0  p_42)
{ 
    const int32_t l_52[5] = {0x32CAC245L,0x32CAC245L,0x32CAC245L,0x32CAC245L,0x32CAC245L};
    int32_t l_54 = 0x75DAAFE4L;
    int64_t l_56[4] = {0x5DAE11CD4EE3B919LL,0x5DAE11CD4EE3B919LL,0x5DAE11CD4EE3B919LL,0x5DAE11CD4EE3B919LL};
    int32_t l_57 = 7L;
    int32_t l_58 = 0xF100F83BL;
    int32_t l_59 = 0x56CDAA93L;
    int32_t l_60[2];
    struct S0 l_64 = {0xA5L};
    int i;
    for (i = 0; i < 2; i++)
        l_60[i] = 5L;
    g_6 &= (((p_38.f0.f0 = (safe_sub_func_int64_t_s_s((safe_rshift_func_int8_t_s_u(l_52[4], (l_54 = (safe_unary_minus_func_uint16_t_u(1UL))))), (safe_unary_minus_func_int32_t_s((-9L)))))) , g_7) <= 0x953C535718A84D23LL);
    for (p_40 = 0; p_40 < 4; p_40 += 1)
    {
        l_56[p_40] = 0x0D94485E09B704DCLL;
    }
    ++g_61;
    return l_64;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_47.f0, "g_47.f0", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_89[i], "g_89[i]", print_hash_value);

    }
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_109[i], "g_109[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_122[i][j], "g_122[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_125.f0.f0, "g_125.f0.f0", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_150[i], "g_150[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_180[i][j], "g_180[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_181, "g_181", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_190[i][j][k], "g_190[i][j][k]", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
