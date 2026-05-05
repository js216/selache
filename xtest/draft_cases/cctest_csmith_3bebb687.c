// SPDX-License-Identifier: MIT
// cctest_csmith_3bebb687.c --- cctest case csmith_3bebb687 (csmith seed 1005303431)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x29bf44c4 */

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

// Options:   -s 1005303431 -o /tmp/csmith_gen_eato_wxx/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int32_t g_2[1][3] = {{0x831713B9L,0x831713B9L,0x831713B9L}};
static int64_t g_19[1][2] = {{0x80E033C225155467LL,0x80E033C225155467LL}};
static uint32_t g_21[2] = {0xD39D9827L,0xD39D9827L};
static int64_t g_31 = 0x5E9D070FEEA3821CLL;
static int32_t g_45 = 4L;
static uint8_t g_47 = 1UL;
static int32_t g_57 = 3L;
static uint16_t g_81 = 0x75CAL;
static int64_t g_103 = 1L;
static uint16_t g_106[4] = {6UL,6UL,6UL,6UL};
static int32_t g_118 = 0xBB118774L;
static uint32_t g_119 = 0UL;
static uint16_t g_128 = 0x3852L;
static uint8_t g_136[1] = {5UL};
static uint64_t g_143 = 0xD27D1E1293A16EC9LL;
static int32_t g_196 = 1L;



static const uint32_t  func_1(void);
static int16_t  func_7(uint32_t  p_8, const int8_t  p_9, uint32_t  p_10, uint16_t  p_11);
static int64_t  func_13(const uint16_t  p_14, const uint8_t  p_15, int32_t  p_16, uint64_t  p_17);




static const uint32_t  func_1(void)
{ 
    int8_t l_18 = 0xB5L;
    int32_t l_199 = 0x27D90806L;
    int32_t l_202[1];
    int i;
    for (i = 0; i < 1; i++)
        l_202[i] = (-3L);
    for (g_2[0][2] = 0; (g_2[0][2] > 3); g_2[0][2] = safe_add_func_int8_t_s_s(g_2[0][2], 8))
    { 
        int32_t l_12 = 0x1B61BAB5L;
        uint32_t l_203 = 0x8DF259C8L;
        int32_t l_204 = 0x89A32396L;
        l_199 = (safe_div_func_int32_t_s_s((func_7(l_12, g_2[0][2], (func_13(g_2[0][2], g_2[0][2], g_2[0][0], l_18) | g_2[0][1]), g_2[0][1]) , 0L), 0x5545A2E4L));
        l_204 = (l_199 & ((l_202[0] = ((0x96L || (safe_div_func_uint64_t_u_u(1UL, 0x9F1E3D1283D66D58LL))) || g_128)) != l_203));
        l_199 = (l_12 && l_202[0]);
    }
    return l_202[0];
}



static int16_t  func_7(uint32_t  p_8, const int8_t  p_9, uint32_t  p_10, uint16_t  p_11)
{ 
    uint64_t l_172 = 0xFAD5DA70D91B73B2LL;
    int32_t l_177[2][3] = {{0L,(-3L),0L},{0L,(-3L),0L}};
    int64_t l_190 = 0xCAA41AA79352E0F3LL;
    int i, j;
    for (g_119 = 4; (g_119 >= 6); g_119 = safe_add_func_uint16_t_u_u(g_119, 4))
    { 
        uint8_t l_175 = 1UL;
        int32_t l_176[4][1] = {{0x73355EA1L},{3L},{0x73355EA1L},{3L}};
        int i, j;
        g_118 = (safe_sub_func_int32_t_s_s((+((((safe_rshift_func_uint16_t_u_u(((+((((((~0L) <= ((safe_mul_func_uint16_t_u_u((((l_177[0][2] &= ((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((g_106[1] = (safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((l_176[0][0] = ((((((safe_sub_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(l_172, (safe_add_func_int8_t_s_s(0xECL, g_128)))) <= g_47), p_11)) == l_172) ^ 1L) & l_175) >= 0x944FL) && g_136[0])) || g_2[0][2]), l_175)), 0x4492BDCAL))), 3)) >= l_172), 15)) , g_57)) , 0UL) , 0x4C91L), l_172)) > 1L)) , p_9) ^ 0x1E00D0B8L) != p_9) <= p_11)) , 0x269BL), g_136[0])) >= 4UL) >= 0xAA0BB554L) >= 0x32FEL)), 0x4B0332E8L));
        for (g_31 = 0; (g_31 <= 0); g_31 += 1)
        { 
            int16_t l_187 = (-6L);
            int i, j;
            l_177[(g_31 + 1)][g_31] = (+((safe_mod_func_uint32_t_u_u(2UL, ((((safe_sub_func_uint16_t_u_u((~((~((safe_add_func_int32_t_s_s((g_136[g_31] <= l_177[g_31][(g_31 + 2)]), 0xF9E2A9A6L)) & l_176[2][0])) , l_187)), 0x5AD3L)) ^ p_9) | 246UL) && 0x15L))) & p_11));
        }
        g_118 = (safe_sub_func_int16_t_s_s((l_190 | p_11), (safe_mul_func_int16_t_s_s((+(safe_lshift_func_uint8_t_u_u(((g_196 = (-1L)) , l_175), 3))), (-7L)))));
    }
    l_177[0][2] = (((-1L) == (safe_add_func_uint16_t_u_u(0x3823L, g_57))) <= g_136[0]);
    return g_106[3];
}



static int64_t  func_13(const uint16_t  p_14, const uint8_t  p_15, int32_t  p_16, uint64_t  p_17)
{ 
    uint8_t l_20 = 1UL;
    uint32_t l_30 = 0xC9FF7503L;
    int32_t l_38 = 1L;
    int16_t l_64 = 1L;
    int32_t l_104 = 7L;
    int64_t l_134 = 0x795CCE42A8B0C0B0LL;
    int16_t l_146 = 0x022FL;
    for (p_16 = 0; (p_16 <= 0); p_16 += 1)
    { 
        uint32_t l_29 = 0x2452A2C7L;
        int32_t l_36[4][4] = {{9L,9L,9L,9L},{9L,9L,9L,9L},{9L,9L,9L,9L},{9L,9L,9L,9L}};
        int32_t l_37 = 2L;
        uint32_t l_65 = 0xDABC5D6BL;
        int i, j;
        for (p_17 = 0; (p_17 <= 0); p_17 += 1)
        { 
            int32_t l_46 = (-4L);
            int i, j;
            g_21[1] = (l_20 = g_19[p_17][(p_17 + 1)]);
            if ((((8L ^ (!(!((g_19[0][1] >= p_15) != 4294967295UL)))) , p_14) >= p_16))
            { 
                g_31 = (safe_unary_minus_func_uint16_t_u((p_16 < (((safe_rshift_func_int16_t_s_u(((2L < ((safe_div_func_uint64_t_u_u(((l_29 || 0x8464D91BL) == p_15), 0xA30B91300D3B51ADLL)) , 0x481D3EFE35FE57B6LL)) < g_19[p_17][(p_17 + 1)]), 13)) ^ p_15) , l_30))));
            }
            else
            { 
                uint8_t l_39 = 0x85L;
                int32_t l_44 = 1L;
                l_37 = ((g_21[1] > ((0L == ((safe_mod_func_int8_t_s_s((l_36[1][0] |= (safe_rshift_func_int8_t_s_s((g_21[1] != 0x42L), p_15))), 0xCEL)) && 0L)) , g_2[0][2])) || g_2[0][2]);
                g_45 = (l_36[1][0] < ((18446744073709551607UL != ((--l_39) & (safe_rshift_func_uint8_t_u_s(((((g_21[1] >= l_44) & 0x27CF5738L) > g_19[p_17][(p_17 + 1)]) >= p_14), p_17)))) , g_2[0][1]));
            }
            for (l_38 = 0; (l_38 <= 0); l_38 += 1)
            { 
                int i, j;
                l_37 = (l_36[(l_38 + 1)][(p_17 + 2)] = l_36[p_17][(l_38 + 1)]);
                g_47++;
                g_57 = (((((safe_unary_minus_func_int8_t_s(((l_46 ^= g_19[0][0]) != (safe_mul_func_int16_t_s_s(g_31, (((safe_mul_func_uint8_t_u_u(((safe_div_func_int32_t_s_s(0xDBA00669L, p_17)) > p_14), 0xEBL)) != g_2[0][2]) > l_38)))))) < p_16) && p_14) , p_14) == p_15);
            }
        }
        l_65 = ((+(g_45 , ((safe_lshift_func_uint16_t_u_s((p_14 != (!l_64)), l_29)) <= p_15))) ^ l_36[1][0]);
        for (l_38 = 0; (l_38 >= 0); l_38 -= 1)
        { 
            uint32_t l_72 = 0x2CF88EA9L;
            int32_t l_73[3][4];
            uint8_t l_101 = 0xE4L;
            int64_t l_105 = (-4L);
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 4; j++)
                    l_73[i][j] = 0x3EDE1F3CL;
            }
            for (l_29 = 0; (l_29 <= 3); l_29 += 1)
            { 
                int i, j;
                l_36[(p_16 + 1)][(l_38 + 3)] &= ((((l_37 = ((((l_72 = (g_19[l_38][(p_16 + 1)] = (safe_lshift_func_uint8_t_u_u(((g_19[l_38][(p_16 + 1)] <= ((safe_add_func_int32_t_s_s(g_47, 3L)) , 0x36F110B0F3EF28B5LL)) < p_16), 4)))) && 0x0FED0A01C1786B75LL) ^ l_73[2][1]) <= g_21[1])) >= 0L) | p_16) , g_21[1]);
                if (p_16)
                    break;
                g_81 = ((l_73[1][2] = (!(g_45 || ((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(g_47, ((safe_add_func_int32_t_s_s(g_21[1], p_15)) <= 2UL))), 65528UL)) > g_21[1])))) < l_37);
            }
            if (((0x2CA4L == ((safe_unary_minus_func_int32_t_s((~(g_19[l_38][(l_38 + 1)] , (((((((+g_57) < 0x81C3794E43DE26F3LL) >= l_65) <= p_17) , 0x4EL) > g_57) && 18446744073709551612UL))))) >= 0x37L)) == 0L))
            { 
                int16_t l_102 = 0xBBB5L;
                if (p_16)
                    break;
                g_103 = ((safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s((g_21[1] , ((((safe_add_func_uint32_t_u_u(((safe_add_func_int32_t_s_s(((p_17 > (((((g_57 && 0x27E8BA16L) && 0L) < l_101) >= l_20) && 0x3A54L)) <= 0x7363D2F63B645C32LL), 0x181DD90CL)) > p_16), 5UL)) , 0xF4C6L) == 0L) , p_16)), 2)), 0)) ^ 0xE1E60B5FL), g_57)), l_102)) ^ g_57);
            }
            else
            { 
                l_104 |= (-9L);
                l_104 = (l_36[3][2] = 0xD0C5B634L);
                --g_106[0];
            }
            for (l_65 = 0; (l_65 <= 0); l_65 += 1)
            { 
                uint8_t l_117 = 0x35L;
                g_119 = (safe_div_func_uint64_t_u_u(p_15, ((safe_rshift_func_uint8_t_u_s((((((g_118 = ((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((p_17 > l_117), 9)), l_104)) & p_14)) < 0xCDL) > p_14) , 0x23L) > 247UL), 6)) ^ g_21[1])));
                return g_57;
            }
        }
        for (l_30 = 0; (l_30 <= 0); l_30 += 1)
        { 
            uint16_t l_127 = 0x128EL;
            int32_t l_135 = (-1L);
            int32_t l_141[1][3];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_141[i][j] = 0xA327EC85L;
            }
            for (g_118 = 0; (g_118 <= 0); g_118 += 1)
            { 
                uint32_t l_133[3][3];
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_133[i][j] = 9UL;
                }
                g_128 |= (l_127 = ((g_106[0] = (((((safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(g_21[1], g_31)), (safe_lshift_func_uint8_t_u_u((~0x81L), 1)))) <= g_2[0][2]) & p_15) ^ 9L) >= g_106[2])) == 9L));
                l_135 = ((g_19[l_30][(g_118 + 1)] ^= (0xDAF6EE45795A9035LL ^ ((l_133[1][0] = ((safe_sub_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((g_45 , 5UL), 0x5BL)), p_15)) & g_21[1])) < 0x4AEDB132L))) || l_134);
                --g_136[0];
            }
            if ((((2L > 1UL) >= 0L) && 0x5DFAL))
            { 
                return p_14;
            }
            else
            { 
                int32_t l_139 = 4L;
                int32_t l_140 = 0x4E788166L;
                int32_t l_142 = 0x94615860L;
                g_143--;
            }
            for (l_104 = 0; (l_104 >= 0); l_104 -= 1)
            { 
                if (p_15)
                    break;
            }
        }
    }
    return l_146;
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
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_19[i][j], "g_19[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_21[i], "g_21[i]", print_hash_value);

    }
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_106[i], "g_106[i]", print_hash_value);

    }
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_136[i], "g_136[i]", print_hash_value);

    }
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_196, "g_196", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
