// SPDX-License-Identifier: MIT
// cctest_csmith_1632700f.c --- cctest case csmith_1632700f (csmith seed 372404239)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf6a975c7 */
/* @exp_ticks 0x4c1c */

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

// Options:   -s 372404239 -o /tmp/csmith_gen_x7067prz/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int8_t  f0;
   uint16_t  f1;
   int16_t  f2;
};

union U1 {
   const struct S0  f0;
   int8_t  f1;
   uint32_t  f2;
   uint32_t  f3;
};

union U2 {
   int32_t  f0;
   int64_t  f1;
};

union U3 {
   uint16_t  f0;
   uint64_t  f1;
   int32_t  f2;
   const struct S0  f3;
};

union U4 {
   int64_t  f0;
   uint32_t  f1;
};

union U5 {
   const int32_t  f0;
   const struct S0  f1;
};

union U6 {
   uint64_t  f0;
   int32_t  f1;
   uint8_t  f2;
   const int64_t  f3;
};


static uint32_t g_2[2] = {1UL,1UL};
static union U6 g_12[4] = {{8UL},{8UL},{8UL},{8UL}};
static union U2 g_27 = {0x55EEC80FL};
static int8_t g_29 = 0x60L;
static uint64_t g_30 = 0x660D64C9D8D92426LL;
static union U1 g_34 = {{4L,0xEE6DL,0x4EC7L}};
static union U3 g_35 = {0x4307L};
static int32_t g_55 = 0x665FEC6BL;
static int8_t g_73[2][2] = {{0x11L,0x11L},{0x11L,0x11L}};
static int32_t g_88 = (-3L);
static uint64_t g_89 = 6UL;
static union U4 g_113[1] = {{0xEDD1FAEF758CFF8DLL}};
static uint8_t g_122[2] = {7UL,7UL};
static uint32_t g_131 = 0UL;
static int16_t g_160 = 0xC06CL;
static int8_t g_161 = 3L;
static int16_t g_162[1][5][5] = {{{0x37BBL,0x07A5L,0x37BBL,0x6335L,0x6335L},{0x37BBL,0x07A5L,0x37BBL,0x6335L,0x6335L},{0x37BBL,0x07A5L,0x37BBL,0x6335L,0x6335L},{0x37BBL,0x07A5L,0x37BBL,0x6335L,0x6335L},{0x37BBL,0x07A5L,0x37BBL,0x6335L,0x6335L}}};
static int32_t g_163 = (-1L);
static int16_t g_164 = 8L;
static int8_t g_165 = (-3L);
static int32_t g_168 = 0x26E48389L;
static uint32_t g_169 = 4294967295UL;
static const union U5 g_198 = {8L};
static uint64_t g_233 = 0x713FB8FAB62559B5LL;
static struct S0 g_237 = {0L,65527UL,0L};



static union U5  func_1(void);
static int32_t  func_5(int32_t  p_6, union U6  p_7, uint16_t  p_8, union U4  p_9, int32_t  p_10);
static int8_t  func_15(uint64_t  p_16);
static uint64_t  func_21(union U2  p_22, uint32_t  p_23, union U2  p_24, union U1  p_25, union U3  p_26);




static union U5  func_1(void)
{ 
    uint16_t l_11[3];
    union U2 l_33[3][3][1] = {{{{0xEC1B16EBL}},{{1L}},{{0xEC1B16EBL}}},{{{1L}},{{0xEC1B16EBL}},{{1L}}},{{{0xEC1B16EBL}},{{1L}},{{0xEC1B16EBL}}}};
    int32_t l_255 = (-4L);
    struct S0 l_257[2] = {{0xBDL,65526UL,0x93C2L},{0xBDL,65526UL,0x93C2L}};
    int32_t l_258 = 4L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_11[i] = 1UL;
    ++g_2[0];
    if (func_5(l_11[2], g_12[1], (((safe_add_func_uint8_t_u_u(((g_29 = func_15((safe_rshift_func_int16_t_s_u((l_255 = (safe_rshift_func_int8_t_s_s((func_21(g_27, ((~(g_30++)) <= g_2[0]), l_33[0][1][0], g_34, g_35) ^ g_34.f0.f1), 6))), g_12[1].f0)))) >= g_113[0].f1), l_33[0][1][0].f0)) , l_257[1]) , l_258), g_113[0], g_198.f0))
    { 
        int32_t l_269 = 0x1EBF44B9L;
        for (g_131 = 0; (g_131 < 8); ++g_131)
        { 
            struct S0 l_262 = {0xE3L,0x3705L,0L};
            uint16_t l_270[4] = {0x69FDL,0x69FDL,0x69FDL,0x69FDL};
            int32_t l_281 = 0xABF97DC1L;
            uint8_t l_285 = 0UL;
            uint64_t l_293 = 0x77700CADEF5C6319LL;
            int i;
            g_237 = l_262;
            if ((g_168 , (l_269 = ((g_161 = 0xF9L) > (g_27 , (safe_div_func_uint32_t_u_u((((((((((safe_add_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((((g_198.f0 & g_160) < g_73[1][1]) >= l_269), 0xDA12L)), g_55)) != 5L) >= g_73[0][0]) ^ 0xF9E03FE5L) , 0UL) != 0L) && l_262.f1) , 0x3D89DC98L) && l_262.f1), l_270[0])))))))
            { 
                int64_t l_284 = (-1L);
                int32_t l_292 = 0x3327E28AL;
                l_281 ^= ((safe_mod_func_int64_t_s_s((g_12[1].f2 | (safe_div_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(g_89, (((safe_sub_func_uint64_t_u_u((safe_add_func_uint64_t_u_u(9UL, (l_255 ^= g_88))), g_169)) || (-7L)) ^ g_89))), 0x75L))), g_161)) == g_2[1]);
                l_281 = (l_270[3] <= ((safe_rshift_func_int8_t_s_s(((g_89 == g_163) < g_27.f0), g_233)) , 6UL));
                g_55 ^= (((((l_284 = 246UL) < (l_285 = 0x63L)) > (safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u((g_164 <= l_11[1]), 0xCFC32C82L)), 1)), l_292))) <= g_2[1]) != 0x75D9914FC0F73C5BLL);
            }
            else
            { 
                g_35.f2 = (l_293 != (g_12[1].f1 , (safe_div_func_int8_t_s_s((safe_div_func_int64_t_s_s((l_257[1] , (safe_mod_func_int16_t_s_s((l_269 > g_12[1].f2), l_257[1].f2))), g_122[0])), l_270[2]))));
            }
            g_168 = 0x142B981AL;
        }
    }
    else
    { 
        g_163 = (g_73[0][0] , (safe_rshift_func_uint16_t_u_s((g_233 > (g_164 = (safe_lshift_func_int16_t_s_u((0x12L && g_12[1].f3), g_162[0][0][3])))), g_113[0].f1)));
        return g_198;
    }
    return g_198;
}



static int32_t  func_5(int32_t  p_6, union U6  p_7, uint16_t  p_8, union U4  p_9, int32_t  p_10)
{ 
    struct S0 l_259 = {-7L,0x5C77L,-1L};
    l_259 = l_259;
    return g_73[1][1];
}



static int8_t  func_15(uint64_t  p_16)
{ 
    int32_t l_256 = 0x050764EFL;
    return l_256;
}



static uint64_t  func_21(union U2  p_22, uint32_t  p_23, union U2  p_24, union U1  p_25, union U3  p_26)
{ 
    int16_t l_40 = 0x9329L;
    union U6 l_41 = {0UL};
    const union U5 l_43 = {1L};
    int32_t l_72[3][5][1] = {{{(-2L)},{(-1L)},{(-2L)},{(-1L)},{(-2L)}},{{(-1L)},{(-2L)},{(-1L)},{(-2L)},{(-1L)}},{{(-2L)},{(-1L)},{(-2L)},{(-1L)},{(-2L)}}};
    uint16_t l_121[5] = {0xA6E4L,0xA6E4L,0xA6E4L,0xA6E4L,0xA6E4L};
    int32_t l_152 = 0L;
    int32_t l_153 = 0x6A6FFDE1L;
    uint8_t l_186 = 8UL;
    int16_t l_205 = 0xC150L;
    uint8_t l_207 = 0x64L;
    int i, j, k;
    if ((((safe_mul_func_uint16_t_u_u(g_12[1].f3, (((safe_lshift_func_uint16_t_u_u(((((l_40 <= (l_41 , (g_34.f0.f2 > l_41.f2))) < g_34.f0.f0) , g_27.f0) ^ p_25.f0.f0), 11)) & 0x30906344L) != 0x869E7721L))) & l_41.f3) || 1L))
    { 
        uint64_t l_42[2];
        int32_t l_64 = 0xC247AFAEL;
        int32_t l_110 = 0xD9911037L;
        int i;
        for (i = 0; i < 2; i++)
            l_42[i] = 18446744073709551610UL;
        if (((l_42[0] | (l_43 , (safe_lshift_func_uint8_t_u_s(p_25.f0.f0, g_12[1].f0)))) < p_25.f0.f2))
        { 
            int16_t l_50 = 0L;
            union U1 l_51[4] = {{{6L,65526UL,0xEF32L}},{{6L,65526UL,0xEF32L}},{{6L,65526UL,0xEF32L}},{{6L,65526UL,0xEF32L}}};
            union U5 l_52 = {0xD890AAF7L};
            int32_t l_59[3];
            int i;
            for (i = 0; i < 3; i++)
                l_59[i] = (-1L);
            g_55 = ((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u((l_50 || ((l_51[0] , l_52) , ((l_40 && l_42[1]) ^ 0L))), p_23)), g_34.f0.f2)) <= 0xC8E9BDCCB4F7BC72LL);
            l_64 ^= (g_12[1] , (((safe_unary_minus_func_uint32_t_u((g_2[1]++))) > (l_59[1] = g_12[1].f1)) | (l_42[0] && (safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(6L, p_24.f0)), l_52.f0)))));
        }
        else
        { 
            return p_25.f0.f0;
        }
        for (g_35.f2 = 0; (g_35.f2 > 19); ++g_35.f2)
        { 
            uint32_t l_74 = 18446744073709551615UL;
        }
        for (g_35.f1 = 0; (g_35.f1 < 34); g_35.f1++)
        { 
            union U1 l_103 = {{3L,65535UL,0xDED4L}};
            --g_89;
            if (p_25.f0.f2)
                break;
            l_72[1][0][0] = (((l_110 |= (((safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_div_func_uint16_t_u_u(((p_24.f1 = (safe_rshift_func_uint16_t_u_s(((safe_unary_minus_func_uint16_t_u(((safe_mod_func_int16_t_s_s((l_64 = g_2[0]), (l_103 , (safe_rshift_func_uint8_t_u_u(l_42[1], (safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(g_35.f1, l_103.f0.f1)), l_40))))))) == 0xB3423B0CAFCEB5E7LL))) ^ l_42[1]), l_103.f0.f1))) & p_25.f0.f2), g_34.f0.f1)), 2L)), p_23)) && 0x28C89D8701E4A264LL) | 0x60L)) || g_35.f2) > p_25.f0.f0);
        }
    }
    else
    { 
        int16_t l_114[4] = {0x7F34L,0x7F34L,0x7F34L,0x7F34L};
        struct S0 l_123[4] = {{0x69L,0x2847L,4L},{0x69L,0x2847L,4L},{0x69L,0x2847L,4L},{0x69L,0x2847L,4L}};
        int32_t l_129 = (-5L);
        int32_t l_130 = (-1L);
        int i;
        p_26.f2 = ((p_22.f0 <= (safe_mod_func_uint16_t_u_u(((g_113[0] , 0L) || (l_114[1] &= 0L)), p_26.f0))) != 0x7049L);
        for (g_88 = 0; (g_88 <= 18); g_88 = safe_add_func_uint32_t_u_u(g_88, 2))
        { 
            int8_t l_120 = 0xA4L;
            struct S0 l_124 = {0x92L,65535UL,7L};
            l_124 = (((g_122[0] = ((((safe_sub_func_int8_t_s_s((~l_120), ((p_24 , 0x4259BBF2B79F9BF1LL) <= l_72[1][0][0]))) , l_121[3]) < g_55) && g_35.f0)) && g_12[1].f1) , l_123[0]);
            return g_113[0].f0;
        }
        for (l_41.f0 = (-23); (l_41.f0 <= 11); l_41.f0 = safe_add_func_int16_t_s_s(l_41.f0, 4))
        { 
            int64_t l_127 = 0x01126FE5016CB793LL;
            int32_t l_128[5] = {0x7E63684AL,0x7E63684AL,0x7E63684AL,0x7E63684AL,0x7E63684AL};
            int i;
            ++g_131;
        }
    }
    if (g_12[1].f3)
    { 
        uint16_t l_138 = 65535UL;
        uint32_t l_141 = 0x7D7650D9L;
        int32_t l_158 = 1L;
        int32_t l_159 = 0L;
        g_55 = (safe_rshift_func_uint16_t_u_s((safe_add_func_uint64_t_u_u(g_73[0][0], l_138)), (((2L & (safe_rshift_func_int8_t_s_s(((g_12[0] , l_141) >= g_2[0]), l_141))) , g_88) != g_34.f0.f0)));
        l_153 ^= (safe_rshift_func_int16_t_s_s((safe_sub_func_int64_t_s_s(p_25.f0.f2, ((((safe_div_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((l_72[1][0][0] = g_12[1].f1), (((0x013AL | (safe_add_func_uint32_t_u_u(p_25.f0.f1, g_30))) >= 0xBB7C98E3433B3C15LL) | 0x3C4FL))), g_73[0][0])) | 1L) , g_34.f0.f0) < p_23))), l_152));
        g_35.f2 = (safe_mul_func_int16_t_s_s(0x1912L, (safe_mul_func_int8_t_s_s((l_158 |= (-2L)), (l_159 = (0x0544L >= (0x4EEC52D1EAB3F101LL || p_25.f0.f2)))))));
    }
    else
    { 
        int64_t l_166 = 2L;
        int32_t l_167[5][1][1] = {{{0xE3BFD9FCL}},{{5L}},{{0xE3BFD9FCL}},{{5L}},{{0xE3BFD9FCL}}};
        uint32_t l_209 = 0x7F66EBC8L;
        int i, j, k;
        g_169--;
        if ((safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(g_169, ((safe_mod_func_int8_t_s_s((l_43 , ((l_186 |= ((safe_div_func_int8_t_s_s(((l_152 = (safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u(g_163, g_164)), g_2[0])), g_122[0]))) == l_72[1][0][0]), g_165)) && g_165)) && p_25.f0.f2)), l_166)) & 4L))), p_25.f0.f2)))
        { 
            return g_29;
        }
        else
        { 
            int32_t l_206[3];
            int32_t l_208 = (-5L);
            int i;
            for (i = 0; i < 3; i++)
                l_206[i] = 0xF4BA9CC6L;
            if ((~(safe_sub_func_uint64_t_u_u((safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s((g_198 , p_26.f0), ((g_55 = (safe_rshift_func_int8_t_s_s((l_205 = (g_73[1][1] = (((p_25.f0.f0 == (++g_35.f0)) | (l_72[0][4][0] = (safe_mul_func_uint8_t_u_u((g_2[0] & g_113[0].f0), g_2[1])))) == 8UL))), l_206[2]))) | l_40))), 1)) || p_25.f0.f2), l_206[2])), l_207)), 18446744073709551614UL))))
            { 
                int32_t l_215 = 0xCC5E6FE9L;
                l_152 |= (g_165 != 1L);
                l_209--;
                l_72[1][0][0] &= (safe_sub_func_uint8_t_u_u((~(p_25.f1 = l_215)), (((-7L) != 0L) & (safe_sub_func_int64_t_s_s(0x992E5D78F8258141LL, g_35.f0)))));
            }
            else
            { 
                int8_t l_219 = 0x46L;
                l_167[1][0][0] ^= (l_219 = (((+g_12[1].f3) , p_25) , (l_208 = (p_23 ^ ((p_25.f0.f2 & p_26.f0) , g_113[0].f0)))));
            }
        }
    }
    for (p_25.f2 = 0; (p_25.f2 <= 0); p_25.f2 += 1)
    { 
        union U5 l_222[2] = {{4L},{4L}};
        int32_t l_230 = 1L;
        int32_t l_232[5][4][3] = {{{0x4E99174BL,0xFDEEC52BL,(-10L)},{1L,1L,0L},{0xF605A33BL,0x0CAA3BF2L,(-10L)},{0x675B0FBBL,0xF605A33BL,(-10L)}},{{0xB54CC1A9L,0x6B1D4C4AL,0L},{0xFDEEC52BL,0x675B0FBBL,(-10L)},{0x0CAA3BF2L,0xD3FFD625L,(-10L)},{0x6B1D4C4AL,0xB54CC1A9L,0L}},{{0xD3FFD625L,0x4E99174BL,(-10L)},{0x4E99174BL,0xFDEEC52BL,(-10L)},{1L,1L,0L},{0xF605A33BL,0x0CAA3BF2L,(-10L)}},{{0x675B0FBBL,0xF605A33BL,(-10L)},{0xB54CC1A9L,0x6B1D4C4AL,0L},{0xFDEEC52BL,0x675B0FBBL,(-10L)},{0x0CAA3BF2L,0xD3FFD625L,(-10L)}},{{0x6B1D4C4AL,0xB54CC1A9L,0L},{0xD3FFD625L,0x4E99174BL,(-10L)},{0x4E99174BL,0xFDEEC52BL,(-10L)},{1L,1L,0L}}};
        int8_t l_248 = 1L;
        uint8_t l_253 = 255UL;
        uint32_t l_254 = 0UL;
        int i, j, k;
        g_168 = g_122[0];
        if ((0L | l_121[3]))
        { 
            for (p_26.f1 = 0; (p_26.f1 <= 0); p_26.f1 += 1)
            { 
                g_163 = (g_168 = ((safe_sub_func_uint16_t_u_u((p_22.f0 > g_2[0]), (l_222[0] , (safe_div_func_int32_t_s_s(g_113[0].f1, g_2[0]))))) > p_25.f2));
                if (p_23)
                    break;
            }
            if (l_207)
                break;
        }
        else
        { 
            uint8_t l_225 = 248UL;
            int32_t l_231[2][4][1] = {{{(-1L)},{(-6L)},{(-1L)},{(-6L)}},{{(-1L)},{(-6L)},{(-1L)},{(-6L)}}};
            int i, j, k;
            g_168 = (l_230 = ((g_35.f0 ^= (((p_26.f0 != l_153) < (l_225 == (safe_unary_minus_func_uint32_t_u((~(safe_add_func_uint64_t_u_u((g_55 == l_225), l_225))))))) <= p_25.f3)) || p_22.f0));
            ++g_233;
        }
        for (g_164 = 0; (g_164 >= 0); g_164 -= 1)
        { 
            struct S0 l_236 = {0x26L,1UL,-1L};
            for (p_22.f1 = 0; (p_22.f1 <= 0); p_22.f1 += 1)
            { 
                int i, j, k;
                g_237 = l_236;
                g_55 = ((((safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(0xD097L, ((safe_sub_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(l_72[(g_164 + 1)][(p_22.f1 + 1)][p_25.f2], (g_168 < (((g_165 = (((safe_mod_func_int32_t_s_s((g_35.f2 = l_248), p_26.f0)) ^ p_25.f1) == g_34.f0.f2)) ^ 0x0DL) <= 4UL)))), l_236.f1)) ^ g_162[0][1][1]))), l_41.f2)) | p_22.f0) != 0xB9L) || g_164);
            }
            l_230 &= (((p_22.f1 |= (l_232[0][3][1] && (((g_198 , (safe_mul_func_uint8_t_u_u(((g_169 >= (((((((--g_30) || ((p_26.f0 | g_12[1].f0) < 0x91F10E8DL)) == g_163) < p_24.f0) || g_55) < 0x8BFD10A0L) && p_24.f0)) != g_122[1]), (-2L)))) , l_253) != g_12[1].f2))) == (-1L)) < l_254);
        }
    }
    return l_186;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_12[i].f0, "g_12[i].f0", print_hash_value);
        transparent_crc(g_12[i].f1, "g_12[i].f1", print_hash_value);
        transparent_crc(g_12[i].f2, "g_12[i].f2", print_hash_value);
        transparent_crc(g_12[i].f3, "g_12[i].f3", print_hash_value);

    }
    transparent_crc(g_27.f0, "g_27.f0", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_34.f0.f0, "g_34.f0.f0", print_hash_value);
    transparent_crc(g_34.f0.f1, "g_34.f0.f1", print_hash_value);
    transparent_crc(g_34.f0.f2, "g_34.f0.f2", print_hash_value);
    transparent_crc(g_35.f0, "g_35.f0", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_73[i][j], "g_73[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_113[i].f0, "g_113[i].f0", print_hash_value);
        transparent_crc(g_113[i].f1, "g_113[i].f1", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_122[i], "g_122[i]", print_hash_value);

    }
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_162[i][j][k], "g_162[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_198.f0, "g_198.f0", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_237.f0, "g_237.f0", print_hash_value);
    transparent_crc(g_237.f1, "g_237.f1", print_hash_value);
    transparent_crc(g_237.f2, "g_237.f2", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
