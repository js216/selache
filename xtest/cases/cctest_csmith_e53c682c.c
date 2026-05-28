// SPDX-License-Identifier: MIT
// cctest_csmith_e53c682c.c --- cctest case csmith_e53c682c (csmith seed 3845941292)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x9f4bdcc6 */
/* @exp_ticks 0x473e */

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

// Options:   -s 3845941292 -o /tmp/csmith_gen_ifhoulsf/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int16_t  f0;
};

union U1 {
   uint8_t  f0;
};

union U2 {
   uint32_t  f0;
};


static const uint16_t g_17 = 0x2F67L;
static uint8_t g_38 = 0x9CL;
static uint8_t g_50 = 0xCDL;
static uint16_t g_53[3] = {1UL,1UL,1UL};
static struct S0 g_57 = {3L};
static int8_t g_87 = 0x15L;
static int8_t g_88 = 0xABL;
static uint32_t g_131 = 0xF541A3ACL;
static int16_t g_142[2][3][4] = {{{0L,8L,0L,(-7L)},{0L,(-7L),(-7L),0L},{(-1L),(-7L),0xB8D9L,(-7L)}},{{(-7L),8L,0xB8D9L,0xB8D9L},{(-1L),(-1L),(-7L),0xB8D9L},{0L,8L,0L,(-7L)}}};
static union U1 g_151[4] = {{255UL},{255UL},{255UL},{255UL}};
static uint8_t g_156 = 8UL;
static int32_t g_160 = 0x3C507C22L;
static uint8_t g_169[3][4][3] = {{{254UL,254UL,254UL},{0UL,0UL,0UL},{254UL,254UL,254UL},{0UL,0UL,0UL}},{{254UL,254UL,254UL},{0UL,0UL,0UL},{254UL,254UL,254UL},{0UL,0UL,0UL}},{{254UL,254UL,254UL},{0UL,0UL,0UL},{254UL,254UL,254UL},{0UL,0UL,0UL}}};
static uint8_t g_172 = 255UL;
static int64_t g_173 = (-10L);
static uint64_t g_174 = 0xF3936D73F18804D5LL;
static int32_t g_175 = 1L;
static int32_t g_184 = 0x46011D50L;
static uint16_t g_185 = 0UL;



static union U1  func_1(void);
static int32_t  func_8(union U1  p_9, int16_t  p_10, union U1  p_11, const int16_t  p_12, uint32_t  p_13);
static int32_t  func_21(int32_t  p_22);
static int64_t  func_28(int32_t  p_29);




static union U1  func_1(void)
{ 
    union U1 l_14 = {1UL};
    int32_t l_15 = 0x8B0D193EL;
    union U1 l_16 = {0UL};
    int32_t l_182 = 0xBAA5094AL;
    int32_t l_183 = 1L;
    union U2 l_198[2][5][1] = {{{{0xCF287346L}},{{7UL}},{{0xCF287346L}},{{7UL}},{{0xCF287346L}}},{{{7UL}},{{0xCF287346L}},{{7UL}},{{0xCF287346L}},{{7UL}}}};
    int i, j, k;
    l_183 = (l_182 = (safe_lshift_func_uint16_t_u_u((l_15 = (safe_div_func_uint64_t_u_u(0x4822B16580849F84LL, (safe_sub_func_int64_t_s_s((func_8(l_14, l_15, l_16, g_17, l_16.f0) < g_88), 18446744073709551610UL))))), l_16.f0)));
    g_185++;
    g_175 = ((((((((safe_div_func_uint8_t_u_u(g_17, (safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(g_50, ((l_16 , ((g_53[2] < 6UL) ^ g_184)) , g_185))), l_182)) != g_142[0][0][1]), l_16.f0)), g_156)))) != g_156) < 1UL) & g_87) , l_16.f0) , l_198[0][3][0]) , 0UL) | 0x8E85FBC085BF0B68LL);
    return l_14;
}



static int32_t  func_8(union U1  p_9, int16_t  p_10, union U1  p_11, const int16_t  p_12, uint32_t  p_13)
{ 
    uint8_t l_20 = 0xC4L;
    int32_t l_25 = 0x50270F9EL;
    struct S0 l_176 = {0L};
    if ((safe_add_func_int32_t_s_s((p_13 < l_20), (g_175 = (g_174 ^= func_21((l_25 = (safe_div_func_int64_t_s_s((0x6DAD816F93BD5DE1LL <= g_17), p_12)))))))))
    { 
        g_57 = l_176;
    }
    else
    { 
        uint64_t l_181 = 0x2044F22EBF566147LL;
        for (l_25 = 29; (l_25 <= (-2)); l_25 = safe_sub_func_uint8_t_u_u(l_25, 6))
        { 
            l_181 &= (safe_add_func_uint16_t_u_u(g_87, 0x82A5L));
        }
    }
    return l_176.f0;
}



static int32_t  func_21(int32_t  p_22)
{ 
    g_172 = (safe_mod_func_int64_t_s_s(0L, func_28((18446744073709551609UL != p_22))));
    return g_173;
}



static int64_t  func_28(int32_t  p_29)
{ 
    uint64_t l_36[4] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
    int16_t l_37 = 0x0F30L;
    int32_t l_39 = 0x07C1ABDFL;
    union U2 l_42 = {0x23E24B13L};
    int64_t l_64 = 0xBCB8161DBFA2F909LL;
    uint32_t l_89[2];
    struct S0 l_120 = {-4L};
    int16_t l_149 = 0xB192L;
    int8_t l_168[3][2][4] = {{{(-1L),7L,(-1L),7L},{(-1L),7L,(-1L),7L}},{{(-1L),7L,(-1L),7L},{(-1L),7L,(-1L),7L}},{{(-1L),7L,(-1L),7L},{(-1L),7L,(-1L),7L}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_89[i] = 18446744073709551607UL;
    if ((safe_rshift_func_uint8_t_u_u(((0x9D9E177CL | ((((l_39 |= (g_38 = ((safe_rshift_func_int16_t_s_s((p_29 == (safe_lshift_func_uint8_t_u_s((l_36[1] != 0xB64BL), l_37))), p_29)) > g_17))) , g_17) || 1L) >= p_29)) >= l_37), g_17)))
    { 
        uint32_t l_43 = 0x92E7BAA9L;
        int32_t l_47[3];
        int i;
        for (i = 0; i < 3; i++)
            l_47[i] = 9L;
        l_39 = ((safe_add_func_int16_t_s_s((l_42 , p_29), l_43)) , (((safe_mod_func_int16_t_s_s(((18446744073709551615UL ^ l_36[3]) || p_29), p_29)) | l_36[3]) > 0x90538E0EL));
        l_47[0] = (p_29 && (~g_17));
        for (g_38 = (-15); (g_38 <= 49); g_38 = safe_add_func_int64_t_s_s(g_38, 8))
        { 
            g_50++;
            g_53[0] &= (-6L);
        }
    }
    else
    { 
        uint32_t l_68 = 0xADC7C5A9L;
        int16_t l_73 = 5L;
        int64_t l_83[1];
        uint16_t l_84 = 0xAAC5L;
        int i;
        for (i = 0; i < 1; i++)
            l_83[i] = (-9L);
        for (l_42.f0 = 0; (l_42.f0 < 40); ++l_42.f0)
        { 
            struct S0 l_56 = {0xD48AL};
            int32_t l_65 = 0L;
            g_57 = l_56;
            l_68 ^= ((((safe_div_func_uint32_t_u_u(l_37, 0xEBF624E1L)) , (safe_mul_func_int8_t_s_s((l_65 = (l_39 = (safe_lshift_func_int8_t_s_u(l_64, 2)))), (safe_rshift_func_uint8_t_u_u(g_38, g_17))))) != p_29) , p_29);
        }
        for (p_29 = 0; (p_29 >= (-10)); p_29 = safe_sub_func_int8_t_s_s(p_29, 5))
        { 
            uint64_t l_80 = 18446744073709551610UL;
            for (l_64 = 9; (l_64 == 29); l_64 = safe_add_func_int16_t_s_s(l_64, 8))
            { 
                l_39 = p_29;
                return p_29;
            }
            for (g_38 = 0; (g_38 <= 3); g_38 += 1)
            { 
                if (l_73)
                    break;
            }
            l_39 = (safe_mul_func_uint16_t_u_u((g_57.f0 == (l_42 , ((safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(l_80, ((safe_sub_func_uint32_t_u_u(0xA534C8A1L, 0x174ED7B9L)) == l_83[0]))), l_84)) || l_80))), (-1L)));
        }
    }
    l_39 = (-1L);
    if (((((l_89[0]++) || ((((safe_mul_func_int8_t_s_s(g_50, 0xC6L)) == l_37) , (safe_mod_func_int8_t_s_s(g_53[1], 0x55L))) > 0xE0D0L)) & 0xB1E9E5145DB5E494LL) && (-1L)))
    { 
        int8_t l_110[2];
        int32_t l_117 = (-2L);
        union U2 l_123 = {9UL};
        int64_t l_124 = 0x1820E1BCB00F8C8FLL;
        int i;
        for (i = 0; i < 2; i++)
            l_110[i] = 3L;
        l_117 = ((safe_lshift_func_int16_t_s_s(((safe_div_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((((safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u((safe_add_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u(65534UL, l_110[0])), ((safe_sub_func_int64_t_s_s(((safe_lshift_func_int16_t_s_u((g_57.f0 = p_29), 15)) ^ (safe_mod_func_int16_t_s_s(1L, 0xC55CL))), g_50)) , 0xB3C28C649887233ELL))), g_87)), l_89[0])) != l_37) , g_53[2]) , l_89[0]), l_36[1])), 0x69L)) & p_29), p_29)) ^ 3L);
        l_117 = ((18446744073709551615UL && (g_50 <= ((g_57 , g_17) ^ 1UL))) != g_38);
        if ((safe_div_func_int32_t_s_s((l_110[0] >= (l_120 , 0UL)), l_39)))
        { 
            uint32_t l_130 = 0x6744ED4CL;
            int32_t l_141 = 0x02A80750L;
            g_131 = ((l_117 = (l_130 = (safe_sub_func_int32_t_s_s(0x5F2590C1L, (((l_123 , (l_124 && (((!((safe_lshift_func_int8_t_s_u(((safe_sub_func_int32_t_s_s((((g_17 < p_29) > g_53[2]) && g_50), p_29)) & 0xEAD213B7L), l_36[1])) , 5L)) | p_29) | g_88))) < 4294967287UL) && g_88))))) && g_87);
            for (l_39 = 1; (l_39 >= 0); l_39 -= 1)
            { 
                int i;
                g_142[0][0][1] = (safe_add_func_uint16_t_u_u((((l_89[l_39] < (safe_rshift_func_int8_t_s_u(g_53[1], (+(safe_add_func_int16_t_s_s(((((g_57.f0 = p_29) & (((l_141 = ((g_50 = (((((((safe_sub_func_int16_t_s_s(0x0B43L, l_64)) || 1L) || p_29) , l_124) < l_117) | g_53[0]) >= 0xBB1BL)) >= 9L)) & 1L) & 65535UL)) != g_53[1]) > l_89[l_39]), 0x2920L)))))) == 7L) <= 4294967290UL), g_38));
                return g_57.f0;
            }
            l_149 |= ((l_110[0] , (l_39 = (safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_div_func_uint64_t_u_u(((0x77FB2C377C446C13LL & p_29) > (g_142[0][0][1] != 0L)), g_17)), p_29)), 65527UL)))) >= l_36[1]);
        }
        else
        { 
            struct S0 l_150 = {0L};
            int32_t l_167 = (-5L);
            if (p_29)
            { 
                int16_t l_157 = 4L;
                l_150 = g_57;
                g_156 = ((g_151[1] , 0x531C418AL) == ((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((0xF93BL >= (1UL == g_38)) >= 0x0512332CL), 3)), 2)) >= g_53[2]));
                l_39 = (0x8864L > (g_151[1] , (l_157 != (((safe_div_func_int16_t_s_s(p_29, g_50)) | (-10L)) <= l_157))));
            }
            else
            { 
                g_160 = 0L;
            }
            l_167 = (safe_div_func_uint32_t_u_u(((((3L > ((l_150.f0 < (l_117 = (safe_add_func_int64_t_s_s(((safe_rshift_func_int8_t_s_s(l_150.f0, 1)) > (g_151[1] , 0x2EDA5BF8L)), 0L)))) | g_142[0][2][3])) >= g_151[1].f0) != l_150.f0) | 0xBD1CFCE029DE2F31LL), l_150.f0));
        }
    }
    else
    { 
        --g_169[0][1][2];
    }
    return g_57.f0;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_53[i], "g_53[i]", print_hash_value);

    }
    transparent_crc(g_57.f0, "g_57.f0", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_142[i][j][k], "g_142[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_151[i].f0, "g_151[i].f0", print_hash_value);

    }
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_169[i][j][k], "g_169[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
