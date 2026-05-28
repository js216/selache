// SPDX-License-Identifier: MIT
// cctest_csmith_acef3fd4.c --- cctest case csmith_acef3fd4 (csmith seed 2901360596)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xacbef6e0 */
/* @exp_ticks 0x6332 */

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

// Options:   -s 2901360596 -o /tmp/csmith_gen_ncogf5t8/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int32_t  f0;
   uint64_t  f1;
   int64_t  f2;
};

union U1 {
   int32_t  f0;
   const uint8_t  f1;
   struct S0  f2;
   struct S0  f3;
};


static int32_t g_3[1] = {0L};
static int32_t g_4 = (-2L);
static int32_t g_5 = (-1L);
static uint8_t g_34[2][1] = {{0xEDL},{0xEDL}};
static int32_t g_51 = 0xEBB6F2BAL;
static struct S0 g_57 = {-1L,0x72B46FAC5ADF6F6DLL,0x7974D37718CE6826LL};
static uint16_t g_66 = 0UL;
static int8_t g_69[7] = {0x14L,(-9L),0x14L,0x14L,(-9L),0x14L,0x14L};
static uint8_t g_90 = 0xFDL;
static uint32_t g_94 = 0x990E41E6L;
static int32_t g_112 = (-5L);
static uint16_t g_114 = 65527UL;
static uint32_t g_143 = 0xFBB67B20L;
static uint32_t g_147 = 0x2A52D84EL;
static int16_t g_159 = (-9L);
static int8_t g_170 = 0x3FL;
static int64_t g_171 = 1L;
static int32_t **g_209 = (void*)0;
static int32_t *g_214 = &g_5;
static int32_t **g_213[1][2] = {{&g_214,&g_214}};
static union U1 g_245[7] = {{-3L},{0xF811F13EL},{-3L},{-3L},{0xF811F13EL},{-3L},{-3L}};
static union U1 *g_244[7] = {&g_245[0],&g_245[0],&g_245[0],&g_245[0],&g_245[0],&g_245[0],&g_245[0]};
static uint64_t *g_263 = &g_57.f1;
static int32_t g_358 = (-1L);
static uint8_t g_370 = 251UL;
static int32_t g_375 = (-6L);
static uint16_t * const g_446 = &g_66;
static uint16_t * const *g_445 = &g_446;
static int8_t g_463 = (-3L);
static int8_t * const g_462 = &g_463;
static int8_t * const *g_461 = &g_462;
static int32_t g_549 = 0xEC2909BCL;
static uint64_t **g_606[3][1][6] = {{{&g_263,&g_263,&g_263,&g_263,&g_263,&g_263}},{{&g_263,&g_263,&g_263,&g_263,&g_263,&g_263}},{{&g_263,&g_263,&g_263,&g_263,&g_263,&g_263}}};
static uint64_t ***g_605 = &g_606[0][0][0];
static uint8_t *g_703 = (void*)0;
static uint8_t **g_702 = &g_703;
static struct S0 g_734 = {1L,0xCC65643065BB1BA4LL,0x63C8EDED18D0BE91LL};
static uint32_t *g_835 = &g_143;
static uint32_t **g_834 = &g_835;
static int32_t *** const g_854 = &g_213[0][0];
static int32_t *** const *g_853 = &g_854;
static const int32_t g_861[5] = {6L,6L,6L,6L,6L};
static const union U1 * const g_944[5][7] = {{&g_245[0],&g_245[0],(void*)0,&g_245[0],&g_245[0],(void*)0,&g_245[0]},{&g_245[0],&g_245[4],&g_245[0],&g_245[0],&g_245[0],&g_245[0],&g_245[0]},{&g_245[0],&g_245[0],&g_245[0],&g_245[0],&g_245[0],&g_245[4],&g_245[4]},{&g_245[0],&g_245[0],(void*)0,&g_245[0],&g_245[0],(void*)0,&g_245[0]},{&g_245[0],&g_245[4],&g_245[0],&g_245[0],&g_245[0],&g_245[4],&g_245[0]}};
static const union U1 * const *g_943 = &g_944[0][5];
static const union U1 * const **g_942 = &g_943;
static union U1 g_969[6][7] = {{{-9L},{0x179EAAF6L},{0L},{0xB6A20B2AL},{0xB6A20B2AL},{0L},{0x179EAAF6L}},{{0xC00C15FBL},{9L},{0x2341F7F1L},{-9L},{0xB6A20B2AL},{0L},{6L}},{{0L},{0x720A4574L},{9L},{-10L},{1L},{0x7D2FA775L},{0x2341F7F1L}},{{-1L},{0L},{-9L},{-9L},{0L},{-1L},{0L}},{{9L},{0x2341F7F1L},{-9L},{0xB6A20B2AL},{0L},{6L},{0L}},{{6L},{1L},{9L},{-1L},{-7L},{0L},{-7L}}};
static uint32_t g_1074 = 7UL;
static uint64_t g_1110 = 1UL;
static int8_t *g_1136 = (void*)0;
static int8_t **g_1135 = &g_1136;
static const uint32_t *g_1240 = (void*)0;
static uint64_t ***g_1323 = &g_606[2][0][2];
static uint64_t **** const g_1322 = &g_1323;
static uint64_t **** const *g_1321[5][5] = {{&g_1322,(void*)0,&g_1322,&g_1322,(void*)0},{(void*)0,&g_1322,&g_1322,(void*)0,&g_1322},{(void*)0,(void*)0,&g_1322,(void*)0,(void*)0},{&g_1322,(void*)0,&g_1322,&g_1322,(void*)0},{(void*)0,&g_1322,&g_1322,(void*)0,&g_1322}};
static uint32_t g_1413[6][6][3] = {{{0x3BEE6F58L,0x782C59FCL,0xC73E2569L},{4294967295UL,0x5EAC6F72L,4294967290UL},{4294967286UL,2UL,0xE3635CC9L},{0x5EAC6F72L,0UL,0xD7A3B82FL},{4294967286UL,0x45281829L,0x83BF0907L},{4294967295UL,9UL,0UL}},{{0x3BEE6F58L,4294967295UL,1UL},{0x2FAA33E8L,0x2FAA33E8L,0xCAF68D93L},{0xFC22364CL,0xC73E2569L,0xBF9D085BL},{0xD7A3B82FL,4294967290UL,0x6606B497L},{1UL,0xE3635CC9L,0x39FFC6D9L},{9UL,0xD7A3B82FL,0x6606B497L}},{{0x782C59FCL,0x83BF0907L,0xBF9D085BL},{0xD229B62EL,0UL,0xCAF68D93L},{0xFCE22D88L,1UL,1UL},{0xBBB71727L,0xCAF68D93L,0UL},{4294967288UL,0xBF9D085BL,0x83BF0907L},{0UL,0x6606B497L,0xD7A3B82FL}},{{0xC73E2569L,0x39FFC6D9L,0xE3635CC9L},{1UL,0x6606B497L,4294967290UL},{2UL,0xBF9D085BL,0xC73E2569L},{0x4749AEF5L,0xCAF68D93L,0x2FAA33E8L},{4294967295UL,1UL,4294967295UL},{0x97877B64L,0UL,9UL}},{{0xD3B5E855L,0x83BF0907L,0x45281829L},{0xC247F365L,0xD7A3B82FL,0UL},{0x83BF0907L,0xE3635CC9L,2UL},{0xC247F365L,4294967290UL,0x5EAC6F72L},{0xD3B5E855L,0xC73E2569L,1UL},{0x5EAC6F72L,0x8C3C787EL,0xA2F0F576L}},{{4294967295UL,4294967295UL,0x39FFC6D9L},{0x2FAA33E8L,0x97877B64L,0UL},{0xD3B5E855L,2UL,0xFC22364CL},{0xA2F0F576L,0xCAF68D93L,0xC247F365L},{0x3BEE6F58L,0xD3B5E855L,0xFC22364CL},{1UL,0xD5B43C1AL,0UL}}};
static union U1 g_1423 = {-6L};
static const union U1 *g_1422 = &g_1423;



static int64_t  func_1(void);
static const int32_t  func_6(uint32_t  p_7, union U1  p_8, union U1  p_9, union U1  p_10, uint32_t  p_11);
static union U1  func_12(uint8_t  p_13);
static int32_t  func_16(uint64_t  p_17, int32_t  p_18);
static int32_t  func_22(int32_t * p_23, uint64_t  p_24, int32_t * p_25);
static int32_t * func_26(const uint64_t  p_27, uint32_t  p_28);
static uint8_t  func_42(int16_t  p_43, int32_t  p_44);
static struct S0  func_53(int64_t  p_54, int8_t  p_55, int32_t  p_56);




static int64_t  func_1(void)
{ 
    int32_t l_2[5][2][4] = {{{0xC66F5A9CL,0xC66F5A9CL,0xC8D3C891L,0xAA6E6F7FL},{0x5534BF8FL,1L,0x5534BF8FL,0xC8D3C891L}},{{0x5534BF8FL,0xC8D3C891L,0xC8D3C891L,0x5534BF8FL},{0xC66F5A9CL,0xC8D3C891L,0xAA6E6F7FL,0xC8D3C891L}},{{0xC8D3C891L,1L,0xAA6E6F7FL,0xAA6E6F7FL},{0xC66F5A9CL,0xC66F5A9CL,0xC8D3C891L,0xAA6E6F7FL}},{{0x5534BF8FL,1L,0x5534BF8FL,0xC8D3C891L},{0x5534BF8FL,0xC8D3C891L,0xC8D3C891L,0x5534BF8FL}},{{0xC66F5A9CL,0xC8D3C891L,0xAA6E6F7FL,0xC8D3C891L},{0xC8D3C891L,1L,0xAA6E6F7FL,0xAA6E6F7FL}}};
    union U1 l_1072 = {1L};
    uint32_t *l_1073 = &g_1074;
    int32_t l_1234 = (-1L);
    int32_t *l_1257 = &g_358;
    int32_t l_1282[1][1];
    union U1 *l_1311 = &g_969[4][3];
    int32_t l_1342 = 0xD845CA14L;
    uint16_t l_1343 = 0xBA8CL;
    int64_t l_1380 = (-10L);
    int8_t l_1417 = 0x65L;
    int32_t l_1428 = 1L;
    int32_t l_1429 = 0x83E54FCDL;
    int32_t l_1430 = 1L;
    int32_t l_1431 = (-1L);
    int32_t l_1432 = (-1L);
    int32_t l_1433[4] = {1L,1L,1L,1L};
    uint16_t l_1434[2][1][4] = {{{0xC699L,0xC699L,0xC699L,0xC699L}},{{0xC699L,0xC699L,0xC699L,0xC699L}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_1282[i][j] = 0x6EA5286AL;
    }
    for (g_3[0] = 0; g_3[0] < 5; g_3[0] += 1)
    {
        for (g_4 = 0; g_4 < 2; g_4 += 1)
        {
            for (g_5 = 0; g_5 < 4; g_5 += 1)
            {
                l_2[g_3[0]][g_4][g_5] = 0x8E17B844L;
            }
        }
    }
    if (func_6(l_2[0][0][3], func_12(l_2[0][0][2]), l_1072, l_1072, ((*l_1073) = l_2[0][1][3])))
    { 
        uint32_t l_1228 = 0x31D3148CL;
        uint64_t ****l_1253 = &g_605;
        int32_t *l_1254 = &g_358;
        int32_t l_1258 = 6L;
        int32_t l_1262 = 1L;
        union U1 l_1325 = {1L};
        uint64_t l_1338 = 0x90E218B3D69319C3LL;
        uint32_t l_1359 = 8UL;
        uint64_t l_1410[4][1][4];
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 4; k++)
                    l_1410[i][j][k] = 0x16015473F560492FLL;
            }
        }
        for (g_112 = (-29); (g_112 <= 27); g_112++)
        { 
            uint8_t l_1217 = 0x24L;
            int8_t *l_1230 = &g_69[0];
            int16_t *l_1231 = &g_159;
            const uint32_t *l_1241 = &l_1228;
            uint32_t * const * const l_1252 = &g_835;
            if (((&g_702 == (l_1217 , &g_702)) >= ((*l_1231) = (l_2[3][0][0] >= (((*l_1230) = (safe_mod_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(((((((*g_462) = (((safe_mul_func_int16_t_s_s((((safe_mul_func_int8_t_s_s((safe_add_func_uint64_t_u_u(l_1217, (l_1228 == (!l_1228)))), 0x04L)) , 0xD9L) > l_1228), l_1228)) ^ l_2[4][0][3]) , 0xFEL)) ^ l_1217) , 0L) || 0x80L) | l_1228), 0xBAL)), l_2[0][1][1]))) <= l_2[4][1][3])))))
            { 
                uint32_t l_1232[7][7] = {{0x5F52FCF8L,0UL,0UL,0x5F52FCF8L,4294967289UL,0x29A37A0AL,0x8F630801L},{4UL,0x29A37A0AL,0x208432FBL,4294967289UL,4294967289UL,0x208432FBL,0x29A37A0AL},{4294967289UL,4UL,0x6CB364D2L,1UL,0UL,0x8F630801L,0x8F630801L},{0x6CB364D2L,4UL,4294967289UL,4UL,0x6CB364D2L,1UL,0UL},{0x208432FBL,0x29A37A0AL,4UL,1UL,4294967295UL,1UL,4UL},{0UL,0UL,0x5F52FCF8L,4294967289UL,0x29A37A0AL,0x8F630801L,0x208432FBL},{0x208432FBL,1UL,0x5F52FCF8L,0x5F52FCF8L,1UL,0x208432FBL,4294967295UL}};
                int32_t *l_1233[3];
                uint8_t *l_1237 = &g_370;
                uint8_t *l_1242 = &g_90;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_1233[i] = &l_1072.f3.f0;
                l_1234 ^= (((*g_263) = (*g_263)) > l_1232[3][0]);
                if (((*g_462) < (g_34[1][0] ^ (((9UL ^ (safe_sub_func_uint64_t_u_u(((((*l_1242) = ((0x8A06BFEC54F053B4LL == (l_1228 < ((*l_1237) &= l_2[0][0][1]))) < (((*l_1231) = ((g_1240 = func_26(((--(*l_1073)) , (*g_263)), l_1234)) != l_1241)) , 0UL))) || g_94) ^ 0xF977L), g_5))) < (-6L)) | l_1234))))
                { 
                    if (l_2[0][1][0])
                        break;
                }
                else
                { 
                    int32_t l_1243 = 0x76239CA5L;
                    int32_t l_1244[1][1];
                    uint64_t l_1251 = 18446744073709551615UL;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1244[i][j] = 0xF92D732FL;
                    }
                    l_1244[0][0] = l_1243;
                    l_1244[0][0] = ((0x514E1F0C90AB2B32LL > (safe_mod_func_int64_t_s_s(((&g_605 != (((safe_add_func_int64_t_s_s(l_1217, ((l_1228 , (((safe_lshift_func_uint16_t_u_s((*g_446), (((-6L) <= (((l_1228 < l_1251) , 0xA3ACADB49F6A32FBLL) == 0xEF5995527C48B018LL)) ^ (*g_462)))) > l_1228) , l_1252)) == (void*)0))) ^ (*g_446)) , l_1253)) ^ l_1228), g_734.f2))) , 1L);
                }
                l_1254 = func_26(l_1228, l_1234);
                for (g_375 = 0; (g_375 <= 0); g_375 += 1)
                { 
                    struct S0 *l_1255 = &l_1072.f3;
                    int32_t **l_1256 = &g_214;
                    int i, j;
                    (*l_1255) = g_57;
                    l_1257 = ((*l_1256) = (void*)0);
                    l_1258 ^= g_34[(g_375 + 1)][g_375];
                }
                if (l_1217)
                    break;
            }
            else
            { 
                for (l_1217 = 0; (l_1217 < 17); l_1217 = safe_add_func_int32_t_s_s(l_1217, 1))
                { 
                    return g_69[0];
                }
                if (l_1217)
                    continue;
            }
        }
        for (l_1072.f0 = 0; (l_1072.f0 <= 1); l_1072.f0 += 1)
        { 
            uint32_t l_1261 = 0x724D1D61L;
            return l_1261;
        }
        if (l_1262)
        { 
            const uint32_t l_1275[3] = {2UL,2UL,2UL};
            int32_t *l_1283 = &l_1258;
            uint64_t ***l_1313 = &g_606[1][0][3];
            struct S0 l_1324[2][3][6] = {{{{0xD2252887L,18446744073709551615UL,-10L},{0xDA05A26CL,0xC29F18F291BE81DFLL,-1L},{0xD2252887L,18446744073709551615UL,-10L},{0x1C33DFBCL,18446744073709551615UL,1L},{-1L,1UL,0xA049A18EDF995A53LL},{0x1C33DFBCL,18446744073709551615UL,1L}},{{0xD2252887L,18446744073709551615UL,-10L},{0xDA05A26CL,0xC29F18F291BE81DFLL,-1L},{0xD2252887L,18446744073709551615UL,-10L},{0x1C33DFBCL,18446744073709551615UL,1L},{-1L,1UL,0xA049A18EDF995A53LL},{0x1C33DFBCL,18446744073709551615UL,1L}},{{0xD2252887L,18446744073709551615UL,-10L},{0xDA05A26CL,0xC29F18F291BE81DFLL,-1L},{0xD2252887L,18446744073709551615UL,-10L},{0x1C33DFBCL,18446744073709551615UL,1L},{-1L,1UL,0xA049A18EDF995A53LL},{0x1C33DFBCL,18446744073709551615UL,1L}}},{{{0xD2252887L,18446744073709551615UL,-10L},{0xDA05A26CL,0xC29F18F291BE81DFLL,-1L},{0xD2252887L,18446744073709551615UL,-10L},{0x1C33DFBCL,18446744073709551615UL,1L},{-1L,1UL,0xA049A18EDF995A53LL},{0x1C33DFBCL,18446744073709551615UL,1L}},{{0xD2252887L,18446744073709551615UL,-10L},{0xDA05A26CL,0xC29F18F291BE81DFLL,-1L},{0xD2252887L,18446744073709551615UL,-10L},{0x1C33DFBCL,18446744073709551615UL,1L},{-1L,1UL,0xA049A18EDF995A53LL},{0x1C33DFBCL,18446744073709551615UL,1L}},{{0xD2252887L,18446744073709551615UL,-10L},{0xDA05A26CL,0xC29F18F291BE81DFLL,-1L},{0xD2252887L,18446744073709551615UL,-10L},{0x1C33DFBCL,18446744073709551615UL,1L},{-1L,1UL,0xA049A18EDF995A53LL},{0x1C33DFBCL,18446744073709551615UL,1L}}}};
            int32_t l_1334 = 0x68F060E1L;
            int32_t l_1337 = 0x2104BC49L;
            uint16_t ***l_1375 = (void*)0;
            int8_t l_1409 = 1L;
            int i, j, k;
            (*l_1283) &= ((safe_mul_func_int16_t_s_s(l_1262, ((safe_rshift_func_int8_t_s_s((((*g_835)++) ^ ((((safe_lshift_func_uint16_t_u_s(((((safe_add_func_uint64_t_u_u(((((safe_lshift_func_int16_t_s_u(g_463, l_1275[0])) <= l_1072.f1) , 0x8F55DA36AE3FB27ALL) , (safe_sub_func_int16_t_s_s((l_1275[0] == (safe_rshift_func_int16_t_s_u((safe_div_func_int16_t_s_s((l_1282[0][0] != 0L), l_1275[2])), l_1275[2]))), 0xF7CAL))), 1UL)) | 0x46L) | (*g_462)) ^ 3L), 5)) & l_1282[0][0]) || l_1262) >= 9L)), 5)) & l_1282[0][0]))) < (*g_263));
            if ((g_861[3] <= (((*g_263) = (*l_1283)) || 8L)))
            { 
                uint8_t *l_1293[5];
                int32_t l_1294 = 0xB6F52D6BL;
                int16_t *l_1295[7][3][1] = {{{(void*)0},{&g_159},{&g_159}},{{(void*)0},{&g_159},{&g_159}},{{(void*)0},{&g_159},{&g_159}},{{(void*)0},{&g_159},{&g_159}},{{(void*)0},{&g_159},{&g_159}},{{(void*)0},{&g_159},{&g_159}},{{(void*)0},{&g_159},{&g_159}}};
                int32_t l_1296 = 0x89B28B09L;
                uint64_t l_1312 = 0xF259453CC4A51141LL;
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_1293[i] = &g_90;
                if (((0x317AL >= ((((safe_mod_func_uint8_t_u_u((((safe_add_func_uint8_t_u_u(((safe_mod_func_int64_t_s_s(((((g_245[0].f1 , l_1258) & (~(0xA8L | (((g_159 = (g_34[1][0] < (l_1294 = (safe_div_func_int16_t_s_s(g_51, 0x3E30L))))) || 0x83CEL) >= (*l_1283))))) || (*g_835)) >= l_1296), 0xE30197B39658697CLL)) ^ (*l_1283)), 0x0BL)) < 0L) || 0x57L), (*l_1283))) != g_734.f1) & 0x319CFDFD1064C1FALL) & 4294967292UL)) != l_1296))
                { 
                    return g_171;
                }
                else
                { 
                    const int32_t l_1316 = 0L;
                    uint64_t *****l_1326 = &l_1253;
                    l_1257 = func_26((!(safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u((0xA84E1CC4L || (safe_add_func_uint64_t_u_u(0x87809D1B2872A013LL, ((safe_mul_func_int16_t_s_s((1UL > (((g_244[5] = &g_969[1][3]) != l_1311) >= (-3L))), (*g_446))) & g_170)))))), l_1312)) && 0x63316829720972D9LL), g_94)), l_1228))), g_34[1][0]);
                    (*l_1253) = l_1313;
                    (*l_1283) = (safe_div_func_uint8_t_u_u((l_1316 <= ((*g_263) ^ (safe_lshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((((g_1321[4][0] = &l_1253) != (l_1324[1][2][3] , (l_1325 , l_1326))) , (*l_1283)), 65531UL)), 6)))), (-6L)));
                    return g_4;
                }
            }
            else
            { 
                int8_t l_1335 = (-10L);
                int32_t l_1341[1];
                uint16_t l_1379 = 0x52CDL;
                const int8_t **l_1382 = (void*)0;
                const int8_t ***l_1381 = &l_1382;
                int i;
                for (i = 0; i < 1; i++)
                    l_1341[i] = 0xDEEEBA37L;
                for (g_375 = 0; (g_375 >= 0); g_375 -= 1)
                { 
                    int32_t **l_1327 = &g_214;
                    int64_t l_1328 = 1L;
                    int32_t *l_1329 = (void*)0;
                    int32_t *l_1330 = &l_1072.f2.f0;
                    int32_t *l_1331 = &l_1325.f3.f0;
                    int32_t *l_1332 = &g_245[0].f2.f0;
                    int32_t *l_1333[2][5];
                    int16_t l_1336 = (-1L);
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_1333[i][j] = (void*)0;
                    }
                    (*l_1327) = &l_1258;
                    --l_1338;
                    l_1234 |= (*l_1283);
                    --l_1343;
                }
                if (l_1282[0][0])
                { 
                    int32_t *l_1346 = &g_57.f0;
                    int32_t *l_1347 = (void*)0;
                    int32_t *l_1348 = &g_358;
                    int32_t *l_1349 = &l_1324[1][2][3].f0;
                    int32_t *l_1350 = &l_1325.f2.f0;
                    int32_t *l_1351 = (void*)0;
                    int32_t *l_1352 = &l_1334;
                    int32_t *l_1353 = &g_51;
                    int32_t *l_1354 = &g_734.f0;
                    int32_t *l_1355 = &g_51;
                    int32_t *l_1356 = (void*)0;
                    int32_t *l_1357[2][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
                    int32_t l_1358[1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_1358[i] = 2L;
                    ++l_1359;
                    return l_1228;
                }
                else
                { 
                    int16_t l_1366[6] = {0x2D1EL,0x2D1EL,0x2D1EL,0x2D1EL,0x2D1EL,0x2D1EL};
                    uint16_t *l_1378 = &g_66;
                    uint16_t **l_1377 = &l_1378;
                    uint16_t ***l_1376 = &l_1377;
                    int32_t *l_1383 = &g_3[0];
                    int32_t *l_1384 = &g_245[0].f2.f0;
                    int32_t *l_1385 = &g_245[0].f2.f0;
                    int32_t *l_1386 = (void*)0;
                    int32_t *l_1387 = &g_245[0].f2.f0;
                    int32_t *l_1388 = &l_1341[0];
                    int32_t *l_1389 = &l_1341[0];
                    int32_t *l_1390 = &g_969[4][3].f3.f0;
                    int32_t *l_1391 = &l_1342;
                    int32_t *l_1392 = (void*)0;
                    int32_t *l_1393 = &l_1234;
                    int32_t *l_1394 = (void*)0;
                    int32_t *l_1395 = &l_1258;
                    int32_t *l_1396 = (void*)0;
                    int32_t *l_1397 = &l_1342;
                    int32_t *l_1398 = (void*)0;
                    int32_t *l_1399 = &g_5;
                    int32_t *l_1400 = &l_1341[0];
                    int32_t *l_1401 = &g_3[0];
                    int32_t *l_1402 = &g_969[4][3].f3.f0;
                    int32_t *l_1403 = &g_5;
                    int32_t *l_1404 = (void*)0;
                    int32_t *l_1405 = &g_245[0].f3.f0;
                    int32_t *l_1406 = (void*)0;
                    int32_t *l_1407 = &g_549;
                    int32_t *l_1408[3][2][3] = {{{&l_1234,&l_1341[0],&l_1341[0]},{&l_1234,&l_1341[0],&l_1341[0]}},{{&l_1234,&l_1341[0],&l_1341[0]},{&l_1234,&l_1341[0],&l_1341[0]}},{{&l_1234,&l_1341[0],&l_1341[0]},{&l_1234,&l_1341[0],&l_1341[0]}}};
                    int i, j, k;
                    l_1234 ^= ((*l_1283) = (safe_lshift_func_int8_t_s_s((((safe_div_func_uint32_t_u_u((255UL >= (l_1366[4] , (safe_mul_func_int8_t_s_s(((safe_div_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(l_1366[4], l_1366[5])), (l_1366[1] ^ ((safe_mod_func_uint8_t_u_u(l_1366[4], ((((l_1325 , l_1381) != &g_1135) , 0xC4657A6DL) , (*l_1283)))) ^ 0x07L)))) & (*g_263)), 0L)))), l_1335)) != l_1335) , (*l_1283)), (**g_461))));
                    l_1410[0][0][0]--;
                    g_1413[0][4][2]++;
                    return g_94;
                }
            }
        }
        else
        { 
            return l_1228;
        }
    }
    else
    { 
        int32_t *l_1416 = &g_3[0];
        struct S0 *l_1424 = &g_969[4][3].f2;
        int32_t l_1425 = (-4L);
        int32_t *l_1426[6][7] = {{&g_969[4][3].f3.f0,&g_969[4][3].f3.f0,&g_969[4][3].f3.f0,&g_969[4][3].f3.f0,&g_969[4][3].f3.f0,&g_969[4][3].f3.f0,&g_969[4][3].f3.f0},{&g_734.f0,&l_1342,&g_734.f0,&l_1342,&g_734.f0,&l_1342,&g_734.f0},{&g_969[4][3].f3.f0,&g_969[4][3].f3.f0,&g_969[4][3].f3.f0,&g_969[4][3].f3.f0,&g_969[4][3].f3.f0,&g_969[4][3].f3.f0,&g_969[4][3].f3.f0},{&g_734.f0,&l_1342,&g_734.f0,&l_1342,&g_734.f0,&l_1342,&g_734.f0},{&g_969[4][3].f3.f0,&g_969[4][3].f3.f0,&g_969[4][3].f3.f0,&g_969[4][3].f3.f0,&g_969[4][3].f3.f0,&g_969[4][3].f3.f0,&g_969[4][3].f3.f0},{&g_734.f0,&l_1342,&g_734.f0,&l_1342,&g_734.f0,&l_1342,&g_734.f0}};
        int64_t l_1427 = 1L;
        int i, j;
        (*l_1416) &= (*l_1257);
        l_1257 = (g_5 , l_1416);
        g_1422 = ((l_1417 , (safe_mul_func_uint8_t_u_u((((*g_263)--) || (-3L)), 0x15L))) , (**g_942));
        (*l_1424) = g_734;
        l_1434[1][0][0]++;
    }
    return g_159;
}



static const int32_t  func_6(uint32_t  p_7, union U1  p_8, union U1  p_9, union U1  p_10, uint32_t  p_11)
{ 
    uint8_t **l_1077 = &g_703;
    uint16_t l_1085 = 0x6CDBL;
    int32_t l_1087 = 0xA41A9F76L;
    int8_t l_1125 = 0xCFL;
    int8_t **l_1137 = &g_1136;
    uint64_t l_1146 = 18446744073709551610UL;
    int32_t l_1163 = 0x52DBA126L;
    int32_t l_1168 = (-1L);
    int32_t l_1184 = 7L;
    int32_t l_1185[6] = {0xC30484E7L,9L,9L,0xC30484E7L,9L,9L};
    uint32_t l_1187[4][3] = {{0x535EE075L,0x535EE075L,0x535EE075L},{0x93F1722CL,0x93F1722CL,0x93F1722CL},{0x535EE075L,0x535EE075L,0x535EE075L},{0x93F1722CL,0x93F1722CL,0x93F1722CL}};
    int32_t **l_1190 = &g_214;
    uint32_t l_1203[4][1][1] = {{{4294967292UL}},{{4294967295UL}},{{4294967292UL}},{{4294967295UL}}};
    uint16_t l_1209 = 0x9291L;
    int16_t *l_1212 = &g_159;
    int i, j, k;
    for (p_9.f2.f0 = 0; (p_9.f2.f0 == (-29)); --p_9.f2.f0)
    { 
        uint8_t **l_1078 = &g_703;
        uint8_t ***l_1079 = &g_702;
        int32_t l_1084 = 0L;
        int8_t l_1086 = (-1L);
        int8_t *l_1134[2][7] = {{&g_463,&g_69[0],&g_69[0],&g_69[0],&g_463,&g_463,&g_69[0]},{&l_1086,(void*)0,&l_1086,&g_69[0],&g_69[0],&l_1086,(void*)0}};
        int8_t **l_1133 = &l_1134[1][6];
        uint64_t l_1145[3][6] = {{0x134C048CB264BC31LL,0x134C048CB264BC31LL,0x134C048CB264BC31LL,0x134C048CB264BC31LL,0x134C048CB264BC31LL,0x134C048CB264BC31LL},{0x134C048CB264BC31LL,0x134C048CB264BC31LL,0x134C048CB264BC31LL,0x134C048CB264BC31LL,0x134C048CB264BC31LL,0x134C048CB264BC31LL},{0x134C048CB264BC31LL,0x134C048CB264BC31LL,0x134C048CB264BC31LL,0x134C048CB264BC31LL,0x134C048CB264BC31LL,0x134C048CB264BC31LL}};
        union U1 l_1147 = {0xD646AFA1L};
        uint8_t l_1153[3][2][3] = {{{247UL,247UL,247UL},{246UL,246UL,246UL}},{{247UL,247UL,247UL},{246UL,246UL,246UL}},{{247UL,247UL,247UL},{246UL,246UL,246UL}}};
        int32_t *l_1154 = &g_245[0].f2.f0;
        int32_t *l_1155 = &g_734.f0;
        int32_t *l_1156 = (void*)0;
        int16_t l_1157[4][7];
        int32_t *l_1158 = (void*)0;
        int32_t *l_1159 = &l_1087;
        int32_t *l_1160 = &l_1084;
        int32_t *l_1161 = &g_969[4][3].f2.f0;
        int32_t *l_1162 = &g_51;
        int32_t *l_1164 = &g_51;
        int32_t *l_1165 = &l_1147.f2.f0;
        int32_t *l_1166 = &l_1084;
        int32_t *l_1167 = &g_57.f0;
        uint16_t l_1169[4][5][2] = {{{8UL,0xE50AL},{0x1746L,0x1746L},{0x34A0L,0x1746L},{0x1746L,0xE50AL},{8UL,9UL}},{{0x34A0L,8UL},{9UL,0xE50AL},{9UL,8UL},{0x34A0L,9UL},{8UL,0xE50AL}},{{0x1746L,0x1746L},{0x34A0L,0x1746L},{0x1746L,0xE50AL},{8UL,9UL},{0x34A0L,8UL}},{{9UL,0xE50AL},{9UL,8UL},{0x34A0L,9UL},{8UL,0xE50AL},{0x1746L,0x1746L}}};
        int32_t *l_1172 = &g_358;
        int32_t *l_1173 = (void*)0;
        int32_t *l_1174 = &l_1163;
        int32_t *l_1175 = (void*)0;
        int32_t *l_1176 = &l_1147.f2.f0;
        int32_t l_1177 = 9L;
        int32_t *l_1178 = &g_3[0];
        int32_t *l_1179 = &l_1163;
        int32_t *l_1180 = &l_1084;
        int32_t *l_1181 = &l_1177;
        int32_t *l_1182 = &g_734.f0;
        int32_t *l_1183[2][1][2];
        int32_t l_1186 = 0x3216FC2DL;
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 7; j++)
                l_1157[i][j] = 1L;
        }
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 2; k++)
                    l_1183[i][j][k] = &l_1147.f3.f0;
            }
        }
        l_1087 ^= ((l_1077 != ((*l_1079) = l_1078)) != (l_1086 = (((safe_unary_minus_func_uint32_t_u(((safe_div_func_int16_t_s_s((func_53((((+(*g_446)) < l_1084) > 1L), p_11, p_9.f0) , g_549), l_1085)) == p_10.f0))) || 65534UL) < l_1085)));
        for (g_4 = (-19); (g_4 != (-6)); g_4 = safe_add_func_uint8_t_u_u(g_4, 1))
        { 
            uint16_t l_1111 = 0xB387L;
            uint8_t l_1112 = 6UL;
            int32_t *l_1114 = &g_358;
            (*g_214) = (safe_lshift_func_uint16_t_u_u(9UL, l_1087));
            for (g_90 = 0; (g_90 <= 6); g_90 += 1)
            { 
                uint64_t *l_1113 = &g_734.f1;
                const uint8_t *l_1118 = (void*)0;
                const uint8_t **l_1117 = &l_1118;
                int32_t **l_1152 = &l_1114;
                int i;
                l_1114 = func_26(((*l_1113) ^= (((safe_lshift_func_int8_t_s_u((g_69[g_90] > (((safe_unary_minus_func_uint64_t_u(((safe_lshift_func_uint8_t_u_s(l_1085, (safe_sub_func_int64_t_s_s(((-2L) < ((safe_unary_minus_func_int8_t_s(((*g_263) || p_10.f0))) || l_1084)), ((safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((g_1110 = p_8.f1), 1UL)), p_7)) | 0x252B74D3L), l_1111)), l_1112)), l_1086)) != l_1112))))) && p_9.f1))) <= p_11) > 0L)), l_1111)) <= p_9.f1) > (*g_462))), p_8.f1);
                (*g_214) &= (safe_mul_func_uint8_t_u_u((0L > (l_1084 & ((&g_703 != l_1117) > (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(l_1086, 6)), ((safe_add_func_int64_t_s_s(l_1125, (safe_mod_func_int64_t_s_s(g_245[0].f1, (*g_263))))) && p_9.f0)))))), l_1087));
                p_10.f2.f0 = ((((safe_add_func_uint32_t_u_u((safe_unary_minus_func_uint8_t_u(0x8CL)), (safe_div_func_uint64_t_u_u(((l_1133 == (l_1137 = g_1135)) ^ (((!(safe_mul_func_uint16_t_u_u(((**g_445) = (l_1085 ^ ((safe_rshift_func_int16_t_s_s((p_11 , 0x8766L), ((l_1146 = (safe_add_func_int32_t_s_s(((l_1145[1][0] == (-5L)) && p_7), (-10L)))) , p_7))) != p_10.f1))), p_9.f0))) == p_8.f1) | (*g_263))), 0x9185847FA551717DLL)))) < 7UL) , g_94) || (**g_445));
                (*l_1152) = func_26(l_1125, (l_1147 , ((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s((p_7 > p_9.f0), (((*g_214) <= p_8.f1) && (-1L)))) < (*g_446)), g_69[g_90])) <= 0x7BL)));
            }
        }
        l_1153[0][1][2] = 2L;
        ++l_1169[2][2][0];
        l_1187[1][1]--;
    }
    (*l_1190) = &l_1184;
    for (p_10.f3.f1 = 0; (p_10.f3.f1 != 32); p_10.f3.f1 = safe_add_func_uint8_t_u_u(p_10.f3.f1, 4))
    { 
        uint64_t l_1195 = 0x30C900C651516504LL;
        int32_t *l_1202 = &g_4;
        int32_t l_1206 = (-10L);
    }
    l_1168 |= ((((safe_mul_func_uint8_t_u_u((**l_1190), (p_11 != l_1209))) | ((((**g_834) = (((((*g_446) = ((((((**l_1190) , (safe_mul_func_int16_t_s_s(((*l_1212) = (1UL ^ (**l_1190))), (**l_1190)))) == (**g_445)) < p_10.f0) == (**l_1190)) , 65529UL)) < (**l_1190)) , (**l_1190)) , (**l_1190))) | 6UL) <= g_375)) , p_9.f0) , (-8L));
    return p_8.f1;
}



static union U1  func_12(uint8_t  p_13)
{ 
    uint16_t l_47[7];
    const uint32_t l_532 = 18446744073709551615UL;
    uint64_t *l_732 = (void*)0;
    int32_t l_738 = 0xCB03A806L;
    int32_t l_741 = 0x8AF56D23L;
    int32_t l_742 = 0x97B9E7E8L;
    int32_t l_745 = 0xD41ADA05L;
    int32_t l_747 = 0xD959B290L;
    int32_t l_748 = 0x94597E49L;
    int32_t l_749 = 0x32BBDD19L;
    int32_t l_750[5] = {0x9CAEE551L,0x9CAEE551L,0x9CAEE551L,0x9CAEE551L,0x9CAEE551L};
    int32_t *l_774 = &g_375;
    int32_t ***l_852 = &g_209;
    int32_t ****l_851 = &l_852;
    uint32_t l_870 = 0x814D8D1CL;
    uint32_t l_960[5][3][3] = {{{1UL,0x87DB86D4L,0x87DB86D4L},{1UL,0x87DB86D4L,0x87DB86D4L},{1UL,0x0430D33DL,0x0430D33DL}},{{0x87DB86D4L,0x0430D33DL,0x0430D33DL},{0x87DB86D4L,0x0430D33DL,0x0430D33DL},{0x87DB86D4L,0x0430D33DL,0x0430D33DL}},{{0x87DB86D4L,0x0430D33DL,0x0430D33DL},{0x87DB86D4L,0x0430D33DL,0x0430D33DL},{0x87DB86D4L,0x0430D33DL,0x0430D33DL}},{{0x87DB86D4L,0x0430D33DL,0x0430D33DL},{0x87DB86D4L,0x0430D33DL,0x0430D33DL},{0x87DB86D4L,0x0430D33DL,0x0430D33DL}},{{0x87DB86D4L,0x0430D33DL,0x0430D33DL},{0x87DB86D4L,0x0430D33DL,0x0430D33DL},{0x87DB86D4L,0x0430D33DL,0x0430D33DL}}};
    uint64_t l_976 = 3UL;
    const uint16_t l_988[1][4] = {{0UL,0UL,0UL,0UL}};
    int8_t *l_1030 = &g_170;
    int8_t **l_1029 = &l_1030;
    int8_t ***l_1028 = &l_1029;
    union U1 l_1031 = {1L};
    uint64_t l_1068 = 18446744073709551614UL;
    int32_t *l_1070 = &g_4;
    uint32_t l_1071 = 18446744073709551615UL;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_47[i] = 65529UL;
lbl_856:
    for (p_13 = 0; (p_13 <= 0); p_13 += 1)
    { 
        uint64_t l_35 = 0x7C914A3A6D7D0454LL;
        uint16_t *l_731 = &g_66;
        uint16_t **l_730 = &l_731;
        int32_t l_743[4] = {0L,0L,0L,0L};
        int64_t l_754[3][5] = {{0x9B73A939E0C2619DLL,0x9B73A939E0C2619DLL,0xCA28ACC9E218B16ALL,0x9B73A939E0C2619DLL,0x9B73A939E0C2619DLL},{0xC7BB470CF4BD077CLL,0x9B73A939E0C2619DLL,0xC7BB470CF4BD077CLL,0xC7BB470CF4BD077CLL,0x9B73A939E0C2619DLL},{0x9B73A939E0C2619DLL,0xC7BB470CF4BD077CLL,0xC7BB470CF4BD077CLL,0x9B73A939E0C2619DLL,0xC7BB470CF4BD077CLL}};
        uint16_t l_757 = 0x5C25L;
        const int8_t l_823 = 0x72L;
        uint8_t *l_855 = &g_370;
        int i, j;
        for (g_5 = 0; (g_5 <= 0); g_5 += 1)
        { 
            int32_t *l_21 = &g_4;
            uint8_t *l_33[7][7][2] = {{{&g_34[1][0],&g_34[0][0]},{&g_34[1][0],(void*)0},{&g_34[0][0],&g_34[1][0]},{&g_34[0][0],&g_34[1][0]},{&g_34[1][0],(void*)0},{(void*)0,&g_34[1][0]},{&g_34[1][0],&g_34[0][0]}},{{&g_34[1][0],&g_34[0][0]},{(void*)0,&g_34[1][0]},{&g_34[0][0],&g_34[1][0]},{&g_34[0][0],&g_34[1][0]},{&g_34[0][0],&g_34[1][0]},{(void*)0,&g_34[0][0]},{&g_34[1][0],&g_34[0][0]}},{{&g_34[1][0],&g_34[1][0]},{(void*)0,(void*)0},{&g_34[1][0],&g_34[1][0]},{&g_34[0][0],&g_34[1][0]},{&g_34[0][0],(void*)0},{&g_34[1][0],&g_34[0][0]},{&g_34[1][0],&g_34[0][0]}},{{&g_34[1][0],&g_34[0][0]},{&g_34[1][0],(void*)0},{&g_34[0][0],&g_34[1][0]},{&g_34[0][0],&g_34[1][0]},{&g_34[1][0],(void*)0},{(void*)0,&g_34[1][0]},{&g_34[1][0],&g_34[0][0]}},{{&g_34[1][0],&g_34[0][0]},{(void*)0,&g_34[1][0]},{&g_34[0][0],&g_34[1][0]},{&g_34[0][0],&g_34[1][0]},{&g_34[0][0],&g_34[1][0]},{(void*)0,&g_34[0][0]},{&g_34[1][0],&g_34[0][0]}},{{&g_34[1][0],&g_34[1][0]},{(void*)0,(void*)0},{&g_34[1][0],&g_34[1][0]},{&g_34[0][0],&g_34[1][0]},{&g_34[0][0],(void*)0},{&g_34[1][0],&g_34[0][0]},{&g_34[1][0],&g_34[0][0]}},{{&g_34[1][0],&g_34[0][0]},{&g_34[1][0],(void*)0},{&g_34[0][0],&g_34[1][0]},{&g_34[0][0],&g_34[1][0]},{&g_34[1][0],(void*)0},{(void*)0,&g_34[1][0]},{&g_34[1][0],&g_34[0][0]}}};
            int32_t **l_534 = &g_214;
            int32_t l_746 = 0x70AFF7B0L;
            int32_t l_751 = (-3L);
            int32_t l_752 = (-3L);
            int32_t l_753 = 0xC1DD6C62L;
            int32_t l_755 = 0x69825651L;
            int32_t l_756[1];
            union U1 l_824[2] = {{0x105419D4L},{0x105419D4L}};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_756[i] = 0x70D24917L;
        }
        if (p_13)
            goto lbl_856;
        (***g_854) |= ((((safe_mul_func_int16_t_s_s(((((*l_855) = ((((safe_mod_func_int32_t_s_s(((((safe_rshift_func_int16_t_s_u((((safe_mod_func_uint64_t_u_u(p_13, p_13)) == (-2L)) & (((g_69[0] < ((((g_90 , (safe_mod_func_uint64_t_u_u((l_47[3] && (p_13 && g_51)), p_13))) , (void*)0) == &g_214) | l_754[0][4])) != (**g_461)) >= p_13)), 5)) , p_13) , l_851) != g_853), p_13)) && g_51) & 0UL) || l_754[0][2])) , p_13) >= p_13), p_13)) & 0x783A836A7599BBC8LL) | (**g_834)) || l_757);
    }
    for (g_112 = 0; (g_112 <= 6); g_112 += 1)
    { 
        union U1 l_866 = {1L};
        uint32_t l_876 = 0xC5DA7CA6L;
        int8_t **l_892 = (void*)0;
        int32_t l_919 = 0x64D6B132L;
        int32_t l_920 = (-1L);
        int32_t l_923 = 1L;
        int32_t l_925 = (-10L);
        int32_t l_926 = 0xDEC7E55DL;
        uint16_t l_927 = 2UL;
        int32_t ****l_951 = &l_852;
        int32_t l_971 = 0L;
        int32_t l_972 = 0xB4C588F0L;
        int32_t l_973 = 1L;
        int32_t l_975[5];
        int i;
        for (i = 0; i < 5; i++)
            l_975[i] = 0x9E3DB0B9L;
    }
    for (g_57.f0 = 4; (g_57.f0 <= (-20)); --g_57.f0)
    { 
        uint64_t l_981 = 0UL;
        const uint16_t *l_1003 = &g_114;
        const uint16_t * const *l_1002[6] = {&l_1003,&l_1003,&l_1003,&l_1003,&l_1003,&l_1003};
        const uint16_t * const **l_1001 = &l_1002[3];
        uint64_t l_1007 = 18446744073709551611UL;
        int32_t l_1012 = 0xDE5D4DB2L;
        int32_t l_1013 = 1L;
        int32_t l_1017 = 0xF75EDCF6L;
        int32_t l_1018 = (-2L);
        int32_t l_1019 = 0xFD738FE3L;
        int32_t l_1022 = 0x79DDED29L;
        int32_t l_1023 = 0x074B6671L;
        struct S0 l_1046 = {3L,5UL,0x76605F09008C4769LL};
        int32_t *l_1051 = (void*)0;
        int32_t *l_1052 = &l_745;
        int32_t *l_1053[4];
        uint32_t l_1054[7][2];
        uint64_t *l_1067 = &g_245[0].f3.f1;
        int16_t *l_1069 = &g_159;
        int i, j;
        for (i = 0; i < 4; i++)
            l_1053[i] = &g_3[0];
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 2; j++)
                l_1054[i][j] = 0x83E92C2EL;
        }
        ++l_981;
        for (l_738 = (-4); (l_738 == (-3)); l_738 = safe_add_func_int32_t_s_s(l_738, 2))
        { 
            int32_t l_989 = 5L;
            int32_t l_1006 = 0L;
            int32_t l_1014[3];
            uint8_t l_1043 = 255UL;
            int i;
            for (i = 0; i < 3; i++)
                l_1014[i] = 1L;
        }
        ++l_1054[1][0];
        l_750[4] |= ((safe_div_func_int32_t_s_s(0x4CDBC067L, p_13)) >= ((p_13 == ((*l_1069) = ((((p_13 || 0xE6L) > (safe_add_func_uint16_t_u_u(((g_90 ^ (safe_add_func_uint64_t_u_u(((*l_1067) = ((*g_263) = (safe_add_func_int64_t_s_s((-8L), p_13)))), g_5))) < l_1068), 0x2334L))) >= (*l_1052)) <= g_358))) | 0UL));
        if ((***g_854))
            continue;
    }
    l_1070 = (**g_854);
    (*g_214) = ((0UL < (((1L > (l_1071 , (*l_1070))) | 0x4D5E58F2BFCA639ALL) != (((((l_1031 , (5UL ^ p_13)) || g_57.f0) , 0xA32366005A2DAFFCLL) && (*g_263)) >= p_13))) , (***g_854));
    return l_1031;
}



static int32_t  func_16(uint64_t  p_17, int32_t  p_18)
{ 
    int16_t l_629 = 5L;
    int8_t *l_636 = &g_170;
    int64_t *l_637 = &g_245[0].f3.f2;
    int32_t l_638 = 0L;
    struct S0 *l_639[1];
    uint32_t l_640[1];
    uint32_t *l_641 = &g_94;
    uint32_t *l_642 = (void*)0;
    uint32_t *l_643[7] = {&g_143,&g_143,&g_143,&g_143,&g_143,&g_143,&g_143};
    int64_t *l_644 = &g_171;
    int32_t *l_722[5][1][7] = {{{(void*)0,(void*)0,&g_549,&l_638,&l_638,&g_549,(void*)0}},{{&l_638,&g_57.f0,&g_4,&g_57.f0,&l_638,&g_57.f0,&g_4}},{{&l_638,&l_638,&g_549,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_3[0],(void*)0,&g_3[0],&g_57.f0,&g_3[0],(void*)0,&g_3[0]}},{{&l_638,(void*)0,(void*)0,&l_638,(void*)0,&g_549,&g_549}}};
    uint8_t *l_725 = &g_34[1][0];
    const uint16_t l_726[2][6] = {{0x9EFDL,65528UL,65528UL,0x9EFDL,65528UL,65528UL},{0x9EFDL,65528UL,65528UL,0x9EFDL,65528UL,65528UL}};
    uint32_t l_727[2];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_639[i] = &g_57;
    for (i = 0; i < 1; i++)
        l_640[i] = 18446744073709551615UL;
    for (i = 0; i < 2; i++)
        l_727[i] = 18446744073709551615UL;
    if ((0xC5L || ((g_3[0] <= ((*l_644) = ((*l_637) = ((g_57 , 0xEB58L) ^ p_18)))) , p_17)))
    { 
        uint16_t ** const *l_651 = (void*)0;
        uint16_t ***l_652 = (void*)0;
        int32_t l_655 = 0x91B8A23FL;
        union U1 **l_657[6][3] = {{&g_244[4],(void*)0,(void*)0},{&g_244[4],(void*)0,(void*)0},{&g_244[4],(void*)0,(void*)0},{&g_244[4],(void*)0,(void*)0},{&g_244[4],(void*)0,(void*)0},{&g_244[4],(void*)0,(void*)0}};
        union U1 ***l_656 = &l_657[0][0];
        uint8_t * const *l_704 = &g_703;
        int i, j;
        for (g_112 = 0; (g_112 < (-13)); g_112 = safe_sub_func_uint32_t_u_u(g_112, 7))
        { 
            union U1 **l_654 = &g_244[1];
            union U1 ***l_653[3];
            int32_t l_658 = (-1L);
            int32_t *l_664 = &l_655;
            uint8_t * const *l_707 = (void*)0;
            int32_t *l_712 = &l_658;
            int i;
            for (i = 0; i < 3; i++)
                l_653[i] = &l_654;
            if (((safe_rshift_func_uint8_t_u_u((g_171 , ((l_638 = ((*l_641)--)) ^ ((l_651 == l_652) ^ (((l_653[2] != (l_655 , l_656)) != p_18) >= l_658)))), p_18)) , 1L))
            { 
                if (l_640[0])
                { 
                    int32_t *l_663 = &g_3[0];
                    (*l_663) |= (safe_lshift_func_int8_t_s_u((((-1L) > (safe_div_func_uint32_t_u_u(g_549, 0xE4646880L))) <= p_18), 5));
                }
                else
                { 
                    g_245[0].f2 = g_57;
                }
                l_664 = (void*)0;
            }
            else
            { 
                int32_t l_689 = 0L;
                int32_t *l_700 = &g_245[0].f2.f0;
                for (g_147 = 0; (g_147 <= 0); g_147 += 1)
                { 
                    const int32_t l_665 = (-1L);
                    uint32_t *l_668 = &l_640[0];
                    int32_t *l_690 = &g_358;
                    int8_t **l_695 = (void*)0;
                    int8_t **l_696 = &l_636;
                    uint8_t *l_697 = (void*)0;
                    uint8_t *l_698 = &g_90;
                    int32_t **l_699[4];
                    uint8_t * const **l_705 = (void*)0;
                    uint8_t * const **l_706[5] = {&l_704,&l_704,&l_704,&l_704,&l_704};
                    int i;
                    for (i = 0; i < 4; i++)
                        l_699[i] = (void*)0;
                    l_700 = func_26(l_665, (safe_mod_func_int64_t_s_s((((*l_668)--) , (((safe_add_func_uint16_t_u_u((++(*g_446)), (safe_sub_func_int64_t_s_s((((((*l_698) &= ((safe_mul_func_int16_t_s_s((((*l_664) || (safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(((safe_div_func_int64_t_s_s(((*l_644) = ((((safe_mod_func_int16_t_s_s(l_655, ((safe_div_func_uint32_t_u_u(g_34[1][0], (((*l_690) = (l_689 > g_143)) , (safe_add_func_int64_t_s_s((((((*l_696) = (((safe_sub_func_int16_t_s_s((0UL < l_638), 65532UL)) >= 0x103CL) , &g_170)) == (void*)0) > 255UL) , g_112), l_655))))) ^ (*g_462)))) , 0xD4C8AE57L) < g_159) , (-7L))), l_689)) < g_375), g_57.f2)), 0L))) < 0x56596CF2L), 65535UL)) , p_17)) & p_18) , l_639[g_147]) != (void*)0), p_18)))) ^ 0x6F333E72CE117AF1LL) , p_18)), l_638)));
                    if (p_18)
                        continue;
                    (*l_690) ^= (~p_17);
                    (*l_664) &= ((g_702 = &l_698) != (l_707 = l_704));
                }
                for (l_655 = 0; (l_655 <= (-24)); l_655--)
                { 
                    int32_t **l_710 = &l_700;
                    g_57 = g_57;
                    (*l_710) = &l_655;
                    return p_17;
                }
                if (p_18)
                    continue;
            }
            (*l_712) = ((~((-4L) <= 0xC527L)) || (-1L));
        }
        return p_18;
    }
    else
    { 
        int64_t l_721 = (-3L);
        l_722[0][0][0] = ((safe_add_func_int16_t_s_s(1L, 0x3A8FL)) , func_26((safe_sub_func_int64_t_s_s(((*l_637) = l_640[0]), ((&g_57 == l_639[0]) && (safe_sub_func_uint64_t_u_u(p_18, (safe_mul_func_int8_t_s_s(((g_51 , 0xED67857CL) > p_18), l_721))))))), g_463));
    }
    l_727[0] = (safe_add_func_int16_t_s_s(p_18, ((((p_17 , (((1L == ((g_159 |= p_17) , (g_90 = ((*l_725) = (p_17 , 0x27L))))) , g_5) & p_18)) | l_726[0][3]) | 0x772B2773L) ^ p_18)));
    return p_17;
}



static int32_t  func_22(int32_t * p_23, uint64_t  p_24, int32_t * p_25)
{ 
    struct S0 *l_535 = &g_245[0].f3;
    uint16_t l_548[3];
    int16_t *l_561 = (void*)0;
    int32_t l_568 = 0x27D616F2L;
    int32_t l_569 = 0xBB4996F1L;
    int32_t l_570 = 0L;
    int32_t l_571 = 1L;
    int32_t * const l_581 = &g_51;
    struct S0 l_583 = {5L,0x12372AB03BAF3450LL,0x4F20D8B6239FA331LL};
    uint8_t l_601 = 0x04L;
    int8_t l_604 = 0x29L;
    union U1 **l_626 = &g_244[4];
    union U1 ***l_625[6] = {(void*)0,(void*)0,&l_626,(void*)0,(void*)0,&l_626};
    union U1 ****l_627 = (void*)0;
    union U1 ****l_628 = &l_625[0];
    int i;
    for (i = 0; i < 3; i++)
        l_548[i] = 1UL;
lbl_580:
    (*l_535) = g_57;
    for (g_114 = 0; (g_114 < 37); g_114 = safe_add_func_uint8_t_u_u(g_114, 3))
    { 
        struct S0 l_540 = {0xF58E577CL,18446744073709551610UL,0x681D735536F551B2LL};
        int16_t *l_543 = &g_159;
        const int32_t *l_552 = (void*)0;
        int32_t l_567[5][5] = {{(-6L),(-6L),(-6L),(-6L),(-6L)},{0xB3A7910CL,0xB3A7910CL,0xB3A7910CL,0xB3A7910CL,0xB3A7910CL},{(-6L),(-6L),(-6L),(-6L),(-6L)},{0xB3A7910CL,0xB3A7910CL,0xB3A7910CL,0xB3A7910CL,0xB3A7910CL},{(-6L),(-6L),(-6L),(-6L),(-6L)}};
        uint64_t l_577 = 0UL;
        int i, j;
        if ((0x79170957A79C11E2LL > (((((++(*g_263)) < ((g_34[1][0] >= (g_549 = ((&g_171 == ((l_540 , (safe_lshift_func_int16_t_s_u(((*l_543) = 0xFB77L), 14))) , (void*)0)) , (safe_div_func_uint8_t_u_u(((safe_mod_func_int64_t_s_s(l_548[2], g_159)) != l_548[2]), (**g_461)))))) && p_24)) & (-1L)) >= l_548[2]) && l_540.f2)))
        { 
            uint32_t l_553[2][6][5] = {{{0x603AAAD1L,0x0FD1F793L,0xA5D8B22DL,0x603AAAD1L,0x84A2F904L},{0xFE76D85CL,0x603AAAD1L,8UL,0x603AAAD1L,0xFE76D85CL},{0xA5D8B22DL,0x3C22D804L,0x0FD1F793L,0x84A2F904L,0x3C22D804L},{0xFE76D85CL,0x0FD1F793L,0x0FD1F793L,0xFE76D85CL,0x84A2F904L},{0x603AAAD1L,0xFE76D85CL,8UL,0x3C22D804L,0x3C22D804L},{0xA5D8B22DL,0xFE76D85CL,0xA5D8B22DL,0x84A2F904L,0xFE76D85CL}},{{0x3C22D804L,0x0FD1F793L,0x84A2F904L,0x3C22D804L,0x84A2F904L},{0x3C22D804L,0x3C22D804L,8UL,0xFE76D85CL,0x603AAAD1L},{0xA5D8B22DL,0x603AAAD1L,0x84A2F904L,0x84A2F904L,0x603AAAD1L},{0x603AAAD1L,0x0FD1F793L,0xA5D8B22DL,0x603AAAD1L,0x84A2F904L},{0xFE76D85CL,0x603AAAD1L,8UL,0x603AAAD1L,0xFE76D85CL},{0xA5D8B22DL,0x3C22D804L,0x0FD1F793L,0x84A2F904L,0x3C22D804L}}};
            int32_t l_560 = 0x4700D1B6L;
            int32_t **l_562 = &g_214;
            int i, j, k;
            (*p_25) = (p_24 != 0L);
            if ((*p_25))
                break;
            (*l_562) = func_26((safe_add_func_uint8_t_u_u(0x1EL, (((p_24 & (((1L <= (((*g_263) = ((l_553[0][0][0] = ((void*)0 == l_552)) == (safe_div_func_uint16_t_u_u((((safe_mod_func_uint16_t_u_u((~((((+3UL) , (p_24 , 0xA38C6F57L)) < 0x4604E601L) && l_560)), (**g_445))) >= (*g_446)) | (*g_446)), (**g_445))))) | p_24)) <= p_24) , p_24)) , l_561) != l_543))), g_90);
        }
        else
        { 
            int32_t l_563 = 0x094D81C3L;
            int32_t *l_564 = (void*)0;
            int32_t *l_565 = &g_549;
            int32_t *l_566[4][2][1];
            uint64_t l_572 = 0x2C61DAAAD415CB83LL;
            int32_t **l_582 = &l_565;
            struct S0 *l_584 = &l_583;
            int i, j, k;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_566[i][j][k] = &g_358;
                }
            }
            l_572++;
            for (g_90 = 0; (g_90 == 17); g_90 = safe_add_func_int16_t_s_s(g_90, 3))
            { 
                l_566[1][1][0] = (void*)0;
                --l_577;
                if (g_57.f2)
                    goto lbl_580;
            }
            (*l_582) = l_581;
            (*l_584) = ((*l_535) = l_583);
        }
    }
    if ((*p_25))
    { 
        struct S0 l_585 = {0x9D4347E3L,18446744073709551606UL,0x1979AECACC5CA78ELL};
        uint32_t l_591 = 18446744073709551606UL;
        int64_t *l_602 = &g_171;
        int32_t *l_603[2];
        uint64_t ***l_607 = &g_606[1][0][2];
        int i;
        for (i = 0; i < 2; i++)
            l_603[i] = &l_570;
        l_604 = ((*p_25) = ((*l_581) = ((l_585 , (void*)0) != ((safe_div_func_int32_t_s_s(((safe_unary_minus_func_uint32_t_u((((safe_lshift_func_uint16_t_u_u((0x5EL >= l_591), ((((*l_602) = ((((safe_mod_func_uint32_t_u_u((((safe_lshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s((safe_unary_minus_func_uint64_t_u(((safe_lshift_func_uint8_t_u_s(p_24, 0)) , (&g_147 != (void*)0)))), 9L)), p_24)) != p_24) , l_585.f1), 7L)) == (*g_263)) && l_601) | g_57.f0)) , p_24) , 65535UL))) ^ g_57.f2) , 0xFE517E33L))) , (-1L)), 7L)) , (void*)0))));
        l_607 = g_605;
        return g_57.f0;
    }
    else
    { 
        int8_t l_622 = 0L;
        int64_t *l_623[6] = {&l_583.f2,&l_583.f2,&l_583.f2,&l_583.f2,&l_583.f2,&l_583.f2};
        int32_t l_624 = 0x0AFE9ADDL;
        int i;
        (*p_25) = (safe_div_func_int8_t_s_s(0x0CL, ((safe_div_func_int64_t_s_s(((safe_lshift_func_int16_t_s_u(p_24, 1)) , (p_24 , (*l_581))), (safe_mul_func_int8_t_s_s((((0UL >= (safe_sub_func_int8_t_s_s((65535UL != (((l_624 = (safe_lshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u(g_549, 0xC60B1840L)), l_622))) , 0xD7A1F17BL) , (-2L))), l_622))) < g_143) ^ 0L), 1UL)))) & p_24)));
    }
    (*l_628) = l_625[0];
    return g_147;
}



static int32_t * func_26(const uint64_t  p_27, uint32_t  p_28)
{ 
    int32_t *l_533[3][4];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            l_533[i][j] = (void*)0;
    }
    return l_533[2][2];
}



static uint8_t  func_42(int16_t  p_43, int32_t  p_44)
{ 
    uint8_t l_52 = 5UL;
    int32_t l_67[7] = {1L,1L,1L,1L,1L,1L,1L};
    const struct S0 l_510 = {1L,5UL,-7L};
    int32_t l_524 = (-1L);
    int32_t *l_530 = (void*)0;
    int32_t *l_531 = &l_67[6];
    int i;
    for (p_43 = (-17); (p_43 > (-27)); p_43--)
    { 
        int32_t *l_50[3][3][3] = {{{&g_51,&g_5,&g_51},{&g_5,&g_51,&g_5},{&g_51,&g_5,&g_51}},{{&g_5,&g_51,&g_5},{&g_51,&g_5,&g_51},{&g_5,&g_51,&g_5}},{{&g_51,&g_5,&g_51},{&g_5,&g_51,&g_5},{&g_51,&g_5,&g_51}}};
        int32_t **l_64 = &l_50[0][2][0];
        uint16_t *l_65[4][6] = {{&g_66,(void*)0,&g_66,&g_66,(void*)0,&g_66},{&g_66,&g_66,(void*)0,(void*)0,&g_66,(void*)0},{(void*)0,&g_66,(void*)0,(void*)0,&g_66,(void*)0},{(void*)0,&g_66,(void*)0,(void*)0,&g_66,(void*)0}};
        int8_t *l_68 = &g_69[0];
        struct S0 *l_509 = &g_245[0].f3;
        uint16_t l_527 = 0xFB09L;
        int i, j, k;
        l_52 ^= 0x8991F32AL;
        (*l_509) = func_53((g_57 , ((safe_sub_func_uint32_t_u_u((p_43 <= (safe_mod_func_uint8_t_u_u(p_44, ((*l_68) = (safe_add_func_uint8_t_u_u(255UL, (p_44 <= (l_67[6] = (((*l_64) = &g_5) != (void*)0))))))))), g_57.f1)) && (-1L))), g_5, p_43);
        (*l_509) = l_510;
        for (g_114 = 2; (g_114 <= 6); g_114 += 1)
        { 
            uint32_t *l_525 = &g_94;
            int32_t l_526 = (-1L);
            l_526 = (!((**g_445) ^ (((safe_add_func_uint8_t_u_u((p_44 | 0x0829L), (safe_div_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((*l_525) = (0x0B4EL && ((l_524 = (safe_sub_func_int32_t_s_s((l_67[6] |= (safe_lshift_func_uint16_t_u_s(p_43, 3))), (((1UL | 0x5A27L) ^ (*g_462)) || 0x85L)))) ^ g_463))), (-1L))), 1UL)), (**g_461))))) , 0x2821DB6BL) || 8UL)));
            return p_43;
        }
        l_527++;
    }
    (*l_531) |= (l_524 |= p_43);
    return g_370;
}



static struct S0  func_53(int64_t  p_54, int8_t  p_55, int32_t  p_56)
{ 
    const uint16_t *l_78 = &g_66;
    const int32_t *l_84 = &g_51;
    const int32_t **l_83[6][7] = {{&l_84,&l_84,&l_84,&l_84,&l_84,&l_84,&l_84},{&l_84,&l_84,&l_84,&l_84,&l_84,&l_84,&l_84},{(void*)0,&l_84,&l_84,(void*)0,&l_84,&l_84,(void*)0},{&l_84,&l_84,&l_84,(void*)0,&l_84,(void*)0,&l_84},{(void*)0,(void*)0,&l_84,&l_84,&l_84,&l_84,&l_84},{&l_84,&l_84,&l_84,&l_84,(void*)0,&l_84,&l_84}};
    int32_t l_87[3];
    uint8_t *l_95 = &g_34[1][0];
    uint16_t *l_101 = (void*)0;
    int8_t l_111[7];
    struct S0 l_193 = {9L,0xB91A3FCEC19F97CELL,1L};
    int32_t *l_212[1];
    int32_t **l_211 = &l_212[0];
    uint64_t l_246 = 0UL;
    int64_t l_325 = 0L;
    int32_t l_362 = 6L;
    int64_t l_382 = 0x63F14597D608EFB1LL;
    int8_t **l_464 = (void*)0;
    uint32_t l_483 = 0xB2D7A865L;
    int i, j;
    for (i = 0; i < 3; i++)
        l_87[i] = 1L;
    for (i = 0; i < 7; i++)
        l_111[i] = 0xB8L;
    for (i = 0; i < 1; i++)
        l_212[i] = &l_87[0];
lbl_119:
    if (((void*)0 == &g_34[1][0]))
    { 
        const int8_t l_85 = 0x38L;
        uint16_t *l_86 = (void*)0;
        int32_t *l_88 = &g_57.f0;
        uint8_t *l_89 = &g_90;
        uint32_t *l_93 = &g_94;
        uint16_t **l_100[2];
        int i;
        for (i = 0; i < 2; i++)
            l_100[i] = &l_86;
        (*l_88) &= (g_69[0] != (((((l_87[1] = ((((safe_div_func_int8_t_s_s(((safe_add_func_uint64_t_u_u(((safe_add_func_uint32_t_u_u(p_54, (safe_add_func_uint16_t_u_u((((void*)0 != l_78) , (((1L & (((((safe_sub_func_int16_t_s_s(((((g_69[0] == ((void*)0 == l_83[3][4])) == g_57.f2) > p_55) >= g_69[0]), g_34[0][0])) | 0x877E475996E2414CLL) , g_34[1][0]) & g_69[1]) <= g_69[5])) , g_57.f1) < g_57.f1)), p_54)))) || l_85), 0L)) == 1L), 0x2AL)) | 2L) , g_51) && p_54)) || g_57.f1) , l_85) | (-5L)) > (*l_84)));
        g_51 ^= (((*l_88) , (((*l_93) ^= (0xBDL > ((*l_89)++))) , l_95)) != ((((g_5 , (*l_88)) <= (safe_mul_func_uint16_t_u_u(((safe_add_func_int64_t_s_s((0xAD64L == ((l_101 = l_86) != (void*)0)), g_34[1][0])) != p_55), (*l_88)))) | g_5) , l_95));
        l_88 = l_93;
        (*l_88) ^= (safe_unary_minus_func_int64_t_s((safe_add_func_int16_t_s_s(0x160BL, 0UL))));
    }
    else
    { 
        struct S0 l_105 = {0x316ED276L,0xF92971DF8105A18ALL,0xC6425F0F443C0C33LL};
        return l_105;
    }
lbl_424:
    for (g_57.f0 = 0; (g_57.f0 == 20); ++g_57.f0)
    { 
        int32_t *l_108 = &l_87[1];
        int32_t l_109[5][4][4] = {{{(-6L),0xA457CE11L,(-6L),(-6L)},{0xA457CE11L,0xA457CE11L,0x16C9CC5FL,0xA457CE11L},{0xA457CE11L,(-6L),(-6L),0xA457CE11L},{(-6L),0xA457CE11L,(-6L),(-6L)}},{{0xA457CE11L,0xA457CE11L,0x16C9CC5FL,0xA457CE11L},{0xA457CE11L,(-6L),(-6L),0xA457CE11L},{(-6L),0xA457CE11L,(-6L),(-6L)},{0xA457CE11L,0xA457CE11L,0x16C9CC5FL,0xA457CE11L}},{{0xA457CE11L,(-6L),(-6L),0xA457CE11L},{(-6L),0xA457CE11L,(-6L),(-6L)},{0xA457CE11L,0xA457CE11L,0x16C9CC5FL,0xA457CE11L},{0xA457CE11L,(-6L),(-6L),0xA457CE11L}},{{(-6L),0xA457CE11L,(-6L),(-6L)},{0xA457CE11L,0xA457CE11L,0x16C9CC5FL,0xA457CE11L},{0xA457CE11L,(-6L),(-6L),0xA457CE11L},{(-6L),0xA457CE11L,(-6L),(-6L)}},{{0xA457CE11L,0xA457CE11L,0x16C9CC5FL,0xA457CE11L},{0xA457CE11L,(-6L),(-6L),0xA457CE11L},{(-6L),0xA457CE11L,(-6L),(-6L)},{0xA457CE11L,0xA457CE11L,0x16C9CC5FL,0xA457CE11L}}};
        int32_t *l_110[5][7] = {{&l_87[0],&l_109[3][1][3],&g_51,&g_51,&g_51,&l_109[3][1][3],&l_87[0]},{&l_109[3][1][3],&g_57.f0,&g_57.f0,&g_51,&l_87[0],&l_109[3][1][3],&g_51},{&g_57.f0,&l_87[1],&l_109[3][1][3],&g_57.f0,&g_57.f0,&l_109[3][1][3],&l_87[1]},{&g_57.f0,&l_109[4][3][3],&g_57.f0,&g_51,&l_109[4][3][3],&g_51,&l_87[1]},{&g_51,&g_57.f0,&g_51,&g_51,&l_87[1],&g_51,&g_51}};
        int32_t l_113 = 1L;
        int8_t *l_155 = &g_69[0];
        uint32_t l_161 = 0x0BE37677L;
        union U1 l_177 = {-4L};
        struct S0 l_216[7] = {{1L,0x507BA8037360924ELL,0L},{1L,0x507BA8037360924ELL,0L},{1L,0x507BA8037360924ELL,0L},{1L,0x507BA8037360924ELL,0L},{1L,0x507BA8037360924ELL,0L},{1L,0x507BA8037360924ELL,0L},{1L,0x507BA8037360924ELL,0L}};
        uint64_t *l_270 = &g_57.f1;
        struct S0 l_299 = {0xEAB3DE26L,18446744073709551615UL,0x968AEEBF030DFCB1LL};
        int64_t l_334 = 0x5B96C2F8AEFC81A4LL;
        int32_t l_359 = 0x8F018AFDL;
        uint64_t l_360 = 0x0D1D7AFC93EF2CC1LL;
        int i, j, k;
        g_114++;
        for (g_57.f1 = (-21); (g_57.f1 < 18); g_57.f1 = safe_add_func_int32_t_s_s(g_57.f1, 9))
        { 
            int32_t l_128 = 0x0CDD5450L;
            int64_t l_133 = 1L;
            uint32_t *l_140 = &g_94;
            uint32_t l_141 = 8UL;
            uint32_t *l_142 = &g_143;
            struct S0 l_146 = {1L,0x16BB71A4F7F7094BLL,0x66B76CAEA256EE45LL};
            if (g_57.f2)
                goto lbl_119;
            if ((((*l_142) = (safe_mul_func_int16_t_s_s(((safe_div_func_int64_t_s_s((p_55 <= (safe_mod_func_int64_t_s_s((((safe_add_func_uint16_t_u_u(l_128, (safe_add_func_uint64_t_u_u((((*l_140) = (safe_div_func_int8_t_s_s(0xFDL, ((l_133 <= ((safe_add_func_uint64_t_u_u(g_112, ((l_87[2] = (safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((void*)0 != &l_128), p_54)), 0))) == g_57.f0))) , 0xF0L)) | 0L)))) & 0x67760C71L), l_141)))) , 0x9FL) > 5L), 0x7CCA8444AC551041LL))), p_55)) , p_55), 65529UL))) , p_56))
            { 
                (*l_108) = (safe_rshift_func_uint16_t_u_s(0xA1FBL, 13));
                return g_57;
            }
            else
            { 
                if (g_112)
                    break;
            }
            return l_146;
        }
        if (g_51)
            continue;
        if (p_56)
        { 
            int8_t *l_156 = (void*)0;
            uint16_t *l_157 = &g_114;
            int16_t *l_158[5][3] = {{&g_159,&g_159,&g_159},{&g_159,&g_159,&g_159},{&g_159,&g_159,&g_159},{&g_159,&g_159,&g_159},{&g_159,&g_159,&g_159}};
            int32_t l_160 = 1L;
            int32_t l_168 = 0xE6635941L;
            int32_t l_169 = (-1L);
            union U1 *l_191 = &l_177;
            uint32_t l_288 = 0x942405EAL;
            int32_t *l_301 = &l_109[1][1][1];
            int i, j;
            g_147 &= (g_51 = p_56);
            if (((((0xBBE62397L ^ (((((safe_add_func_uint64_t_u_u((g_34[1][0] != (safe_unary_minus_func_int32_t_s((g_51 ^= (safe_add_func_uint32_t_u_u(((0x2BCA0CB05F298898LL && ((safe_mul_func_int16_t_s_s((l_155 != l_156), (g_159 = (l_157 == (void*)0)))) < g_94)) || p_56), p_54)))))), 0x58BC828D9300DF10LL)) >= p_56) > g_143) >= p_54) && 1UL)) & l_160) < 0xC976AA722102788ALL) == l_161))
            { 
                int32_t *l_162 = &g_51;
                uint8_t **l_165 = &l_95;
                l_162 = &p_56;
                if (g_112)
                    goto lbl_119;
                (*l_162) = ((safe_div_func_int8_t_s_s((&g_34[1][0] != ((*l_165) = &g_34[1][0])), 255UL)) ^ p_56);
            }
            else
            { 
                uint64_t l_172[5][2] = {{0xF9DEAA75BC96B2B8LL,0x50C05B529F704EBCLL},{18446744073709551614UL,0x97AE044C02797321LL},{0x50C05B529F704EBCLL,0x97AE044C02797321LL},{18446744073709551614UL,0x50C05B529F704EBCLL},{0xF9DEAA75BC96B2B8LL,0xF9DEAA75BC96B2B8LL}};
                struct S0 l_190 = {0xC3569B45L,18446744073709551613UL,0x7BB59C865190E703LL};
                union U1 **l_192[5][4] = {{&l_191,(void*)0,&l_191,&l_191},{(void*)0,(void*)0,&l_191,(void*)0},{(void*)0,&l_191,&l_191,(void*)0},{&l_191,(void*)0,&l_191,&l_191},{(void*)0,(void*)0,&l_191,(void*)0}};
                int i, j;
                for (g_66 = 1; (g_66 != 1); ++g_66)
                { 
                    --l_172[4][1];
                    (*l_108) = ((((safe_mod_func_uint8_t_u_u((((l_177 , (safe_sub_func_int16_t_s_s((((-1L) != (safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((((g_69[0] = (safe_lshift_func_int16_t_s_u(((g_57 , &p_56) == (void*)0), 9))) > ((safe_sub_func_int32_t_s_s(0x02E4CAB5L, ((safe_rshift_func_int8_t_s_s(0x86L, 1)) , p_54))) & 1UL)) != 0UL), p_54)), 11))) || 0x8BE60ADCB03EBDBDLL), g_94))) & 4L) > p_56), g_57.f0)) | g_170) ^ 0xBAE54040L) > g_112);
                }
                l_191 = (l_190 , l_191);
                for (l_161 = 0; (l_161 <= 6); l_161 += 1)
                { 
                    return l_193;
                }
            }
            for (l_177.f2.f2 = 0; (l_177.f2.f2 <= 2); l_177.f2.f2 += 1)
            { 
                int32_t l_202 = 9L;
                int32_t ** const l_205 = &l_110[1][4];
                uint64_t *l_206 = &g_57.f1;
                int i, j;
                g_51 = (safe_sub_func_uint16_t_u_u((((*l_206) = (safe_mul_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(0L, (safe_lshift_func_int16_t_s_u(l_202, 8)))) || (safe_mod_func_int16_t_s_s(((((&l_108 != l_205) , (g_57 , p_56)) <= ((p_54 > 0x0F7AC18CL) == (-1L))) , g_143), g_57.f2))), 65531UL))) != g_51), (-7L)));
            }
            if ((safe_lshift_func_int8_t_s_u(((*l_155) = g_57.f2), 4)))
            { 
                int16_t l_210[3][2] = {{0xAAD6L,0x1C8CL},{0xAAD6L,0xAAD6L},{0x1C8CL,0xAAD6L}};
                int32_t ***l_215 = &l_211;
                struct S0 l_217 = {-7L,5UL,0L};
                int i, j;
                if ((g_209 != ((*l_215) = (l_210[1][1] , (g_213[0][1] = l_211)))))
                { 
                    return l_216[3];
                }
                else
                { 
                    int32_t *l_218 = &l_87[1];
                    struct S0 *l_219 = &l_177.f3;
                    (**l_215) = &p_56;
                    l_193 = l_217;
                    (**l_215) = l_218;
                    (*l_219) = g_57;
                }
            }
            else
            { 
                uint64_t l_230 = 0xDA39471759D7677ELL;
                int64_t *l_243[1];
                int32_t l_284[6] = {0x0F99F456L,0xD86706A4L,0xD86706A4L,0x0F99F456L,0xD86706A4L,0xD86706A4L};
                int i;
                for (i = 0; i < 1; i++)
                    l_243[i] = &g_57.f2;
                if (((safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((((1L | l_160) && ((l_230 = (safe_add_func_int64_t_s_s((safe_rshift_func_int16_t_s_s(0xFFDCL, 10)), 0xCEB8E079F33D5E54LL))) && (l_230 , (~0UL)))) | ((safe_add_func_int8_t_s_s(((((safe_mul_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_add_func_int64_t_s_s((p_54 = (+((void*)0 != l_155))), g_5)), 0xB3587C03L)), 1)) , (void*)0) != g_244[4]), (*l_108))) || 0xE76F3828L) , p_56) | 0xD958CC197FE0C69ELL), g_170)) ^ 0L)), 3)), l_169)), 255UL)) != p_56))
                { 
                    (*l_211) = &p_56;
                    ++l_246;
                    (*l_108) ^= p_56;
                }
                else
                { 
                    uint64_t *l_253[6];
                    int32_t l_254 = 0L;
                    uint32_t *l_271[3][4][6] = {{{&g_143,&g_143,&g_143,&g_143,&g_143,&g_143},{&g_143,&g_143,&g_143,&g_143,&g_143,&g_143},{&g_143,&g_143,&g_143,&g_143,&g_143,&g_143},{&g_143,&g_143,&g_143,&g_143,&g_143,&g_143}},{{&g_143,&g_143,&g_143,&g_143,&g_143,&g_143},{&g_143,&g_143,&g_143,&g_143,&g_143,&g_143},{&g_143,&g_143,&g_143,&g_143,&g_143,&g_143},{&g_143,&g_143,&g_143,&g_143,&g_143,&g_143}},{{&g_143,&g_143,&g_143,&g_143,&g_143,&g_143},{&g_143,&g_143,&g_143,&g_143,&g_143,&g_143},{&g_143,&g_143,&g_143,&g_143,&g_143,&g_143},{&g_143,&g_143,&g_143,&g_143,&g_143,&g_143}}};
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_253[i] = &l_193.f1;
                    p_56 = (safe_mod_func_uint16_t_u_u((((safe_add_func_int16_t_s_s(((((((-3L) <= (((*l_108) = 18446744073709551607UL) && (l_254 , ((*l_270) &= ((safe_mul_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(0x6237C08B2C5ECF49LL, (safe_div_func_uint32_t_u_u((g_94 = (g_263 == ((safe_mul_func_uint8_t_u_u(0xD3L, (safe_mul_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((((*l_157) = g_57.f2) , 6L), 6)) < l_168), 0x55E6L)))) , l_270))), p_54)))), g_147)) | 0x53L), 0xFCC5L)) <= (*l_108)))))) <= g_159) && 0xFCL) , 0x903A52224D5146EALL) >= l_254), 0L)) >= 9L) <= l_169), p_54));
                    return g_57;
                }
                if (((**l_211) |= p_55))
                { 
                    int16_t l_289 = 0x135BL;
                    int32_t l_298[3][3][1] = {{{(-8L)},{0xBAFEEC57L},{(-8L)}},{{0xBAFEEC57L},{(-8L)},{0xBAFEEC57L}},{{(-8L)},{0xBAFEEC57L},{(-8L)}}};
                    int i, j, k;
                    (*l_108) = (safe_div_func_uint16_t_u_u(p_55, ((safe_div_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((p_56 , (safe_rshift_func_int8_t_s_s(g_170, 7))) | ((safe_mul_func_uint16_t_u_u(((((g_159 = p_54) <= (l_289 = ((((safe_mod_func_int64_t_s_s(0x4B9811396C76EF8ALL, (l_284[2] , (safe_mul_func_uint8_t_u_u(((!(*l_108)) & p_54), g_34[1][0]))))) >= l_288) ^ 0UL) || 4UL))) && 1UL) , g_34[0][0]), p_54)) != p_54)), 0x4A26L)), (**l_211))) || l_289)));
                    l_298[2][0][0] = (safe_add_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u(p_56, p_55)) | (251UL | (safe_add_func_uint16_t_u_u(l_284[2], ((*l_157) = (((g_147 = (safe_mul_func_int8_t_s_s((((*g_263) ^ (((((((1UL == l_288) , g_57) , g_69[1]) >= p_56) || g_51) , (-3L)) && p_56)) ^ 0x853F64DEL), p_56))) | p_56) < p_54)))))), g_66));
                    return l_299;
                }
                else
                { 
                    int32_t *l_300 = (void*)0;
                    (*l_108) = p_56;
                    l_301 = l_300;
                }
                if (p_55)
                    continue;
            }
        }
        else
        { 
            for (g_159 = 0; (g_159 >= 23); g_159++)
            { 
                (*l_211) = &p_56;
                return g_57;
            }
            return g_57;
        }
    }
    for (g_147 = 0; (g_147 <= 0); g_147 += 1)
    { 
        uint32_t l_363 = 4294967295UL;
        int32_t l_383 = 0xD0CF3FB1L;
        union U1 *l_416 = (void*)0;
        const int32_t l_420 = 0xD1E2D050L;
        struct S0 l_428 = {-5L,18446744073709551615UL,0L};
        int8_t *l_437 = &g_69[0];
        int8_t **l_436 = &l_437;
        int8_t ***l_438 = &l_436;
        int16_t *l_466 = (void*)0;
        int32_t l_467 = 0xB58B7DE9L;
        uint16_t l_492[4] = {0x25A8L,0x25A8L,0x25A8L,0x25A8L};
        int32_t ***l_502 = (void*)0;
        uint8_t l_508 = 4UL;
        int i;
        --l_363;
        if (((**l_211) = (-2L)))
        { 
            uint64_t *l_380 = &g_57.f1;
            int32_t l_409 = 0xCFF65F10L;
            int32_t *l_427 = &g_57.f0;
            uint64_t l_430[5] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
            int i;
            for (p_56 = 4; (p_56 >= 0); p_56 -= 1)
            { 
                uint8_t l_381 = 0x3AL;
                int64_t l_418[7][1] = {{(-7L)},{0xBB1ACD26A33D7D3ALL},{(-7L)},{(-7L)},{0xBB1ACD26A33D7D3ALL},{(-7L)},{(-7L)}};
                struct S0 l_423 = {0x492C9319L,4UL,0x80EC286B1FB607D9LL};
                struct S0 *l_429 = &g_57;
                int i, j;
                for (g_90 = 1; (g_90 <= 6); g_90 += 1)
                { 
                    uint16_t *l_368 = &g_114;
                    uint8_t *l_369[3][7][3] = {{{&g_34[1][0],(void*)0,&g_370},{&g_34[1][0],&g_370,&g_34[1][0]},{&g_34[1][0],&g_34[1][0],&g_370},{&g_34[1][0],&g_34[1][0],&g_34[1][0]},{&g_370,&g_34[1][0],&g_370},{(void*)0,&g_34[1][0],&g_34[1][0]},{&g_370,&g_370,&g_34[1][0]}},{{&g_34[1][0],(void*)0,&g_370},{&g_34[1][0],&g_370,&g_34[1][0]},{&g_34[1][0],&g_34[1][0],&g_370},{&g_34[1][0],&g_34[1][0],&g_34[1][0]},{&g_370,&g_34[1][0],&g_370},{(void*)0,&g_34[1][0],&g_34[1][0]},{&g_370,&g_370,&g_34[1][0]}},{{&g_34[1][0],(void*)0,&g_370},{&g_34[1][0],&g_34[1][0],(void*)0},{(void*)0,&g_34[1][0],&g_34[1][0]},{&g_34[1][0],(void*)0,(void*)0},{&g_34[1][0],(void*)0,&g_34[1][0]},{&g_370,&g_34[1][0],&g_370},{&g_34[1][0],&g_34[1][0],&g_370}}};
                    int32_t l_371 = 0L;
                    int32_t l_372 = (-1L);
                    uint64_t **l_379[7][1][2] = {{{(void*)0,&g_263}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{&g_263,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}}};
                    int32_t *l_417[3];
                    uint32_t *l_419[6][3] = {{&l_363,&g_147,&g_147},{&g_147,&g_143,&g_94},{&l_363,&g_143,&l_363},{&g_143,&g_147,&g_94},{&g_143,&g_143,&g_147},{&l_363,&g_147,&g_147}};
                    int8_t *l_421 = &l_111[g_90];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_417[i] = &g_112;
                    l_383 &= ((++g_66) >= ((l_111[g_90] ^ ((((g_375 = ((l_368 == l_78) & (g_370--))) == 0x70L) < (l_111[(p_56 + 2)] <= (((((((p_54 , ((((safe_unary_minus_func_int8_t_s((safe_div_func_uint32_t_u_u((((g_263 = g_263) == l_380) | (-1L)), 0x99C12719L)))) ^ l_381) , g_171) < l_382)) <= l_381) > l_363) >= 4UL) || p_54) || p_56) < 18446744073709551611UL))) | g_147)) != p_55));
                    l_212[g_147] = ((((*l_421) = (safe_div_func_uint16_t_u_u((((safe_div_func_uint32_t_u_u(0xAEFC5B07L, ((l_409 = (p_54 ^ ((safe_mul_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((((safe_mod_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((((safe_add_func_int64_t_s_s(((safe_sub_func_uint64_t_u_u((p_56 <= (safe_mul_func_int8_t_s_s(((l_383 = (((((safe_sub_func_uint16_t_u_u((!(safe_mul_func_uint8_t_u_u(l_409, ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s(((safe_sub_func_int8_t_s_s(((l_416 == (void*)0) , (-4L)), g_370)) ^ p_55), 5)), 5)) && 9L)))), p_56)) > 0x779AL) >= 1UL) >= p_56) | l_372)) , l_418[5][0]), g_114))), g_170)) >= 0xE0L), 0x9C3087075214E21DLL)) != p_56) , l_381), p_55)), 0xCE1AC964795ED238LL)) | g_34[1][0]) <= p_54), 0x8BL)), 0x61355165L)), 0x2CL)) != g_171))) , p_56))) != l_420) == 0xDAA46021L), p_56))) > p_54) , &p_56);
                    return l_193;
                }
                for (g_94 = 0; (g_94 <= 6); g_94 += 1)
                { 
                    struct S0 *l_422[7] = {&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57};
                    int i;
                    l_423 = g_57;
                    if (l_409)
                        goto lbl_424;
                }
                for (g_51 = 0; (g_51 <= 6); g_51 += 1)
                { 
                    uint8_t l_425[3];
                    int32_t *l_426 = &g_358;
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_425[i] = 0xA3L;
                    l_425[1] = l_111[(p_56 + 2)];
                    if (l_111[g_147])
                        continue;
                    l_427 = l_426;
                }
                (*l_429) = (l_428 = l_428);
                l_430[1]--;
            }
            for (g_90 = 0; (g_90 <= 5); g_90 += 1)
            { 
                for (g_112 = 6; (g_112 >= 0); g_112 -= 1)
                { 
                    uint64_t l_433[6][1];
                    int i, j;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_433[i][j] = 3UL;
                    }
                    ++l_433[0][0];
                }
            }
            if ((*g_214))
                break;
        }
        else
        { 
            (**l_211) = l_420;
        }
        (*l_438) = l_436;
        for (g_57.f1 = 0; (g_57.f1 > 25); g_57.f1 = safe_add_func_int8_t_s_s(g_57.f1, 6))
        { 
            uint16_t * const *l_448 = (void*)0;
            uint16_t * const **l_447 = &l_448;
            int64_t *l_449 = &g_245[0].f3.f2;
            int64_t *l_450 = &g_57.f2;
            int8_t * const *l_460 = &l_437;
            const int32_t l_465 = (-3L);
            int32_t l_486 = 0xC40CA8BDL;
            uint64_t l_506 = 0xD3B27F0A4E525C4BLL;
            int32_t l_507 = (-6L);
        }
    }
    (*l_211) = &p_56;
    return l_193;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_3[i], "g_3[i]", print_hash_value);

    }
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_34[i][j], "g_34[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_57.f0, "g_57.f0", print_hash_value);
    transparent_crc(g_57.f1, "g_57.f1", print_hash_value);
    transparent_crc(g_57.f2, "g_57.f2", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_69[i], "g_69[i]", print_hash_value);

    }
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_245[i].f0, "g_245[i].f0", print_hash_value);
        transparent_crc(g_245[i].f1, "g_245[i].f1", print_hash_value);

    }
    transparent_crc(g_358, "g_358", print_hash_value);
    transparent_crc(g_370, "g_370", print_hash_value);
    transparent_crc(g_375, "g_375", print_hash_value);
    transparent_crc(g_463, "g_463", print_hash_value);
    transparent_crc(g_549, "g_549", print_hash_value);
    transparent_crc(g_734.f0, "g_734.f0", print_hash_value);
    transparent_crc(g_734.f1, "g_734.f1", print_hash_value);
    transparent_crc(g_734.f2, "g_734.f2", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_861[i], "g_861[i]", print_hash_value);

    }
    transparent_crc(g_1074, "g_1074", print_hash_value);
    transparent_crc(g_1110, "g_1110", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1413[i][j][k], "g_1413[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1423.f0, "g_1423.f0", print_hash_value);
    transparent_crc(g_1423.f1, "g_1423.f1", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
