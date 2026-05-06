// SPDX-License-Identifier: MIT
// cctest_csmith_f7a0195a.c --- cctest case csmith_f7a0195a (csmith seed 4154464602)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x77f74671 */

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

// Options:   -s 4154464602 -o /tmp/csmith_gen_hcuo4zg0/csmith.c --concise --no-pointers --no-structs --no-unions --no-bitfields --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5

static long __undefined;



static uint32_t g_2 = 0x41B3C692L;
static uint32_t g_58[1] = {0x69D0863EL};
static uint32_t g_59 = 1UL;
static int64_t g_60 = 0xE1CF2BBA2D3C5EBBLL;
static int32_t g_65 = 0xF7D9FD59L;
static int64_t g_89 = 0x025B9248679C0213LL;
static uint16_t g_168 = 65534UL;
static uint16_t g_200 = 7UL;
static uint8_t g_205 = 0x9FL;
static uint8_t g_214 = 0UL;
static int16_t g_277 = (-1L);
static uint32_t g_282 = 4294967295UL;
static uint16_t g_286 = 0x96E6L;
static int32_t g_301 = 0xA8359A10L;
static uint16_t g_323 = 2UL;
static uint8_t g_338[1][2][1] = {{{0x36L},{0x36L}}};
static int32_t g_375 = 0x536921B3L;



static uint8_t  func_1(void);
static uint8_t  func_7(const int64_t  p_8, int64_t  p_9, const uint64_t  p_10, uint32_t  p_11);
static uint32_t  func_16(uint32_t  p_17, uint32_t  p_18);
static int32_t  func_20(int32_t  p_21, uint8_t  p_22, int32_t  p_23, int32_t  p_24, int64_t  p_25);




static uint8_t  func_1(void)
{ 
    uint16_t l_19 = 0xFDADL;
    int32_t l_322 = (-2L);
    int32_t l_334 = 3L;
    int32_t l_336 = 0xD17AB870L;
    int8_t l_352 = (-7L);
    if (g_2)
    { 
        int8_t l_97 = 0xA6L;
        int32_t l_98 = (-1L);
        const int32_t l_278 = 0x9696E75FL;
        uint8_t l_326 = 255UL;
        int32_t l_329 = 0x17275740L;
        uint32_t l_339 = 4294967288UL;
        if ((((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s(0xBB67L, ((func_7((l_98 = (g_2 < ((((safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((func_16(l_19, g_2) , g_89), (-5L))), l_19)) & 0xCAF05E375EFDD839LL) >= g_2) | l_97))), l_19, g_2, g_2) == g_2) , l_278))), l_19)) , 0xCEL) , 0x3181A392L))
        { 
            uint32_t l_279 = 18446744073709551614UL;
            int32_t l_285 = 0x201380ACL;
            uint8_t l_321 = 0xFCL;
            if (((l_279 | (safe_sub_func_int16_t_s_s((-1L), g_2))) , (l_19 <= g_89)))
            { 
                ++g_282;
                ++g_286;
            }
            else
            { 
                uint8_t l_289 = 0UL;
                g_301 = ((g_65 ^= l_289) > ((l_285 = (+(safe_mod_func_uint64_t_u_u(((safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((l_289 != g_200), (safe_div_func_int32_t_s_s(((((safe_mul_func_uint8_t_u_u(247UL, l_19)) ^ g_60) ^ l_279) ^ 0x67L), 0xDD240B2EL)))), g_2)) , l_97), l_97)))) , g_205));
                l_98 = ((safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s((((safe_lshift_func_int8_t_s_u(((0x1DL > g_58[0]) , (safe_unary_minus_func_int64_t_s(((l_285 >= (!(g_286 = ((safe_add_func_uint8_t_u_u((((g_214 = ((safe_lshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s((safe_add_func_int32_t_s_s((~(safe_div_func_int16_t_s_s(l_321, 0x0B53L))), 1UL)), 2L)), g_200)) , g_214)) <= l_289) < g_89), l_278)) > g_58[0])))) != 0L)))), l_289)) && 0x7A8C7C72AEE829FBLL) >= 0UL), g_301)), 6)) & 0xCEL);
                g_65 = l_278;
            }
        }
        else
        { 
            int64_t l_335 = 0xA369EC73FAEBFF02LL;
            int32_t l_337 = 0xA7DD3274L;
            --g_323;
            l_326 &= 0L;
            l_339 = ((l_337 ^= ((safe_add_func_uint16_t_u_u((l_329 != (l_336 ^= (safe_mod_func_uint8_t_u_u((5UL | (safe_mod_func_uint64_t_u_u(0xA575AA0C160E5AE0LL, (l_334 &= (0x0E6E029866E211E0LL ^ g_301))))), l_335)))), 65535UL)) && g_58[0])) >= g_338[0][1][0]);
        }
        l_334 = (((g_277 = ((((safe_lshift_func_int16_t_s_u((l_98 &= ((l_334 , g_214) == (((!g_277) , (g_2 | 0x4A185561L)) | g_2))), l_334)) , (-4L)) , l_97) && 0xF0988678L)) == g_286) > (-2L));
        g_65 = 0xCEA18A9DL;
    }
    else
    { 
        uint16_t l_343 = 0x9F82L;
        l_336 = (g_301 , (((g_214 || g_58[0]) && (l_343 = (((g_277 = ((0x3CDDC259C397170ALL >= g_59) < g_89)) <= g_282) , l_322))) >= l_322));
        if ((g_301 = (safe_lshift_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s((l_352 = 0xC697FA2FL), ((safe_mul_func_int16_t_s_s(g_2, (safe_add_func_int32_t_s_s(((safe_div_func_uint16_t_u_u(g_58[0], g_89)) , 0x16CAFFD9L), g_200)))) == l_336))), 0x5F33L)) ^ l_334), 9)) >= l_322) | 0x93D5L), g_282))))
        { 
            uint8_t l_373 = 1UL;
            int32_t l_374 = 0L;
            int32_t l_376[3];
            int i;
            for (i = 0; i < 3; i++)
                l_376[i] = 5L;
            l_376[2] |= ((g_375 = (((safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(0x8FL, (safe_add_func_int16_t_s_s(g_58[0], ((((safe_add_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((l_374 &= ((safe_rshift_func_uint8_t_u_s(251UL, 3)) < (((safe_rshift_func_uint8_t_u_u(g_58[0], 4)) & (-6L)) <= l_373))) , 1L), l_343)), 0x4EL)) < 1L) && 0xE6L) | g_60))))), g_168)) & g_65) >= 0x83L)) == g_323);
        }
        else
        { 
            l_336 ^= (safe_add_func_uint32_t_u_u(g_301, g_277));
        }
    }
    return g_65;
}



static uint8_t  func_7(const int64_t  p_8, int64_t  p_9, const uint64_t  p_10, uint32_t  p_11)
{ 
    uint32_t l_99 = 4294967290UL;
    int32_t l_104 = (-9L);
    int32_t l_110 = 0L;
    uint32_t l_111[5] = {0UL,0UL,0UL,0UL,0UL};
    uint64_t l_201 = 0x6BE4A3EB8F91888FLL;
    const int64_t l_241 = (-10L);
    const int32_t l_262[2] = {(-1L),(-1L)};
    int i;
    --l_99;
    if ((g_65 || (((safe_lshift_func_uint8_t_u_u((l_104 = (l_99 , p_8)), (safe_mod_func_uint8_t_u_u((+(((((((((l_110 = (safe_mod_func_uint64_t_u_u(0UL, 7L))) , g_89) || l_99) && l_110) ^ p_10) < 0x4D9C5E1620D8A88ELL) , g_65) && l_111[4]) == 0x18L)), l_111[0])))) >= 4294967295UL) || g_58[0])))
    { 
        uint64_t l_132[4] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
        int32_t l_133 = 0xFB8CC5E0L;
        uint32_t l_134 = 0x8199CC8CL;
        const int8_t l_202[4] = {(-8L),(-8L),(-8L),(-8L)};
        int32_t l_210 = 0x75B32F8AL;
        int32_t l_213[2];
        int i;
        for (i = 0; i < 2; i++)
            l_213[i] = 0x4DE4FE5DL;
        if ((safe_add_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((g_60 , 0x8C892F93L), p_11)) == (0x4261L != 0xF588L)), 1L)))
        { 
            int32_t l_118 = 0x8654C91EL;
            int64_t l_171 = (-1L);
            for (g_60 = 0; (g_60 < 3); g_60 = safe_add_func_int16_t_s_s(g_60, 1))
            { 
                l_118 = g_89;
                return g_58[0];
            }
            if ((safe_div_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((!g_2), (l_133 = (l_104 = (g_89 , (((safe_div_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u(((g_65 ^= (safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((((((g_58[0] , (l_132[0] = (g_58[0] == p_10))) | p_10) & p_9) > l_133) && 0L), 5)), p_8))) <= p_11), p_10)) <= 6L) < 0x8DB3D834670EA8E1LL), p_10)) & 18446744073709551608UL) , l_134)))))), 255UL)))
            { 
                int32_t l_145 = 0x8A40D3F7L;
                l_118 = (((++g_59) | p_8) <= ((safe_lshift_func_uint16_t_u_u((((safe_sub_func_uint32_t_u_u(0UL, (safe_sub_func_int64_t_s_s((safe_div_func_int32_t_s_s((g_65 = (0x75E5L < (l_133 ^= g_60))), g_58[0])), 0x3537EA6E2EE972AELL)))) , p_9) != 0xC8B3FF4847CB24E9LL), g_89)) & 1UL));
                l_145 = g_89;
                l_110 = ((safe_div_func_int64_t_s_s((safe_rshift_func_int8_t_s_u(g_59, 7)), g_2)) < (safe_lshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((((g_58[0] , (safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((safe_add_func_int64_t_s_s((p_9 = (p_10 < g_2)), 0x7D7005AE1FFEC589LL)), g_2)), l_132[0]))) != p_8) == g_65), l_145)), l_145)), 13)));
            }
            else
            { 
                uint16_t l_162 = 4UL;
                int32_t l_167[3][5] = {{0x471B29B6L,0x471B29B6L,0x471B29B6L,0x471B29B6L,0x471B29B6L},{0L,0L,0L,0L,0L},{0x471B29B6L,0x471B29B6L,0x471B29B6L,0x471B29B6L,0x471B29B6L}};
                int i, j;
                l_167[2][3] = (g_65 = (l_162 & ((safe_rshift_func_uint16_t_u_s(g_65, (safe_add_func_uint16_t_u_u(((((g_59 ^ (--g_168)) | ((((l_118 = (p_10 , l_171)) < (-3L)) > (-1L)) , l_111[3])) ^ 0x904AA4E2L) <= g_2), p_9)))) > 0xA1AAA12BL)));
                l_167[2][3] = l_118;
                return p_11;
            }
        }
        else
        { 
            int32_t l_188 = (-2L);
            int32_t l_206[1][3][2];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_206[i][j][k] = 0x4B22FE7AL;
                }
            }
lbl_217:
            if ((l_188 = ((safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((g_200 |= ((((l_188 || (l_133 = 0xB4B3FC93EDB1A997LL)) >= (((safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((!(((safe_lshift_func_int16_t_s_s(0xE02AL, 6)) >= ((((((l_111[2] || g_89) && (-1L)) > p_9) != g_89) , p_10) < 0xD4L)) < p_9)), 65527UL)), 0x260BL)), l_132[0])) , 0x73C81C1E56C3BA57LL) | 0x82B91D3D6DC24D73LL)) && p_10) , g_59)), 7)), l_201)), 0)) == 0UL), l_202[2])) , p_8), 2L)), l_202[2])) > g_2), g_58[0])), g_89)) && 0x47BAL)))
            { 
                l_206[0][0][0] ^= ((safe_mod_func_uint64_t_u_u(l_188, (l_133 ^= (g_2 > ((p_9 & (g_205 = l_132[0])) != 0xDD3FA259L))))) && 4294967295UL);
            }
            else
            { 
                g_65 = 1L;
            }
            for (l_188 = 0; (l_188 <= 3); l_188 += 1)
            { 
                int32_t l_207 = 1L;
                int32_t l_208 = 0xEEB84604L;
                int32_t l_209 = (-6L);
                int32_t l_211 = 0x4F34597DL;
                int32_t l_212 = 0x6490B889L;
                g_214++;
                if (g_2)
                    goto lbl_217;
            }
        }
        return p_10;
    }
    else
    { 
        uint64_t l_224 = 0x4EFB1311AD5033BBLL;
        l_110 = (l_104 ^ ((0x04D0L ^ p_9) & 0x5D00A86ED117DD73LL));
        if (((safe_lshift_func_uint8_t_u_u((g_214 ^= g_58[0]), (l_104 = (safe_sub_func_int16_t_s_s(0xA217L, ((-9L) > ((safe_lshift_func_int8_t_s_s(p_11, 3)) , l_224))))))) == p_10))
        { 
            uint16_t l_229 = 0xA5F8L;
            int32_t l_238 = 0xECE7D4CFL;
            int32_t l_239 = 1L;
            uint32_t l_240 = 0x6EAA2CC3L;
            l_240 = (safe_add_func_uint8_t_u_u((g_200 >= (safe_lshift_func_uint8_t_u_s((((((l_229 != ((safe_mod_func_uint64_t_u_u((l_239 = ((safe_mod_func_int8_t_s_s((g_65 , (safe_mod_func_int64_t_s_s((((l_104 = (((((l_238 &= (safe_div_func_int32_t_s_s(g_58[0], g_200))) , g_58[0]) <= g_59) ^ 0x0EAAB095L) <= g_2)) , p_8) , g_168), 0x4FD8FAC68DCB9292LL))), 255UL)) >= l_229)), 1UL)) | p_8)) , l_238) || g_58[0]) || l_111[3]) || g_205), 0))), 1L));
        }
        else
        { 
            return p_11;
        }
    }
    if ((l_241 , (safe_lshift_func_int16_t_s_s(g_205, 14))))
    { 
        uint64_t l_258 = 5UL;
        const int64_t l_261[5] = {0x15336B333FF0F8D7LL,0x15336B333FF0F8D7LL,0x15336B333FF0F8D7LL,0x15336B333FF0F8D7LL,0x15336B333FF0F8D7LL};
        int32_t l_263 = 0xD61C992BL;
        int i;
        l_263 = (safe_mul_func_int16_t_s_s(((((safe_mod_func_int32_t_s_s((((safe_sub_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(l_99, 2)) , (((safe_div_func_int8_t_s_s(((((((g_200 ^= (safe_lshift_func_int16_t_s_s(l_258, 0))) == g_58[0]) & (((safe_sub_func_uint8_t_u_u((0xA2L <= g_168), p_10)) | g_214) != g_59)) , l_110) == 0x6DL) <= l_258), g_58[0])) ^ g_58[0]) == g_65)), l_261[1])) && l_241), g_214)) < 0xB4L) , 0L), l_201)) < 0x14L) >= 0x4DB4BE80L) ^ l_262[0]), p_8));
        for (l_110 = 0; (l_110 <= 1); l_110 = safe_add_func_int32_t_s_s(l_110, 7))
        { 
            int32_t l_266[5];
            int i;
            for (i = 0; i < 5; i++)
                l_266[i] = (-1L);
            for (g_59 = 0; (g_59 <= 0); g_59 += 1)
            { 
                uint32_t l_267 = 0x6D48C3AEL;
                l_267++;
            }
            if (l_261[0])
                break;
        }
        g_65 &= (0x841CFB2AL & (((((((safe_mul_func_uint16_t_u_u(((p_11 || (g_277 = (safe_div_func_int64_t_s_s((~l_262[0]), (0x07ED48E4L && g_59))))) <= p_11), l_263)) , p_8) != g_59) >= p_11) != l_110) , p_10) != p_8));
    }
    else
    { 
        return g_205;
    }
    return l_262[0];
}



static uint32_t  func_16(uint32_t  p_17, uint32_t  p_18)
{ 
    int64_t l_26 = 4L;
    const uint32_t l_35 = 0xD635290CL;
    uint16_t l_36 = 65527UL;
    int32_t l_96[3][1][5] = {{{(-5L),(-5L),(-5L),(-5L),(-5L)}},{{1L,0xA7A01C18L,1L,0xA7A01C18L,1L}},{{(-5L),(-5L),(-5L),(-5L),(-5L)}}};
    int i, j, k;
    l_96[0][0][3] ^= func_20(((l_26 = 8UL) , (safe_add_func_int16_t_s_s(0x890FL, (safe_mod_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(g_2, 3)) & (safe_mul_func_uint8_t_u_u(l_26, l_35))), 255UL))))), l_36, p_18, g_2, g_2);
    return p_18;
}



static int32_t  func_20(int32_t  p_21, uint8_t  p_22, int32_t  p_23, int32_t  p_24, int64_t  p_25)
{ 
    uint32_t l_57 = 0xE99B96BCL;
    int32_t l_83 = 1L;
    int32_t l_84 = 0x3F149C99L;
    if ((safe_mul_func_int16_t_s_s((+(p_23 && (0xA3DEL ^ (((safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(g_2, ((g_60 ^= (safe_add_func_int64_t_s_s((safe_add_func_int64_t_s_s((g_59 &= ((g_58[0] = ((safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s(((+(l_57 < 0xADL)) > 0xEA4087B332E0C280LL), g_2)), p_21)) , 0x8B5A47B6L)) < 4294967295UL)), 18446744073709551615UL)), p_22))) > 1UL))) ^ p_24), l_57)) < p_23), 1)) ^ l_57) > l_57)))), 0x1DEAL)))
    { 
lbl_95:
        g_65 = ((-1L) == ((safe_sub_func_uint32_t_u_u(g_60, (l_57 , (l_57 | 0xB108A6652F52174DLL)))) != g_58[0]));
    }
    else
    { 
        int8_t l_74 = 0x4DL;
        int32_t l_80 = 0x59719BD9L;
        int32_t l_81[5];
        int32_t l_82 = 0x8344157FL;
        int8_t l_92 = 9L;
        int i;
        for (i = 0; i < 5; i++)
            l_81[i] = 0x0A73BC0EL;
        g_65 = (safe_div_func_uint16_t_u_u(((((l_84 = (safe_sub_func_uint32_t_u_u(((safe_add_func_int64_t_s_s((g_65 || ((((((((l_83 = (l_82 = (l_81[1] ^= ((p_24 = ((p_23 || (safe_lshift_func_int16_t_s_s(l_74, (~(l_80 = (safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s(g_59, l_57)), l_57))))))) , 0L)) , g_65)))) != 1UL) != 0xDA102F310E27A8D2LL) || p_24) | l_57) ^ g_60) , p_23) , 0L)), 3UL)) != 65535UL), p_23))) , 2UL) , 7UL) != l_74), g_65));
        l_82 = (l_57 != ((g_89 = (((++g_59) | (l_81[1] >= 0x8ABFL)) || ((g_58[0] = (((safe_lshift_func_uint8_t_u_u(0x13L, l_81[1])) , 0x61L) , 0x01D5BC3FL)) , l_81[1]))) , 0xBEBC4FF04DBB371DLL));
        for (p_22 = 0; (p_22 < 31); ++p_22)
        { 
            if (l_92)
            { 
                g_65 = l_83;
            }
            else
            { 
                g_65 = p_23;
            }
            for (g_89 = 0; (g_89 >= (-21)); g_89 = safe_sub_func_int32_t_s_s(g_89, 8))
            { 
                if (p_21)
                    goto lbl_95;
            }
        }
    }
    return p_22;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_58[i], "g_58[i]", print_hash_value);

    }
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    transparent_crc(g_282, "g_282", print_hash_value);
    transparent_crc(g_286, "g_286", print_hash_value);
    transparent_crc(g_301, "g_301", print_hash_value);
    transparent_crc(g_323, "g_323", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_338[i][j][k], "g_338[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_375, "g_375", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
