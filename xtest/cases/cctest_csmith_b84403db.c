// SPDX-License-Identifier: MIT
// cctest_csmith_b84403db.c --- cctest case csmith_b84403db (csmith seed 3091465179)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xfb0a5825 */
/* @exp_ticks 0x407c */

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

// Options:   -s 3091465179 -o /tmp/csmith_gen_46mgdi_n/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int64_t  f0;
   int32_t  f1;
   uint32_t  f2;
};

struct S1 {
   uint8_t  f0;
   const uint32_t  f1;
   int32_t  f2;
   struct S0  f3;
   int16_t  f4;
   struct S0  f5;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   uint32_t  f0;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S3 {
   struct S2  f0;
   int8_t  f1;
   int16_t  f2;
   struct S1  f3;
};
#pragma pack(pop)

union U4 {
   uint16_t  f0;
   struct S1  f1;
   int16_t  f2;
   int16_t  f3;
};


static int32_t g_2 = (-6L);
static struct S2 g_24[1][2] = {{{4294967295UL},{4294967295UL}}};
static int32_t g_25 = (-1L);
static struct S0 g_34 = {0L,0xC241E971L,18446744073709551607UL};
static union U4 g_88[1] = {{65527UL}};
static struct S3 g_94 = {{0xC3D6C756L},0x6FL,0L,{0xCFL,0x465745E9L,0x913E687FL,{-3L,0xB716CAE9L,18446744073709551606UL},-1L,{0x1BB5F034421CF732LL,0L,1UL}}};
static int32_t g_126 = 0xEFB25B8DL;
static int16_t g_127[4][2] = {{0x6942L,0x6942L},{0x6942L,0x6942L},{0x6942L,0x6942L},{0x6942L,0x6942L}};
static uint8_t g_128 = 251UL;
static int16_t g_196 = 0xC9CAL;
static int64_t g_197 = 0xFC2AAD8E3870AA0ELL;
static int8_t g_198 = 0xEBL;
static int8_t g_199 = 0xCCL;
static uint32_t g_202[5] = {1UL,1UL,1UL,1UL,1UL};
static int16_t g_245[5] = {(-4L),(-4L),(-4L),(-4L),(-4L)};
static uint32_t g_246 = 8UL;
static uint16_t g_269[1][3] = {{65535UL,65535UL,65535UL}};



static struct S3  func_1(void);
static struct S3  func_5(int16_t  p_6, uint16_t  p_7);
static int64_t  func_22(struct S2  p_23);
static uint16_t  func_31(int8_t  p_32, struct S0  p_33);




static struct S3  func_1(void)
{ 
    uint8_t l_8[3][5][2] = {{{255UL,6UL},{1UL,0x0BL},{0xB8L,0xB8L},{255UL,0xB8L},{0xB8L,0x0BL}},{{1UL,6UL},{255UL,1UL},{6UL,0x0BL},{6UL,1UL},{255UL,6UL}},{{1UL,0x0BL},{255UL,255UL},{0x71L,255UL},{255UL,0x72L},{0x0BL,0x82L}}};
    int32_t l_120 = 0xF7E9F5D4L;
    int64_t l_161 = 7L;
    int32_t l_169 = 5L;
    int32_t l_193 = 0x57DC1769L;
    int32_t l_195 = 0xAC21EE26L;
    int32_t l_201 = 0xE10008B8L;
    struct S0 l_250 = {0x672BC6C16407E886LL,-8L,1UL};
    uint64_t l_252 = 18446744073709551615UL;
    struct S0 l_259 = {-9L,0x364701A2L,18446744073709551615UL};
    struct S0 l_268[2][1] = {{{1L,0xDB8F6AD2L,18446744073709551615UL}},{{1L,0xDB8F6AD2L,18446744073709551615UL}}};
    int8_t l_270 = 1L;
    int8_t l_271 = 0x39L;
    struct S3 l_272[1][2] = {{{{0x3DCEDF3DL},0x78L,0xB903L,{255UL,0x69EDF5D5L,-5L,{0x473E9E374AD17EFBLL,-7L,1UL},-1L,{0L,-1L,0x9A00F021L}}},{{0x3DCEDF3DL},0x78L,0xB903L,{255UL,0x69EDF5D5L,-5L,{0x473E9E374AD17EFBLL,-7L,1UL},-1L,{0L,-1L,0x9A00F021L}}}}};
    int i, j, k;
    for (g_2 = 6; (g_2 < 19); g_2++)
    { 
        int32_t l_9[2];
        struct S3 l_100 = {{0x70ED8B55L},0L,0L,{0xE7L,1UL,0x32D76200L,{-6L,0x35FECE65L,18446744073709551615UL},0L,{1L,7L,8UL}}};
        uint64_t l_124[5][2];
        int i, j;
        for (i = 0; i < 2; i++)
            l_9[i] = 0x8B721290L;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 2; j++)
                l_124[i][j] = 0UL;
        }
    }
    for (g_2 = 0; (g_2 >= 17); g_2++)
    { 
        int32_t l_145 = 0L;
        struct S3 l_170 = {{0x3C9A5DC9L},1L,0x0539L,{8UL,0x4E0C1326L,1L,{-1L,0x65C74EECL,9UL},0L,{0xF1001EED81C09BDFLL,1L,18446744073709551615UL}}};
        int32_t l_200 = 0x4EDDFC61L;
        int32_t l_244 = 0xA2F38F12L;
        if ((g_94.f3.f3.f1 = (safe_sub_func_int32_t_s_s(g_24[0][0].f0, g_88[0].f2))))
        { 
            uint32_t l_140[1];
            int i;
            for (i = 0; i < 1; i++)
                l_140[i] = 0x08CE7AB6L;
            for (g_94.f3.f4 = 0; (g_94.f3.f4 <= 20); g_94.f3.f4 = safe_add_func_int16_t_s_s(g_94.f3.f4, 8))
            { 
                return g_94;
            }
            l_140[0]--;
        }
        else
        { 
            int8_t l_146 = 0xDCL;
            int32_t l_147 = 0x4F034BF2L;
            for (l_120 = 0; (l_120 == (-24)); l_120--)
            { 
                uint32_t l_148 = 4294967287UL;
                l_148--;
                l_161 = (safe_mod_func_int8_t_s_s((g_94.f1 |= (((safe_div_func_int16_t_s_s(g_24[0][0].f0, (safe_sub_func_uint64_t_u_u(0x0DFB425780FFA4CDLL, (safe_rshift_func_int16_t_s_s(l_147, (safe_sub_func_uint64_t_u_u(g_34.f2, g_2)))))))) <= 0x50D2B45CL) | (-7L))), g_94.f3.f5.f1));
                g_94.f3.f5.f1 = g_88[0].f0;
            }
            if ((l_147 = ((safe_mul_func_uint16_t_u_u(((g_94.f3.f0 = (safe_lshift_func_int16_t_s_u((g_94.f3.f0 < g_88[0].f2), 10))) != g_34.f2), (0xA7L < g_94.f3.f3.f2))) || l_145)))
            { 
                struct S2 l_166 = {4294967295UL};
                l_166 = l_166;
            }
            else
            { 
                g_25 &= ((g_24[0][0].f0 == (g_88[0].f1.f0 = l_147)) != (1UL < (safe_div_func_int16_t_s_s(g_94.f3.f5.f1, g_94.f3.f5.f2))));
            }
        }
        if (((l_169 &= 0L) , l_145))
        { 
            uint8_t l_186[1][4] = {{0x33L,0x33L,0x33L,0x33L}};
            int32_t l_188 = (-6L);
            int32_t l_190[2];
            struct S1 l_237[3][3][2] = {{{{252UL,4294967295UL,0xB8245335L,{-1L,0xD95F1D41L,0UL},0x1410L,{0x6F1CC5E1F845FBA0LL,0xDB420EFCL,1UL}},{252UL,4294967295UL,0xB8245335L,{-1L,0xD95F1D41L,0UL},0x1410L,{0x6F1CC5E1F845FBA0LL,0xDB420EFCL,1UL}}},{{252UL,4294967295UL,0xB8245335L,{-1L,0xD95F1D41L,0UL},0x1410L,{0x6F1CC5E1F845FBA0LL,0xDB420EFCL,1UL}},{0x74L,4294967295UL,-5L,{0L,0L,0x9231A450L},-6L,{-6L,0x0CF1EBDDL,0x71AF357AL}}},{{252UL,4294967295UL,0xB8245335L,{-1L,0xD95F1D41L,0UL},0x1410L,{0x6F1CC5E1F845FBA0LL,0xDB420EFCL,1UL}},{252UL,4294967295UL,0xB8245335L,{-1L,0xD95F1D41L,0UL},0x1410L,{0x6F1CC5E1F845FBA0LL,0xDB420EFCL,1UL}}}},{{{252UL,4294967295UL,0xB8245335L,{-1L,0xD95F1D41L,0UL},0x1410L,{0x6F1CC5E1F845FBA0LL,0xDB420EFCL,1UL}},{0x74L,4294967295UL,-5L,{0L,0L,0x9231A450L},-6L,{-6L,0x0CF1EBDDL,0x71AF357AL}}},{{252UL,4294967295UL,0xB8245335L,{-1L,0xD95F1D41L,0UL},0x1410L,{0x6F1CC5E1F845FBA0LL,0xDB420EFCL,1UL}},{252UL,4294967295UL,0xB8245335L,{-1L,0xD95F1D41L,0UL},0x1410L,{0x6F1CC5E1F845FBA0LL,0xDB420EFCL,1UL}}},{{252UL,4294967295UL,0xB8245335L,{-1L,0xD95F1D41L,0UL},0x1410L,{0x6F1CC5E1F845FBA0LL,0xDB420EFCL,1UL}},{0x74L,4294967295UL,-5L,{0L,0L,0x9231A450L},-6L,{-6L,0x0CF1EBDDL,0x71AF357AL}}}},{{{252UL,4294967295UL,0xB8245335L,{-1L,0xD95F1D41L,0UL},0x1410L,{0x6F1CC5E1F845FBA0LL,0xDB420EFCL,1UL}},{252UL,4294967295UL,0xB8245335L,{-1L,0xD95F1D41L,0UL},0x1410L,{0x6F1CC5E1F845FBA0LL,0xDB420EFCL,1UL}}},{{252UL,4294967295UL,0xB8245335L,{-1L,0xD95F1D41L,0UL},0x1410L,{0x6F1CC5E1F845FBA0LL,0xDB420EFCL,1UL}},{0x74L,4294967295UL,-5L,{0L,0L,0x9231A450L},-6L,{-6L,0x0CF1EBDDL,0x71AF357AL}}},{{252UL,4294967295UL,0xB8245335L,{-1L,0xD95F1D41L,0UL},0x1410L,{0x6F1CC5E1F845FBA0LL,0xDB420EFCL,1UL}},{252UL,4294967295UL,0xB8245335L,{-1L,0xD95F1D41L,0UL},0x1410L,{0x6F1CC5E1F845FBA0LL,0xDB420EFCL,1UL}}}}};
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_190[i] = 0x52BA2A9DL;
            if (((l_170 , ((g_94.f3.f4 || (safe_mod_func_int64_t_s_s(((safe_div_func_int8_t_s_s((((safe_div_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(g_25, (((l_186[0][3] = ((safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s(0x59E253D9L)), g_94.f1)), l_170.f1)), 0UL)) < g_88[0].f2)) | g_94.f3.f3.f1) , 0xC7L))), g_88[0].f3)) , g_34) , (-1L)), 0x0FL)) >= g_24[0][0].f0), g_88[0].f0))) , (-1L))) > 4L))
            { 
                int16_t l_187[4];
                int32_t l_189 = 0L;
                int32_t l_191 = 0xE4E383BDL;
                int32_t l_192 = (-1L);
                int32_t l_194 = 1L;
                int i;
                for (i = 0; i < 4; i++)
                    l_187[i] = 0xF4AFL;
                --g_202[0];
                if (l_187[1])
                    continue;
                g_34.f1 = (safe_mod_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(((safe_mod_func_uint16_t_u_u(0x031BL, ((l_8[0][3][0] > (g_94.f3.f4 = (((safe_lshift_func_int8_t_s_s(((g_94.f3.f5.f1 = (safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((safe_div_func_int64_t_s_s((safe_mod_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((l_186[0][2] && g_94.f1), (-1L))), 0xDB38L)), g_94.f0.f0)) < l_189), l_194)), l_170.f3.f3.f1))) , l_8[0][0][1]), l_192)) || g_202[0]) & 5UL))) , g_88[0].f2))) >= l_8[1][3][0]), l_190[1])), 0x42813DB6L));
            }
            else
            { 
                int64_t l_225 = (-1L);
                g_24[0][0] = g_24[0][0];
                g_25 |= (safe_lshift_func_int16_t_s_u(l_225, 9));
            }
            l_170.f3.f5.f1 = (safe_sub_func_int64_t_s_s(1L, 0xDD12310BAFB8AB7BLL));
            if ((0UL <= (((safe_lshift_func_int8_t_s_s(((g_88[0].f2 = 0x6FD3L) && l_190[1]), g_94.f2)) == 0xC7L) ^ 0L)))
            { 
                int16_t l_238[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_238[i] = 0x6B9EL;
                g_25 = ((safe_unary_minus_func_int16_t_s(l_193)) , (l_120 , (((g_198 || (safe_div_func_uint8_t_u_u(((safe_div_func_uint64_t_u_u(((safe_div_func_int64_t_s_s(((l_237[2][2][0] , g_94.f3.f0) || 1UL), 1UL)) || g_94.f2), g_94.f3.f3.f0)) < 0x727ED88184EF315ALL), g_94.f3.f3.f1))) != 0x8AE0F1C9B2D7F51FLL) | 65530UL)));
                if (g_2)
                    break;
                l_170.f3.f2 = l_238[0];
            }
            else
            { 
                uint32_t l_239 = 1UL;
                int32_t l_242 = 0x84501794L;
                int32_t l_243[3][5];
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_243[i][j] = (-9L);
                }
                ++l_239;
                ++g_246;
                if (l_200)
                    continue;
            }
        }
        else
        { 
            int16_t l_251 = (-2L);
            g_25 ^= (!(l_195 == 0x0FBBL));
            for (g_34.f0 = 0; (g_34.f0 <= 1); g_34.f0 += 1)
            { 
                int i, j;
                l_170.f3.f3 = l_250;
                g_126 |= g_127[(g_34.f0 + 2)][g_34.f0];
            }
            if (l_251)
                continue;
        }
        --l_252;
    }
    l_271 &= (l_270 |= ((safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_s((l_259 , ((0L && (safe_lshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((g_269[0][0] = ((l_268[0][0] = g_94.f3.f5) , g_199)), 0x87FA20CB9833479ELL)), g_127[2][1])), g_94.f3.f3.f1)), 6))) && 0x8016A9ADC7AF598CLL)), g_94.f3.f2)) < (-9L)), g_94.f3.f5.f2)) < 2L));
    return l_272[0][1];
}



static struct S3  func_5(int16_t  p_6, uint16_t  p_7)
{ 
    int8_t l_90 = 0x24L;
    int32_t l_91 = 0L;
    int32_t l_92[1][5][1];
    int32_t l_93 = 0x1BDD1960L;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
                l_92[i][j][k] = (-1L);
        }
    }
    l_93 = (l_92[0][4][0] = (l_91 = ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_s(p_7, g_2)) || (safe_add_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u(((safe_div_func_int64_t_s_s(func_22(g_24[0][0]), l_90)) || 0x9B921A34F7B72675LL), p_6)) , 246UL), p_7))) & p_6), p_7)), l_90)) >= 0x3AL)));
    return g_94;
}



static int64_t  func_22(struct S2  p_23)
{ 
    int16_t l_43 = 0xAE63L;
    struct S1 l_44 = {246UL,0x10CE4AC0L,1L,{0x4D571F7FC01A0776LL,0x8D16E9DEL,0x70D16AAEL},-6L,{0L,0x7A4C96F5L,0xA2083815L}};
    uint32_t l_47 = 1UL;
    union U4 l_67 = {0xCEACL};
    struct S2 l_87 = {4294967295UL};
    int32_t l_89 = 0xDCA9E6B2L;
    for (p_23.f0 = 0; (p_23.f0 <= 0); p_23.f0 += 1)
    { 
        uint16_t l_38 = 3UL;
        int32_t l_48 = 0xF0491844L;
        for (g_25 = 0; (g_25 <= 0); g_25 += 1)
        { 
            uint32_t l_26 = 0xB785AA1EL;
            l_26++;
        }
        l_38 = ((-1L) > (safe_mod_func_uint16_t_u_u(g_24[0][0].f0, (g_2 , func_31(g_24[0][0].f0, g_34)))));
        l_48 = (18446744073709551613UL & ((safe_add_func_uint64_t_u_u((((((safe_mod_func_uint8_t_u_u((l_43 >= ((l_44 , (safe_div_func_uint64_t_u_u(g_2, l_44.f3.f0))) ^ g_25)), l_47)) & p_23.f0) <= p_23.f0) != p_23.f0) == 0xBA75048CB0098421LL), p_23.f0)) < g_2));
        for (l_44.f3.f0 = 0; (l_44.f3.f0 >= 0); l_44.f3.f0 -= 1)
        { 
            uint16_t l_57 = 0UL;
            int32_t l_60[5] = {0xBAC7944CL,0xBAC7944CL,0xBAC7944CL,0xBAC7944CL,0xBAC7944CL};
            int i;
            g_34.f1 = (safe_add_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_s(p_23.f0, 8)) > l_48) >= ((safe_mul_func_int16_t_s_s(0x01B3L, 65531UL)) >= (-2L))), 3L));
            if ((g_34.f1 = (safe_add_func_uint64_t_u_u((g_24[0][0].f0 , l_57), (safe_lshift_func_uint16_t_u_u((g_2 <= ((l_60[2] |= ((p_23.f0 | 6UL) , 0x8675L)) == p_23.f0)), g_25))))))
            { 
                uint32_t l_70 = 1UL;
                int32_t l_71 = (-6L);
                int i, j;
                l_71 |= (l_48 = (((p_23.f0 <= (safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((g_34.f0 = (l_44.f5.f1 ^= ((((safe_rshift_func_uint16_t_u_s((l_67 , 0x8BF7L), 15)) || (safe_sub_func_int16_t_s_s(1L, p_23.f0))) & l_70) <= p_23.f0))) != p_23.f0), 5)), g_2))) , l_38) < g_34.f2));
                l_44.f2 = (safe_sub_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u(p_23.f0, (safe_rshift_func_uint16_t_u_u((g_34.f2 , ((((g_24[l_44.f3.f0][p_23.f0] , (((l_38 || 0xA9FCL) != p_23.f0) && 1L)) ^ p_23.f0) > g_34.f0) != l_57)), l_71)))) <= l_60[2]), 0xF9L)) & 4UL), 4294967293UL));
            }
            else
            { 
                g_25 |= 0x2E681A9BL;
                l_89 |= ((l_48 &= (safe_rshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u(l_60[4], ((safe_mul_func_int16_t_s_s(0x3CCEL, (safe_unary_minus_func_int16_t_s(((l_87 , (g_88[0] , 0xA15F1EE03666D709LL)) || 0xC1C6A88B8388ADF1LL))))) & 247UL))), 4))) | p_23.f0);
            }
        }
    }
    return p_23.f0;
}



static uint16_t  func_31(int8_t  p_32, struct S0  p_33)
{ 
    uint8_t l_35 = 255UL;
    l_35--;
    return l_35;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_24[i][j].f0, "g_24[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_34.f0, "g_34.f0", print_hash_value);
    transparent_crc(g_34.f1, "g_34.f1", print_hash_value);
    transparent_crc(g_34.f2, "g_34.f2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_88[i].f0, "g_88[i].f0", print_hash_value);
        transparent_crc(g_88[i].f2, "g_88[i].f2", print_hash_value);
        transparent_crc(g_88[i].f3, "g_88[i].f3", print_hash_value);

    }
    transparent_crc(g_94.f0.f0, "g_94.f0.f0", print_hash_value);
    transparent_crc(g_94.f1, "g_94.f1", print_hash_value);
    transparent_crc(g_94.f2, "g_94.f2", print_hash_value);
    transparent_crc(g_94.f3.f0, "g_94.f3.f0", print_hash_value);
    transparent_crc(g_94.f3.f1, "g_94.f3.f1", print_hash_value);
    transparent_crc(g_94.f3.f2, "g_94.f3.f2", print_hash_value);
    transparent_crc(g_94.f3.f3.f0, "g_94.f3.f3.f0", print_hash_value);
    transparent_crc(g_94.f3.f3.f1, "g_94.f3.f3.f1", print_hash_value);
    transparent_crc(g_94.f3.f3.f2, "g_94.f3.f3.f2", print_hash_value);
    transparent_crc(g_94.f3.f4, "g_94.f3.f4", print_hash_value);
    transparent_crc(g_94.f3.f5.f0, "g_94.f3.f5.f0", print_hash_value);
    transparent_crc(g_94.f3.f5.f1, "g_94.f3.f5.f1", print_hash_value);
    transparent_crc(g_94.f3.f5.f2, "g_94.f3.f5.f2", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_127[i][j], "g_127[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_196, "g_196", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_202[i], "g_202[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_245[i], "g_245[i]", print_hash_value);

    }
    transparent_crc(g_246, "g_246", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_269[i][j], "g_269[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
